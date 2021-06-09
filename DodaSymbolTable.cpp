#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <fstream>
#include<stdio.h>
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
        remove("resultsFile.txt");
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
    bool idenExp = false;
    string secondidentifier;
    vector<record> funcRecords;
    ofstream resultsFile;
    /*
        error handling
    */
    vector<int> errorType;
    vector<int> errorLine;
    enum errorEnumTypes{semiColon,paranthesis,curlyBrace,duplication,unusedIdentifier,typeViolation};

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
        /*
            check if this record exist or not
        */
        
        SymbolTable[currentBlock].records.push_back(currentRecord);
    }

    bool checkDuplication()
    {
        for(auto var : SymbolTable[currentBlock].records)
        {
            if(var.name == currentRecord.name)
            {
                return true;
            }
        }
        return false;
    }

    bool checkIdentifier(string identifier)
    {
        for(auto var : SymbolTable[currentBlock].records)
        {
            if(var.name == identifier)
            {
                return true;
            }
        }
        return false;
    }

    bool checkIdentifiersType(string iden1,string iden2)
    {
        if(getIdenType(iden1) == getIdenType(iden2))
            return true;
        return false;
    }

    string getIdenType(string identifier)
    {
        for(auto var : SymbolTable[currentBlock].records)
        {
            if(var.name == identifier)
                return var.type;
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
        resultsFile.open("resultsFile.txt",std::ios_base::app);
        resultsFile << "Symbol Table **************************************************\n";
        resultsFile << "blocksnum : " << blocksNum << endl;
        for (auto x : SymbolTable)
        {
            resultsFile << x.first << endl;
            printBlock(x.second);
        }
        cout << "**************************************************\n";
        resultsFile.close();
    }
    void printBlock(blockNode b)
    {

        string parent;
        resultsFile << "parent : " << b.parent << endl;
        resultsFile << "printing the records" << endl;
        for (auto record : b.records)
        {
            resultsFile << record.name << " " << record.type << " " << record.kind << endl;
        }
        resultsFile << "printing the childs" << endl;
        for (auto child : b.childs)
        {
            resultsFile << child << endl;
        }
        resultsFile << "---------------------------------------------------------\n";
    }

    void addError(int errorkind,int lineNum)
    {
        errorType.push_back(errorkind);
        errorLine.push_back(lineNum);
    }

    void printError(int errorKind,int lineNum)
    {
        switch (errorKind)
        {
        case semiColon:
            cout << "error !! near ; near line " << lineNum << endl;
            break;
        case paranthesis:
            cout << "error !! near ) near line " << lineNum << endl;
            break;
        case curlyBrace:
            cout << "error !! near } near line " << lineNum << endl;
            break;
        case duplication:
            cout << "error !! variable duplication near line " << lineNum << endl;
            break;
        case unusedIdentifier:
            cout << "error !! undeclared variable near line " << lineNum << endl;
            break;
        case typeViolation:
            cout << "error !! type violation near line " << lineNum << endl; 
            break;
        default:
            break;
        }
    }
    void checkErrors()
    {
        for(int i = 0;i < errorType.size();i++)
        {
            printError(errorType[i],errorLine[i]);
        }
    }
    ~DodaSymbolTable()
    {
        closeBlock();
        resultsFile << "-----------------------------------------------------------------------------\n";
        printTable();
        checkErrors();
    }
};
