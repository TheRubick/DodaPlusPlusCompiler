#include "DodaSymbolTable.h"

void DodaSymbolTable::addBlock()
{
    blockNode b ;
    SymbolTable["block" + blocksNum ] = b;
    blocksNum++;
}