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
     cout << "add block bla bla bla  "<<endl;
    blockNode b;
    b.parent = "block" + to_string(blocksNum);
    blocksNum++;
    SymbolTable["block" + to_string(blocksNum)] = b;
    
}

void closeBlock()
{
     cout << "close block bla bla bla  "<<endl;
    currentBlock = SymbolTable[currentBlock].parent;
}

void addRecord()
{
    cout << "add record bla bla bla  "<<endl;
    SymbolTable[currentBlock].records.push_back(currentRecord);
}

void printTable()
{
    cout << "blocksnum : " << blocksNum << endl;
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


