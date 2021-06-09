#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <fstream>
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
    vector<string> matches;
    //printing the symbol table
    ofstream resultsFile;
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
        SymbolTable[currentBlock].childs = childreen;
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
      
        for (auto funcRecord : funcRecords)
            SymbolTable[currentBlock].records.push_back(funcRecord);
        funcRecords.clear();
    }

    void addMatches(string s)
    {

        matches.push_back(s);
       
    }

    void addToFunc()
    {
        // cout << "current record ........." << currentRecord.name << endl;
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

    void checkIdentifier(string identifier, int line)
    {
         if (forFlag && currentRecord.name == identifier)
        {
            return;
        }

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
            cout << "\t' error  " << identifier << "'"
                 << " was not declared in this scope near line" << to_string(line) << endl;
        }

        // cout << identifier << " close  identifer" << endl;
    }

    void checkIdentifiersType(int line)
    {
        
        if (matches.size() < 2)
        {
            matches.clear();
            return;
        }
        //  cout<<"here3"<<endl;
        bool result = false;
        // cout <<  matches[0] << "  " << matches[1] << " match one and two"<<endl;
        if (matches[0] == "" || matches[1] == "")
        {
            matches[0] = "";
            matches[1] = "";
            return;
        }
        // cout<<"here4"<<endl;
        string type1 = getIdenType(matches[0]);
        string type2 = getIdenType(matches[1]);
       
        if (type1 == type2)
        {

            result = true;
        }
        else
        {
            cout << " error: type mismatch " << type1 << " " << matches[0] << " && " << type2 << " " << matches[1] << " near line " << to_string(line) << endl;
            result = false;
        }

        matches.clear();
       
    }

    string getIdenType(string identifier)
    {
       
        string type = "";
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
          
            if (type != "" || b.parent == "Global")
            {
                break;
            }

            b = SymbolTable[b.parent];
        }
         if (forFlag && currentRecord.name == identifier)
        {
            
            
            return currentRecord.type;
        }
        
        return type;
    }

    ~DodaSymbolTable()
    {
        resultsFile << "-----------------------------------------------------------------------------\n";
        printTable();
    }
};
