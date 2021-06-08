#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;
 
    
struct blockNode
{
    string parent;
    vector<string> childs;
    vector<record> records;
};

struct record
{
  string name;
  string kind;
  string type;
};

class DodaSymbolTable{
    
    public:
        unordered_map<string, blockNode> SymbolTable;
        int blocksNum = 0 ;
        string currentBlock ;
        record currentRecord;
        void addBlock();
        void addRecord();



}