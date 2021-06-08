#ifndef __DODA_H_
#define __DODA_H_
#include <string>
using namespace std;
typedef enum { typeConChar,typeConBool,typeConFloat,typeCon, typeId,typeArg, typeOpr } nodeEnum;

/* constants */
typedef struct {
    int value;                  /* value of constant */
} conNodeType;

/* constants */
typedef struct {
    float value;                  /* value of constant */
} floatConNodeType;

typedef struct {
    bool value;                  /* value of constant */
} boolConNodeType;

typedef struct {
    char value;                  /* value of constant */
} charConNodeType;

/* identifiers */
typedef struct {
    string i;                      /* subscript to sym array */
} idNodeType;
/* identifiers */
typedef struct {
    string i;                      /* subscript to sym array */
} argNodeType;
/* operators */
typedef struct {
    int oper;                   /* operator */
    int nops;                   /* number of operands */
    struct nodeTypeTag *op[1];	/* operands, extended at runtime */
} oprNodeType;

typedef struct nodeTypeTag {
    nodeEnum type;              /* type of node */

    union {
        conNodeType con;        /* int */
        idNodeType id;          /* identifiers */
        oprNodeType opr;        /* operators */
        floatConNodeType conF;  /* float */
        boolConNodeType conB;   /* bool */
        charConNodeType conC;
        argNodeType arg;
    };
} nodeType;

//extern int sym[26];
#endif