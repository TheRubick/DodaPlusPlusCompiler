#include <stdio.h>
#include "Doda.h"
#include "y.tab.h"
#include <iostream>

using namespace std;



static int lbl;
static int lblSwitch;
int ex(nodeType *p) {
    int lbl1, lbl2;

    if (!p) return 0;
    switch(p->type) {
    case typeCon:
        
        printf("\tpush_int\t%d\n", p->con.value); 
        break;
    case typeArg:
        cout<<"pop "<< p->arg.i<<endl;
        break;
    case typeConFloat:       
        printf("\tpush_float\t%f\n", p->conF.value); 
        break;
    case typeConBool:       
        cout<<"push_bool "<<p->conB.value<<endl; 
        break;
    case typeConChar:
        cout<<"push_char "<<p->conC.value<<endl;
        break; 
    case typeId:        
        //printf("\tpush\t%c\n", p->id.i + 'a'); 
        cout<<"push "<<p->id.i <<endl;
        break;
    case typeOpr:
        switch(p->opr.oper) {
        case FUNC:
        if (p->opr.nops > 2) {
            cout<<"PROC "<<p->opr.op[0]->id.i<<endl;
            ex(p->opr.op[1]);
            ex(p->opr.op[2]);
            cout<<"ENDP "<<p->opr.op[0]->id.i<<endl;
        }
        else{
            ex(p->opr.op[1]);
            cout<<"CALL "<<p->opr.op[0]->id.i<<endl;
        }
        break;
        case RETURN:
            ex(p->opr.op[0]);
            cout<<"RET"<<endl;
        break;
        case DO:
            printf("L%03d:\n", lbl1 = lbl++);
            ex(p->opr.op[0]);
            ex(p->opr.op[1]);
            printf("\tjnz\tL%03d\n", lbl2 = lbl++);
            printf("\tjmp\tL%03d\n", lbl1);
            printf("L%03d:\n", lbl2);
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
        break;
        case CASE:
            ex(p->opr.op[0]);//push 0 from case 0: in stack
            cout<<"compNE"<< endl;
            printf("\tjz\tL%03d\n", lbl1 = lbl++);
            ex(p->opr.op[1]);
            //printf("\tjmp\tL%03d\n", lblSwitch );
            cout<<"jmp "<<"s"<<lblSwitch<<endl;
            printf("L%03d:\n", lbl1 );
            cout<<"pop"<<endl;
        break;
        case FOR:
            ex(p->opr.op[0]); //int i = 0
            printf("L%03d:\n", lbl1 = lbl++);
            ex(p->opr.op[1]);//i < 0
            printf("\tjnz\tL%03d\n", lbl2 = lbl++);
            ex(p->opr.op[3]);
            ex(p->opr.op[2]);
            printf("\tjmp\tL%03d\n", lbl1);
            printf("L%03d:\n", lbl2);
        break;
        case WHILE:
            printf("L%03d:\n", lbl1 = lbl++);
            ex(p->opr.op[0]);
            printf("\tjnz\tL%03d\n", lbl2 = lbl++);
            ex(p->opr.op[1]);
            printf("\tjmp\tL%03d\n", lbl1);
            printf("L%03d:\n", lbl2);
            break;
        case IF:
            ex(p->opr.op[0]); // IF STATMENT 
            if (p->opr.nops > 2) {
                /* if else */
                printf("\tjnz\tL%03d\n", lbl1 = lbl++); //jz L0
                ex(p->opr.op[1]);                      //if body
                printf("\tjmp\tL%03d\n", lbl2 = lbl++);// jmp L1
                printf("L%03d:\n", lbl1);              //L0
                ex(p->opr.op[2]);                       //else body
                printf("L%03d:\n", lbl2);               //L1
            } else {
                /* if */
                printf("\tjnz\tL%03d\n", lbl1 = lbl++);
                ex(p->opr.op[1]);
                printf("L%03d:\n", lbl1);
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
            break;
        default:
            ex(p->opr.op[0]);//a+b
            ex(p->opr.op[1]);
            switch(p->opr.oper) {
            case '+':   printf("\tadd\n"); break;
            case '-':   printf("\tsub\n"); break; 
            case '*':   printf("\tmul\n"); break;
            case '/':   printf("\tdiv\n"); break;
            case '^':   printf("\tpow\n"); break;
            case '%':   printf("\tmod\n"); break;
            case AND:   printf("\tand\n"); break;
            case OR:   printf("\tor\n"); break;
            case LESS_THAN:   printf("\tcompLT\n"); break;
            case GREATER_THAN:   printf("\tcompGT\n"); break;
            case GREATER_EQUAL:    printf("\tcompGE\n"); break;
            case LESS_EQUAL:    printf("\tcompLE\n"); break;
            case NOT_EQUAL:    printf("\tcompNE\n"); break;
            case EQUAL:    printf("\tcompEQ\n"); break;
            case ';': break;
            }
        }
    }
    return 0;
}
