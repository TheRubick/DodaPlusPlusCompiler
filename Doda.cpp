#include <stdio.h>
#include "Doda.h"
#include "y.tab.h"
#include <iostream>
using namespace std;

static int lbl;

int ex(nodeType *p) {
    int lbl1, lbl2;

    if (!p) return 0;
    switch(p->type) {
    case typeCon:       
        printf("\tpush\t%d\n", p->con.value); 
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
        case WHILE:
            printf("L%03d:\n", lbl1 = lbl++);
            ex(p->opr.op[0]);
            printf("\tjz\tL%03d\n", lbl2 = lbl++);
            ex(p->opr.op[1]);
            printf("\tjmp\tL%03d\n", lbl1);
            printf("L%03d:\n", lbl2);
            break;
        case IF:
            ex(p->opr.op[0]); // IF STATMENT 
            if (p->opr.nops > 2) {
                /* if else */
                printf("\tjz\tL%03d\n", lbl1 = lbl++); //jz L0
                ex(p->opr.op[1]);                      //if body
                printf("\tjmp\tL%03d\n", lbl2 = lbl++);// jmp L1
                printf("L%03d:\n", lbl1);              //L0
                ex(p->opr.op[2]);                       //else body
                printf("L%03d:\n", lbl2);               //L1
            } else {
                /* if */
                printf("\tjz\tL%03d\n", lbl1 = lbl++);
                ex(p->opr.op[1]);
                printf("L%03d:\n", lbl1);
            }
            break;
        case '=':       //a = foo(2,3)
            ex(p->opr.op[1]); //pop a
            //printf("\tpop\t%c\n", p->opr.op[0]->id.i + 'a');
            cout<<"pop "<<p->opr.op[0]->id.i<<endl;
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
            }
        }
    }
    return 0;
}
