#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;
 


struct record
{
  string name;
  string kind;
  string type;
};
    
struct blockNode
{
    string parent;
    vector<string> childs;
    vector<record> records;
};

class DodaSymbolTable{
    
    public:
        unordered_map<string, blockNode> SymbolTable;
        int blocksNum = 0 ;
        string currentBlock ;
        record currentRecord;
       
void addBlock()
{
    blockNode b;
    b.parent = "block" + to_string(blocksNum);
    blocksNum++;
    SymbolTable["block" + to_string(blocksNum)] = b;
    
}

void closeBlock()
{
    currentBlock = SymbolTable[currentBlock].parent;
}

void addRecord()
{
    SymbolTable[currentBlock].records.push_back(currentRecord);
}

void printTable()
{
    for(auto x: SymbolTable)
    {
       cout << x.first << endl;
       printBlock(x.second);
    }
}

void printBlock(blockNode b)
{
    string parent;
    vector<string> childs;
    vector<record> records;
    cout << "parent : " << b.parent << endl;
    cout << "printing the records" << endl;
    for(auto record : records)
    {
        cout << record.name << " " << record.type << " " << record.kind << endl;
    }
    cout << "printing the childs" << endl;
    for(auto child : childs)
    {
        cout << child << endl;
    }
}

};


