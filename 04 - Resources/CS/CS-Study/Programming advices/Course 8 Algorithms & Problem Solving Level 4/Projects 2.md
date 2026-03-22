---
creation_date: 2026-02-07
tags:
  - Resources/Articles
Resource:
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Project 2 - ATM System (Requirements & Solution):</font> [[Projects 2 Requirements]]
---
### <font color="#ffff00">My Input:</font>
```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>

using namespace std;

const string ClientsFileName = "Clients.txt";

enum enTransactionsMenueOptions { 
    eQuickWithdraw = 1, eNormalWithdraw = 2, 
    eDeposite = 3, eCheckBalance = 4, eLoginScreen = 5 
};

void ShowLoginScreen();
void ShowTransactionsMenue();

struct sClient {

    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
    bool MarkForDelete = false;

};
sClient CurrentClients;

vector<string> SplitString(string S1, string Delim) { // Remove Delim from ClientsString, And store them into a VectorString.


    vector<string> vString;

    short pos = 0;
    string sWord; // define a string variable  

    // use find() function to get the position of the delimiters  
    while ((pos = S1.find(Delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); // store the word   
        if (sWord != "")
        {
            vString.push_back(sWord);
        }

        S1.erase(0, pos + Delim.length());  /* erase() until positon and move to next word. */
    }

    if (S1 != "")
    {
        vString.push_back(S1); // it adds last word of the string.
    }

    return vString;

}

sClient ConvertLinetoRecord(string Line, string Seperator = "#//#") {

    // Remove Delim from ClientsString, And strore theme Into ClientStructure.  

    sClient Client;
    vector<string> vClientData;

    vClientData = SplitString(Line, Seperator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);//cast string to double


    return Client;

}

string ConvertRecordToLine(sClient Client, string Seperator = "#//#") { 
    
    // Collects CilentStructer with Seperator And stor theme into the string.

    string stClientRecord = "";

    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalance);

    return stClientRecord;

}
vector <sClient> LoadCleintsDataFromFile(string FileName) { 
    
    // Drag from FileName("Clients.txt") line by line and store theme into the vector <sClient> vClients.  
    
    vector <sClient> vClients;

    fstream MyFile;
    MyFile.open(FileName, ios::in);//read Mode

    if (MyFile.is_open())
    {

        string Line;
        sClient Client;

        while (getline(MyFile, Line))
        {

            Client = ConvertLinetoRecord(Line);

            vClients.push_back(Client);
        }

        MyFile.close();

    }

    return vClients;

}
bool FindUserByUsernameAndPassword(string AccountNumber, string PinCode, sClient& Clients) {

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);

    for (sClient C : vClients)
    {

        if (C.AccountNumber == AccountNumber && C.PinCode == PinCode)
        {
            Clients = C;
            return true;
        }

    }
    return false;

}
//=========================================(Totale Balance)===========================================👇

void ShowTotalBalances() {

    cout << "\n================================";
    cout << "\n\t\t\tCheck Balance Screen";
    cout << "\n================================";

    cout << "Your Balance is: " << CurrentClients.AccountBalance;

}

//=========================================(Totale Balance)===========================================👆

void CheckBalanceScreen() {

    cout << "========================================\n";
    cout << "\t\t\t\tCheck Balance Screen\n";
    cout << "========================================\n";

    ShowTotalBalances();
}

vector <sClient> SaveCleintsDataToFile(string FileName, vector <sClient> vClients) {

    fstream MyFile;
    MyFile.open(FileName, ios::out);//overwrite

    string DataLine;

    if (MyFile.is_open())
    {

        for (sClient C : vClients)
        {

            if (C.MarkForDelete == false)
            {
                //we only write records that are not marked for delete.  
                DataLine = ConvertRecordToLine(C);
                MyFile << DataLine << endl;

            }

        }

        MyFile.close();

    }

    return vClients;

}

void AddDataLineToFile(string FileName, string  stDataLine){
    
    fstream MyFile;
    MyFile.open(FileName, ios::out | ios::app);

    if (MyFile.is_open())
    {

        MyFile << stDataLine << endl;

        MyFile.close();
    }

}

string ReadClientAccountNumber() {

    string AccountNumber = "";

    cout << "\nPlease enter AccountNumber? ";
    cin >> AccountNumber;
    return AccountNumber;

}

void ShowEndScreen() {

    cout << "\n-----------------------------------\n";
    cout << "\tProgram Ends :-)";
    cout << "\n-----------------------------------\n";

}


//=========================================(Quick Withdraw)===========================================👇

int GetBalanceOptions(int Amount) {

    int arrBalanceOptions[8] = {20, 50, 100, 200, 400, 600, 800, 1000};

    return (Amount < 0 || Amount > 8)? 0: arrBalanceOptions[Amount - 1];
}

bool WithDrawBalanceToClient(int Amount, vector <sClient>& vClients) {

    char Answer = 'n';

    cout << "Are you sure you want perfrom this transaction? y/n ? ";
    cin >> Answer;
    if (Answer == 'y' || Answer == 'Y')
    {

        for (sClient& C : vClients)
        {
            
            if(C.AccountNumber == CurrentClients.AccountNumber)
            {    
                C.AccountBalance -= Amount;
                CurrentClients.AccountBalance = C.AccountBalance;
                SaveCleintsDataToFile(ClientsFileName, vClients);
                cout << "\n\nDone Successfully. New balance is: " << C.AccountBalance;

                return true;
            }

        }

        return false;
    }

}
void ShowQuickWithDraw() {

    sClient Client;
    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);

    
    int Amount = 0;
    cout << "\nChoose WithDraw From [1] to [8]: ";
    cin >> Amount;

    if(Amount == 9)
        return;   

    int AmountOptions = GetBalanceOptions(Amount);

     


    while (AmountOptions > CurrentClients.AccountBalance)
    {
        cout << "\nAmount Exceeds the balance, you can withdraw up to : " << CurrentClients.AccountBalance << endl;
        cout << "Please enter another amount? ";
        cin >> Amount;
        AmountOptions = GetBalanceOptions(Amount);
    }



    WithDrawBalanceToClient(AmountOptions, vClients);

}

void ShowQuickWithdrawScreen() {
    cout << "================================================";
    cout << "\n\t\tQuick Withdraw";
    cout << "\n==============================================";
    cout << "\n\t[1] 20"<< "\t\t[2] 50";
    cout << "\n\t[3] 100" << "\t\t[4] 200";
    cout << "\n\t[5] 400" << "\t\t[6] 600";
    cout << "\n\t[7] 800" << "\t\t[8] 1000";
    cout << "\n\t[9] Exit";
    cout << "\n==============================================";
    cout << "\nYour Balance is: " << CurrentClients.AccountBalance;

    ShowQuickWithDraw();
}
//=========================================(Quick Withdraw)===========================================👆

//=========================================(Normal WithDraw)===========================================👇

void ShowNormalWithDraw() {

    sClient Client;
    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);

    
    int Amount = 0;
    cout << "\nEnter an amount multiple of 5's: ";
    cin >> Amount;
    

    while (Amount % 5 != 0)
    {
        cout << "\nEnter an amount multiple of 5's: ";
        cin >> Amount;
    }



    WithDrawBalanceToClient(Amount, vClients);

}
void ShowNormalWithDrawScreen() {
    
    cout << "================================================";
    cout << "\n\t\tQuick Withdraw";
    cout << "\n==============================================";

    ShowNormalWithDraw();
}
//=========================================(Normal WithDraw)===========================================👆

//=========================================(Deposite)===========================================👇

bool DepositBalanceToClient(double Amount, vector <sClient>& vClients) {

    char Answer = 'n';

    cout << "Are you sure you want perfrom this transaction? y/n ? ";
    cin >> Answer;
    if (Answer == 'y' || Answer == 'Y')
    {

        for (sClient& C : vClients)
        {
            if(C.AccountNumber == CurrentClients.AccountNumber)
            {    
                C.AccountBalance += Amount;
                CurrentClients.AccountBalance = C.AccountBalance;
                SaveCleintsDataToFile(ClientsFileName, vClients);
                cout << "\n\nDone Successfully. New balance is: " << C.AccountBalance;

                return true;
            }

        }

        return false;
    }

}
void ShowDepositScreen() {

    cout << "\n===================================\n";
    cout << "\t Deposit Screen";
    cout << "\n===================================\n";


    sClient Client;

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);

    double Amount = 0;
    cout << "\nPlease enter deposit amount? ";
    cin >> Amount;

    while (Amount < 0)
    {
        cout << "Enter Positive Amount Number: ";
        cin >> Amount;
    }
    

    DepositBalanceToClient(Amount, vClients);
}

//=========================================(Deposite)===========================================👆

void GoBackToTransactionsMenue() {

    cout << "\n\nPress any key to go back to Transactions Menue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    cin.get();
    ShowTransactionsMenue();

}

short ReadTransactionsMenueOption() {

    cout << "Choose what do you want to do? [1 to 4]? ";
    short Choice = 0;
    cin >> Choice;

    return Choice;
}

void PerfromTranactionsMenueOption(enTransactionsMenueOptions TransactionMenueOption) {

    switch (TransactionMenueOption)
    {
        case enTransactionsMenueOptions::eQuickWithdraw:
        {
            system("clear");
            ShowQuickWithdrawScreen();
            GoBackToTransactionsMenue();
            break;
        }

        case enTransactionsMenueOptions::eNormalWithdraw:
        {
            system("clear");
            ShowNormalWithDrawScreen();
            GoBackToTransactionsMenue();
            break;
        }
        
        case enTransactionsMenueOptions::eDeposite:
        {
            system("clear");
            ShowDepositScreen();
            GoBackToTransactionsMenue();
            break;
        }


        case enTransactionsMenueOptions::eCheckBalance:
        {
            system("clear");
            CheckBalanceScreen();
            GoBackToTransactionsMenue();
            break;
        }


        case enTransactionsMenueOptions::eLoginScreen:
        {

            ShowLoginScreen();

        }
    }

}

void ShowTransactionsMenue() {

    system("clear");
    cout << "===========================================\n";
    cout << "\t\tTransactions Menue Screen\n";
    cout << "===========================================\n";
    cout << "\t[1] Quick Withdraw.\n";
    cout << "\t[2] Normal Withdraw.\n";
    cout << "\t[3] Deposite.\n";
    cout << "\t[4] Check Balance.\n";
    cout << "\t[5] Logout.\n";
    cout << "===========================================\n";

    PerfromTranactionsMenueOption((enTransactionsMenueOptions)ReadTransactionsMenueOption());
}

bool  LoadUserInfo(string AccountNumber, string PinCode) {

    if (FindUserByUsernameAndPassword(AccountNumber, PinCode, CurrentClients))
        return true;
    else
        return false;

}
void ShowLoginScreen() {

    string AccountNumber, PinCode;
    
    bool LoginFaild = false;

    do {
        system("clear");
        cout << "===========================================\n";
        cout << "\t\t Login Screen\n";
        cout << "===========================================\n";

        if(LoginFaild)
            cout << "Invalide AccountNumber/PinCode\n";
            

        cout << "Enter The UserName? ";
        cin >> AccountNumber;
        
        cout << "Enter the Password? ";
        cin >> PinCode;

        LoginFaild = !LoadUserInfo(AccountNumber, PinCode);

    } while (LoginFaild);

    ShowTransactionsMenue();
}

int main() {
    
    
    ShowLoginScreen();

    cout << "\nPress Enter to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}
```
### <font color="#ffff00">Abu-Hedhoude Input:</font>
```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
    bool MarkForDelete = false;
};

enum enMainMenueOptions {
    eQucikWithdraw = 1, eNormalWithDraw = 2, eDeposit = 3,
    eCheckBalance = 4, eExit = 5
};

const string ClientsFileName = "Clients.txt";
sClient CurrentClient;

void ShowMainMenue();
void Login();
void ShowQuickWithdrawScreen();
void ShowNormalWithDrawScreen();
void ShowDepositScreen();

vector<string> SplitString(string S1, string Delim)
{

    vector<string> vString;

    short pos = 0;
    string sWord; // define a string variable  

    // use find() function to get the position of the delimiters  
    while ((pos = S1.find(Delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); // store the word   
        if (sWord != "")
        {
            vString.push_back(sWord);
        }

        S1.erase(0, pos + Delim.length());  /* erase() until positon and move to next word. */
    }

    if (S1 != "")
    {
        vString.push_back(S1); // it adds last word of the string.
    }

    return vString;

}

sClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{

    sClient Client;
    vector<string> vClientData;

    vClientData = SplitString(Line, Seperator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);//cast string to double


    return Client;

}

string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
{

    string stClientRecord = "";

    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalance);

    return stClientRecord;

}

vector <sClient> LoadCleintsDataFromFile(string FileName)
{

    vector <sClient> vClients;

    fstream MyFile;
    MyFile.open(FileName, ios::in);//read Mode

    if (MyFile.is_open())
    {

        string Line;
        sClient Client;

        while (getline(MyFile, Line))
        {

            Client = ConvertLinetoRecord(Line);

            vClients.push_back(Client);
        }

        MyFile.close();

    }

    return vClients;

}

bool FindClientByAccountNumberAndPinCode(string AccountNumber, string PinCode, sClient& Client)
{

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);

    for (sClient C : vClients)
    {

        if (C.AccountNumber == AccountNumber && C.PinCode == PinCode)
        {
            Client = C;
            return true;
        }

    }
    return false;

}

vector <sClient> SaveCleintsDataToFile(string FileName, vector <sClient> vClients)
{

    fstream MyFile;
    MyFile.open(FileName, ios::out);//overwrite

    string DataLine;

    if (MyFile.is_open())
    {

        for (sClient C : vClients)
        {

            if (C.MarkForDelete == false)
            {
                //we only write records that are not marked for delete.  
                DataLine = ConvertRecordToLine(C);
                MyFile << DataLine << endl;

            }

        }

        MyFile.close();

    }

    return vClients;

}

bool DepositBalanceToClientByAccountNumber(string AccountNumber, double Amount, vector <sClient>& vClients)
{
    char Answer = 'n';

    cout << "\n\nAre you sure you want perfrom this transaction? y/n ? ";
    cin >> Answer;
    if (Answer == 'y' || Answer == 'Y')
    {

        for (sClient& C : vClients)
        {
            if (C.AccountNumber == AccountNumber)
            {
                C.AccountBalance += Amount;
                SaveCleintsDataToFile(ClientsFileName, vClients);
                cout << "\n\nDone Successfully. New balance is: " << C.AccountBalance;

                return true;
            }

        }


        return false;
    }

}

short ReadQuickWithdrawOption()
{
    short Choice = 0;
    while (Choice < 1 || Choice>9)
    {
        cout << "\nChoose what to do from [1] to [9] ? ";
        cin >> Choice;
    }

    return Choice;
}

short getQuickWithDrawAmount(short QuickWithDrawOption)
{
    switch (QuickWithDrawOption)
    {
    case 1:
        return  20;
    case 2:
        return 50;
    case 3:
        return 100;
    case 4:
        return 200;
    case 5:
        return 400;
    case 6:
        return 600;
    case 7:
        return 800;
    case 8:
        return 1000;
    default:
        return 0;

    }

}

void PerfromQuickWithdrawOption(short QuickWithDrawOption)
{
    if (QuickWithDrawOption == 9)//exit 
        return;

    short WithDrawBalance = getQuickWithDrawAmount(QuickWithDrawOption);

    if (WithDrawBalance > CurrentClient.AccountBalance)
    {
        cout << "\nThe amount exceeds your balance, make another choice.\n";
        cout << "Press Anykey to continue...";
        system("pause>0");
        ShowQuickWithdrawScreen();
        return;
    }

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    DepositBalanceToClientByAccountNumber(CurrentClient.AccountNumber, WithDrawBalance * -1, vClients);
    CurrentClient.AccountBalance -= WithDrawBalance;


}

double ReadDepositAmount()
{
    double Amount;
    cout << "\nEnter a positive Deposit Amount? ";

    cin >> Amount;
    while (Amount <= 0)
    {
        cout << "\nEnter a positive Deposit Amount? ";
        cin >> Amount;
    }
    return Amount;
}

void PerfromDepositOption()
{

    double DepositAmount = ReadDepositAmount();

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    DepositBalanceToClientByAccountNumber(CurrentClient.AccountNumber, DepositAmount, vClients);
    CurrentClient.AccountBalance += DepositAmount;
}

void ShowDepositScreen()
{
    system("cls");
    cout << "===========================================\n";
    cout << "\t\tDeposit Screen\n";
    cout << "===========================================\n";
    PerfromDepositOption();

}

void ShowCheckBalanceScreen()
{
    system("cls");
    cout << "===========================================\n";
    cout << "\t\tCheck Balance Screen\n";
    cout << "===========================================\n";
    cout << "Your Balance is " << CurrentClient.AccountBalance << "\n";

}

int ReadWithDrawAmont()
{
    int Amount;
    cout << "\nEnter an amount multiple of 5's ? ";

    cin >> Amount;
   
    while (Amount % 5 != 0)
    {
        cout << "\nEnter an amount multiple of 5's ? ";
        cin >> Amount;
    }
    return Amount;
}

void PerfromNormalWithdrawOption()
{

    int WithDrawBalance = ReadWithDrawAmont();

    if (WithDrawBalance > CurrentClient.AccountBalance)
    {
        cout << "\nThe amount exceeds your balance, make another choice.\n";
        cout << "Press Anykey to continue...";
        system("pause>0");
        ShowNormalWithDrawScreen();
        return;
    }

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    DepositBalanceToClientByAccountNumber(CurrentClient.AccountNumber, WithDrawBalance * -1, vClients);
    CurrentClient.AccountBalance -= WithDrawBalance;


}

void ShowNormalWithDrawScreen()
{
    system("cls");
    cout << "===========================================\n";
    cout << "\t\tNormal Withdraw Screen\n";
    cout << "===========================================\n";
    PerfromNormalWithdrawOption();
}

void ShowQuickWithdrawScreen()
{
    system("cls");
    cout << "===========================================\n";
    cout << "\t\tQucik Withdraw\n";
    cout << "===========================================\n";
    cout << "\t[1] 20\t\t[2] 50\n";
    cout << "\t[3] 100\t\t[4] 200\n";
    cout << "\t[5] 400\t\t[6] 600\n";
    cout << "\t[7] 800\t\t[8] 1000\n";
    cout << "\t[9] Exit\n";
    cout << "===========================================\n";
    cout << "Your Balance is " << CurrentClient.AccountBalance;

    PerfromQuickWithdrawOption(ReadQuickWithdrawOption());
}

void GoBackToMainMenue()
{
    cout << "\n\nPress any key to go back to Main Menue...";
    system("pause>0");
    ShowMainMenue();
}

short ReadMainMenueOption()
{
    cout << "Choose what do you want to do? [1 to 5]? ";
    short Choice = 0;
    cin >> Choice;

    return Choice;
}

void PerfromMainMenueOption(enMainMenueOptions MainMenueOption)
{
    switch (MainMenueOption)
    {
    case enMainMenueOptions::eQucikWithdraw:
    {
        system("cls");
        ShowQuickWithdrawScreen();
        GoBackToMainMenue();
        break;
    }
    case enMainMenueOptions::eNormalWithDraw:
        system("cls");
        ShowNormalWithDrawScreen();
        GoBackToMainMenue();
        break;

    case enMainMenueOptions::eDeposit:
        system("cls");
        ShowDepositScreen();
        GoBackToMainMenue();
        break;

    case enMainMenueOptions::eCheckBalance:
        system("cls");
        ShowCheckBalanceScreen();
        GoBackToMainMenue();
        break;

    case enMainMenueOptions::eExit:
        system("cls");
        Login();

        break;
    }

}

void ShowMainMenue()
{
    system("cls");
    cout << "===========================================\n";
    cout << "\t\tATM Main Menue Screen\n";
    cout << "===========================================\n";
    cout << "\t[1] Quick Withdraw.\n";
    cout << "\t[2] Normal Withdraw.\n";
    cout << "\t[3] Deposit\n";
    cout << "\t[4] Check Balance.\n";
    cout << "\t[5] Logout.\n";
    cout << "===========================================\n";
    

    PerfromMainMenueOption((enMainMenueOptions)ReadMainMenueOption());
}

bool  LoadClientInfo(string AccountNumber, string PinCode)
{
    
    if (FindClientByAccountNumberAndPinCode(AccountNumber, PinCode, CurrentClient))
        return true;
    else
        return false;
}

void Login()
{
    bool LoginFaild = false;
    string AccountNumber, PinCode;
    do
    {
        system("cls");
        cout << "\n---------------------------------\n";
        cout << "\tLogin Screen";
        cout << "\n---------------------------------\n";

        if (LoginFaild)
        {
            cout << "Invlaid Account Number/PinCode!\n";
        }

        cout << "Enter Account Number? ";
        cin >> AccountNumber;

        cout << "Enter Pin? ";
        cin >> PinCode;
        LoginFaild = !LoadClientInfo(AccountNumber, PinCode);

    } while (LoginFaild);

    ShowMainMenue();

}

int main(){

    Login();

    system("pause>0");
    return 0;
}
```
---
