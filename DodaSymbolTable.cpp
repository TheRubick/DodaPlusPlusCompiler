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

class DodaSymbolTable
{

public:
    DodaSymbolTable()
    {
        cout << "constructor herer" << endl;
        SymbolTable["block0"].parent = "Global";
        currentBlock = "block0";
        // addBlock();
    }

    unordered_map<string, blockNode> SymbolTable;
    int blocksNum = 0;
    string currentBlock;
    record currentRecord;
    bool funcFlag = false; // flag for function
    bool forFlag = false;  // flag fotr loop
    vector<record> funcRecords;

    void addBlock()
    {
        cout << "add block bla bla bla  " << endl;
        blockNode b;
        b.parent = currentBlock;
        blocksNum++;
        SymbolTable["block" + to_string(blocksNum)] = b;
        SymbolTable[currentBlock].childs.push_back("block" + to_string(blocksNum)); //add child to parent
        currentBlock = "block" + to_string(blocksNum);                              // from parent to child
        if (funcFlag)
        {
            addRecordFunc();
            funcFlag = false;
        }

        if(forFlag)
        {
            forFlag =  false;
            addRecord();
        }
    }
    void closeBlock()
    {
        // cout << "close block bla bla bla  " << endl;
        currentBlock = SymbolTable[currentBlock].parent;
    }
    void addRecord()
    {
        cout << "Type " << currentRecord.type << endl;
        cout << "name " << currentRecord.name << endl;
        cout << "Kind  " << currentRecord.kind << endl;

        cout << "add record bla bla bla  " << endl;

        if (!forFlag)
        {
            SymbolTable[currentBlock].records.push_back(currentRecord);
        }
    }

    void addRecordFunc()
    {
        cout << "length = " << funcRecords.size() << endl;
        for (auto funcRecord : funcRecords)
            SymbolTable[currentBlock].records.push_back(funcRecord);
        funcRecords.clear();
    }

    void addToFunc()
    {
        cout << "current record ........." << currentRecord.name << endl;
        funcRecords.push_back(currentRecord);
    }
    void printTable()
    {
        cout << "Symbol Table **************************************************\n";
        cout << "blocksnum : " << blocksNum << endl;
        for (auto x : SymbolTable)
        {
            cout << x.first << endl;
            printBlock(x.second);
        }
        cout << "**************************************************\n";
    }
    void printBlock(blockNode b)
    {

        string parent;
        cout << "parent : " << b.parent << endl;
        cout << "printing the records" << endl;
        for (auto record : b.records)
        {
            cout << record.name << " " << record.type << " " << record.kind << endl;
        }
        cout << "printing the childs" << endl;
        for (auto child : b.childs)
        {
            cout << child << endl;
        }
        cout << "---------------------------------------------------------\n";
    }

    ~DodaSymbolTable()
    {
        closeBlock();
        printTable();
    }
};
