#include <stdio.h>
#include "Doda.h"
#include "y.tab.h"
#include <iostream>

using namespace std;
<<<<<<< HEAD


=======
>>>>>>> gellesh

static int lbl;
static int lblSwitch;
int ex(nodeType *p)
{
    int lbl1, lbl2;
    ofstream resultsFile;
    resultsFile.open("resultsFile.txt",std::ios_base::app);
    if (!p)
        return 0;
    switch (p->type)
    {
    case typeCon:
<<<<<<< HEAD
        
        printf("\tpush_int\t%d\n", p->con.value); 
=======

        //printf("\tpush_int\t%d\n", p->con.value);
        resultsFile << "push_int " << p->con.value << endl;
>>>>>>> gellesh
        break;
    case typeArg:
        resultsFile << "pop " << p->arg.i << endl;
        break;
    case typeConFloat:
        //printf("\tpush_float\t%f\n", p->conF.value);
        resultsFile << "push_float " << p->conF.value << endl;
        break;
    case typeConBool:
        resultsFile << "push_bool " << p->conB.value << endl;
        break;
    case typeConChar:
        resultsFile << "push_char " << p->conC.value << endl;
        break;
    case typeId:
        //printf("\tpush\t%c\n", p->id.i + 'a');
        resultsFile << "push " << p->id.i << endl;
        break;
    case typeOpr:
        switch (p->opr.oper)
        {
        case FUNC:
            if (p->opr.nops > 2)
            {
                resultsFile << "PROC " << p->opr.op[0]->id.i << endl;
                ex(p->opr.op[1]);
                ex(p->opr.op[2]);
                resultsFile << "ENDP " << p->opr.op[0]->id.i << endl;
            }
            else
            {
                ex(p->opr.op[1]);
                resultsFile << "CALL " << p->opr.op[0]->id.i << endl;
            }
            break;
        case RETURN:
            ex(p->opr.op[0]);
            resultsFile << "RET" << endl;
            break;
        case DO:
            //printf("L%03d:\n", lbl1 = lbl++);
            lbl1 = lbl++;
            resultsFile << "L"<< lbl1 << ":" << endl;
            ex(p->opr.op[0]);
            ex(p->opr.op[1]);
            //printf("\tjnz\tL%03d\n", lbl2 = lbl++);
            lbl2 = lbl++;
            resultsFile << "jnz L" << lbl2 << endl;
            //printf("\tjmp\tL%03d\n", lbl1);
            resultsFile << "jmp L" << lbl1 << endl;
            //printf("L%03d:\n", lbl2);
            resultsFile << "L" << lbl2 << ":" << endl;
            break;
        case SWITCH:
            lblSwitch++;
            ex(p->opr.op[0]); // push cond
            ex(p->opr.op[1]);

            break;
        case DEFAULT:
            ex(p->opr.op[0]);
            //printf("L%03d:\n", lblSwitch);
            resultsFile << "s" << lblSwitch <<":"<< endl;
            break;
        case CASE:
            ex(p->opr.op[0]); //push 0 from case 0: in stack
            resultsFile << "compNE" << endl;
            //printf("\tjz\tL%03d\n", lbl1 = lbl++);
            lbl1 = lbl++;
            resultsFile<<"jz L"<< lbl1 << endl;
            ex(p->opr.op[1]);
            //printf("\tjmp\tL%03d\n", lblSwitch );
            resultsFile << "jmp s"<< lblSwitch << endl;
            //printf("L%03d:\n", lbl1);
            resultsFile << "L" << lbl1 << ":" << endl;
            resultsFile << "pop" << endl;
            break;
        case FOR:
            ex(p->opr.op[0]); //int i = 0
            //printf("L%03d:\n", lbl1 = lbl++);
            lbl1 = lbl++;
            resultsFile << "L" << lbl1 << ":" << endl;
            ex(p->opr.op[1]); //i < 0
            //printf("\tjnz\tL%03d\n", lbl2 = lbl++);
            lbl2 = lbl++;
            resultsFile << "jnz L" << lbl2 << endl;
            ex(p->opr.op[3]);
            ex(p->opr.op[2]);
            ///printf("\tjmp\tL%03d\n", lbl1);
            resultsFile << "jmp L" << lbl1 << endl;
            //printf("L%03d:\n", lbl2);
            resultsFile << "L" << lbl2 << ":" << endl;
            break;
        case WHILE:
            //printf("L%03d:\n", lbl1 = lbl++);
            lbl1 = lbl++;
            resultsFile << "L" << lbl1 << ":" << endl;
            ex(p->opr.op[0]);
            //printf("\tjnz\tL%03d\n", lbl2 = lbl++);
            lbl2 = lbl++;
            resultsFile << "jnz L" << lbl2 << endl;
            ex(p->opr.op[1]);
            //printf("\tjmp\tL%03d\n", lbl1);
            resultsFile << "jmp L" << lbl1 << endl;
            //printf("L%03d:\n", lbl2);
            resultsFile << "L" << lbl2 << ":" << endl;
            break;
        case IF:
            ex(p->opr.op[0]); // IF STATMENT
            if (p->opr.nops > 2)
            {
                /* if else */
                //printf("\tjnz\tL%03d\n", lbl1 = lbl++); //jz L0
                lbl1 = lbl++;
                resultsFile << "jnz L" << lbl1 << endl;
                ex(p->opr.op[1]);                       //if body
                //printf("\tjmp\tL%03d\n", lbl2 = lbl++); // jmp L1
                lbl2 = lbl++;
                resultsFile << "jmp L" << lbl2 << endl;
                //printf("L%03d:\n", lbl1);               //L0
                resultsFile << "L" << lbl1 << ":" << endl;
                ex(p->opr.op[2]);                       //else body
                //printf("L%03d:\n", lbl2);               //L1
                resultsFile << "L" << lbl2 << ":" << endl;
            }
            else
            {
                /* if */
                //printf("\tjnz\tL%03d\n", lbl1 = lbl++);
                lbl1 = lbl++;
                resultsFile << "jnz L" << lbl1 << endl;
                ex(p->opr.op[1]);
                //printf("L%03d:\n", lbl1);
                resultsFile << "L" << lbl1 << ":" << endl;
            }
            break;
        case '=':             //a = foo(2,3)
            ex(p->opr.op[1]); //pop a
            //printf("\tpop\t%c\n", p->opr.op[0]->id.i + 'a');
            //resultsFile<<"pop "<<p->opr.op[0]->id.i<<endl;
            
            ex(p->opr.op[0]);
            break;
        case NOT:
            ex(p->opr.op[0]);
            //printf("\tnot\n");
            resultsFile << "not" << endl;
            break;
        default:
            ex(p->opr.op[0]); //a+b
            ex(p->opr.op[1]);
            switch (p->opr.oper)
            {
            case '+':
                //printf("\tadd\n");
                resultsFile << "add" << endl;
                break;
            case '-':
                //printf("\tsub\n");
                resultsFile << "sub" << endl;
                break;
            case '*':
                //printf("\tmul\n");
                resultsFile << "mul" << endl;
                break;
            case '/':
                //printf("\tdiv\n");
                resultsFile << "div" << endl;
                break;
            case '^':
                //printf("\tpow\n");
                resultsFile << "pow" << endl;
                break;
            case '%':
                //printf("\tmod\n");
                resultsFile << "mod" << endl;
                break;
            case AND:
                //printf("\tand\n");
                resultsFile << "and" << endl; 
                break;
            case OR:
                //printf("\tor\n");
                resultsFile << "or" << endl;
                break;
            case LESS_THAN:
                //printf("\tcompLT\n");
                resultsFile << "compLT" << endl;
                break;
            case GREATER_THAN:
                //printf("\tcompGT\n");
                resultsFile << "compGT" << endl;
                break;
            case GREATER_EQUAL:
                //printf("\tcompGE\n");
                resultsFile << "compGE" << endl;
                break;
            case LESS_EQUAL:
                //printf("\tcompLE\n");
                resultsFile << "compLE" << endl;
                break;
            case NOT_EQUAL:
                //printf("\tcompNE\n");
                resultsFile << "compNE" << endl;
                break;
            case EQUAL:
                //printf("\tcompEQ\n");
                resultsFile << "compEQ" << endl;
                break;
            case ';':
                break;
            }
        }
    }
    resultsFile.close();
    return 0;
}
