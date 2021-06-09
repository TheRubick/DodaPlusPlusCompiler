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
    bool idenExp = false;
    string secondidentifier;

    void addBlock()
    {

        blockNode b;
        b.parent = currentBlock;
        blocksNum++;
        vector<string> assOp;

        SymbolTable["block" + to_string(blocksNum)] = b;

        vector<string> childreen;
        childreen = SymbolTable[currentBlock].childs;
        string blockName = "block" + to_string(blocksNum);
        childreen.push_back(blockName);
        // SymbolTable[currentBlock].childs.push_back("block" + to_string(blocksNum)); //add child to parent
        currentBlock = "block" + to_string(blocksNum); // from parent to child
        if (funcFlag)
        {
            addRecordFunc();
            funcFlag = false;
        }

        if (forFlag)
        {
            forFlag = false;
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
        checkDuplication();

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

    void dummyPrint(string s)
    {
        cout << "dummy print fuck you man heheheheheheh" << endl;
        cout << s << endl;
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

    /*
        Semantics functions
    */
    bool checkDuplication()
    {
        for (auto var : SymbolTable[currentBlock].records)
        {
            if (var.name == currentRecord.name)
            {
                // printf(stdout,"\t conflicting declaration ; near line %d\n",yylineno); yyerrok;
                cout << "\t conflicting declaration between " + var.type + " " + var.name + " && " + currentRecord.type + " " + currentRecord.name << endl;
                return true;
            }
        }
        return false;
    }

    bool checkIdentifier(string identifier)
    {
      
        blockNode b = SymbolTable[currentBlock];
        bool found = false;
        int c = 0;
        while (true)
        {

            for (auto var : b.records)
            {
                if (var.name == identifier)
                {

                    found = true;
                }
            }
            if (found || b.parent == "Global")
            {
                break;
            }

            b = SymbolTable[b.parent];
        }
        if (!found)
        {
            cout << "\t'" << identifier << "'"
                 << " was not declared in this scope" << endl;
        }

        return found;
    }

    bool checkIdentifiersType(string iden1, string iden2)
    {
        if (getIdenType(iden1) == getIdenType(iden2))
            return true;
        cout<<" error: cannot convert ‘std::string {aka std::basic_string}’ to ‘int’ in assignment"<<endl;
        return false;
    }

    string getIdenType(string identifier)
    {
        string type = "" ;
        blockNode b = SymbolTable[currentBlock];
        int c = 0;
        while (true)
        {

            for (auto var : b.records)
            {
                if (var.name == identifier)
                {

                    type = var.type;
                    break;
                }
            }
            if(type != "")
            {
                break;
            }
          
            b = SymbolTable[b.parent];
        }
        return type;
      
    }

    ~DodaSymbolTable()
    {
        closeBlock();
        // printTable();
    }
};
