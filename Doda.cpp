#include <stdio.h>
#include "Doda.h"
#include "y.tab.h"
#include <iostream>
#include <fstream>
using namespace std;

static int lbl;
static int lblSwitch;
int ex(nodeType *p) {
    int lbl1, lbl2;
    ofstream resultsFile;
    resultsFile.open("resultsFile.txt",std::ios_base::app);
    if (!p) return 0;
    switch(p->type) {
    case typeCon:       
        printf("\tpush\t%d\n", p->con.value);
        resultsFile << "\tpush\t" << p->con.value << endl;
        break;
    case typeArg:
        cout<<"pop "<< p->arg.i<<endl;
        resultsFile << "pop "<< p->arg.i << endl;
        break;
    case typeConFloat:       
        printf("\tpush_float\t%f\n", p->conF.value); 
        resultsFile << "\tpush_float\t" << p->conF.value << endl;
        break;
    case typeConBool:       
        cout<<"push_bool "<<p->conB.value<<endl;
        resultsFile << "push_bool "<<p->conB.value<<endl;
        break;
    case typeConChar:
        cout<<"push_char "<<p->conC.value<<endl;
        resultsFile << "push_char "<<p->conC.value<<endl;
        break; 
    case typeId:        
        //printf("\tpush\t%c\n", p->id.i + 'a'); 
        cout<<"push "<<p->id.i <<endl;
        resultsFile << "push " <<p->id.i <<endl;
        break;
    case typeOpr:
        switch(p->opr.oper) {
        case FUNC:
        if (p->opr.nops > 2) {
            cout<<"PROC "<<p->opr.op[0]->id.i<<endl;
            resultsFile<<"PROC "<<p->opr.op[0]->id.i<<endl;
            ex(p->opr.op[1]);
            ex(p->opr.op[2]);
            cout<<"ENDP "<<p->opr.op[0]->id.i<<endl;
            resultsFile<<"ENDP "<<p->opr.op[0]->id.i<<endl;
        }
        else{
            ex(p->opr.op[1]);
            cout<<"CALL "<<p->opr.op[0]->id.i<<endl;
            resultsFile<<"CALL "<<p->opr.op[0]->id.i<<endl;
        }
        break;
        case RETURN:
            ex(p->opr.op[0]);
            cout<<"RET"<<endl;
            resultsFile<<"RET"<<endl;
        break;
        case DO:
            printf("L%03d:\n", lbl1 = lbl++);
            resultsFile << "L"<< lbl1 << ":" << endl;
            ex(p->opr.op[0]);
            ex(p->opr.op[1]);
            printf("\tjz\tL%03d\n", lbl2 = lbl++);
            resultsFile << "\tjz\tL" << lbl2 << endl;
            printf("\tjmp\tL%03d\n", lbl1);
            resultsFile << "\tjmp\tL" << lbl1 << endl;
            printf("L%03d:\n", lbl2);
            resultsFile << "L" << lbl2 << ":" << endl;
        break;
        case SWITCH:
            lblSwitch++;
            ex(p->opr.op[0]);// push cond
            ex(p->opr.op[1]);

        break;
        case DEFAULT:
            ex(p->opr.op[0]);
            //printf("L%03d:\n", lblSwitch);
            cout<<"s"<<lblSwitch<<endl;
            resultsFile<<"s"<<lblSwitch<<endl;
        break;
        case CASE:
            ex(p->opr.op[0]);//push 0 from case 0: in stack
            resultsFile << "compNE"<< endl; 
            cout<<"compNE"<< endl;L001:
            printf("\tjz\tL%03d\n", lbl1 = lbl++);
            resultsFile<<"\tjz\tL"<< lbl1 << endl;
            ex(p->opr.op[1]);
            //printf("\tjmp\tL%03d\n", lblSwitch );
            cout<<"jmp "<<"s"<<lblSwitch<<endl;
            resultsFile<<"jmp "<<"s"<<lblSwitch<<endl;
            printf("L%03d:\n", lbl1 );
            resultsFile << "L" << lbl1 << ":" << endl;
            cout<<"pop"<<endl;
            resultsFile<<"pop"<<endl;
        break;
        case FOR:
            ex(p->opr.op[0]); //int i = 0
            printf("L%03d:\n", lbl1 = lbl++);
            resultsFile << "L" << lbl1 << ":" << endl;
            ex(p->opr.op[1]);//i < 0
            printf("\tjz\tL%03d\n", lbl2 = lbl++);
            resultsFile << "\tjz\tL" << lbl2 << endl;
            ex(p->opr.op[3]);
            ex(p->opr.op[2]);
            printf("\tjmp\tL%03d\n", lbl1);
            resultsFile << "\tjmp\tL" << lbl1 << endl;
            printf("L%03d:\n", lbl2);
            resultsFile << "L" << lbl2 << ":" << endl;
        break;
        case WHILE:
            printf("L%03d:\n", lbl1 = lbl++);
            resultsFile << "L" << lbl1 << ":" << endl;
            ex(p->opr.op[0]);
            printf("\tjz\tL%03d\n", lbl2 = lbl++);
            resultsFile << "\tjz\tL" << lbl2 << endl;
            ex(p->opr.op[1]);
            printf("\tjmp\tL%03d\n", lbl1);
            resultsFile << "\tjmp\tL" << lbl1 << endl;
            printf("L%03d:\n", lbl2);
            resultsFile << "L" << lbl2 << ":" << endl;
            break;
        case IF:
            ex(p->opr.op[0]); // IF STATMENT 
            if (p->opr.nops > 2) {
                /* if else */
                printf("\tjz\tL%03d\n", lbl1 = lbl++); //jz L0
                resultsFile << "\tjz\tL" << lbl1 << endl;
                ex(p->opr.op[1]);                      //if body
                printf("\tjmp\tL%03d\n", lbl2 = lbl++);// jmp L1
                resultsFile << "\tjmp\tL" << lbl2 << endl;
                printf("L%03d:\n", lbl1);              //L0
                resultsFile << "L" << lbl1 << ":" << endl;
                ex(p->opr.op[2]);                       //else body
                printf("L%03d:\n", lbl2);               //L1
                resultsFile << "L" << lbl2 << ":" << endl;
            } else {
                /* if */
                printf("\tjz\tL%03d\n", lbl1 = lbl++);
                resultsFile << "\tjz\tL" << lbl1 << endl;
                ex(p->opr.op[1]);
                printf("L%03d:\n", lbl1);
                resultsFile << "L" << lbl1 << ":" << endl;
            }
            break;
        case '=':       //a = foo(2,3)
            ex(p->opr.op[1]); //pop a
            //printf("\tpop\t%c\n", p->opr.op[0]->id.i + 'a');
            //cout<<"pop "<<p->opr.op[0]->id.i<<endl;
            ex(p->opr.op[0]);
            break;
        case NOT:    
            ex(p->opr.op[0]);
            printf("\tnot\n");
            resultsFile << "\tnot" << endl;
            break;
        default:
            ex(p->opr.op[0]);//a+b
            ex(p->opr.op[1]);
            switch(p->opr.oper) {
            case '+':   printf("\tadd\n"); resultsFile << "\tadd" << endl; break;
            case '-':   printf("\tsub\n"); resultsFile << "\tsub" << endl; break; 
            case '*':   printf("\tmul\n"); resultsFile << "\tmul" << endl; break;
            case '/':   printf("\tdiv\n"); resultsFile << "\tdiv" << endl; break;
            case '^':   printf("\tpow\n"); resultsFile << "\tpow" << endl; break;
            case '%':   printf("\tmod\n"); resultsFile << "\tmod" << endl; break;
            case AND:   printf("\tand\n"); resultsFile << "\tand" << endl; break;
            case OR:   printf("\tor\n"); resultsFile << "\tor" << endl; break;
            case LESS_THAN:   printf("\tcompLT\n"); resultsFile << "\tcompLT" << endl; break;
            case GREATER_THAN:   printf("\tcompGT\n"); resultsFile << "\tcompGT" << endl; break;
            case GREATER_EQUAL:    printf("\tcompGE\n"); resultsFile << "\tcompGE" << endl; break;
            case LESS_EQUAL:    printf("\tcompLE\n"); resultsFile << "\tcompLE" << endl; break;
            case NOT_EQUAL:    printf("\tcompNE\n"); resultsFile << "\tcompNE" << endl; break;
            case EQUAL:    printf("\tcompEQ\n"); resultsFile << "\tcompEQ" << endl; break;
            case ';': break;
            }
        }
    }
    resultsFile.close();
    return 0;
}
