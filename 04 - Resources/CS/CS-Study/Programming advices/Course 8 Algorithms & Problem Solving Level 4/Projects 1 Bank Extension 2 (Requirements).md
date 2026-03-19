---
creation_date: 2026-02-07
tags:
  - Resources/Articles
Resource:
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Projects 1 Bank Extension 2 (Requirements)</font>
---
### <font color="#ffff00">(#P1):</font>
![[Pasted image 20260316135200.png]]
![[Pasted image 20260316135215.png]]

---
![[Pasted image 20260316135610.png]]
![[Pasted image 20260316140456.png]]
![[Pasted image 20260316141519.png]]
![[Pasted image 20260316141253.png]]
![[Pasted image 20260316141615.png]]

---
![[Pasted image 20260316144713.png]]
![[Pasted image 20260316145019.png]]
![[Pasted image 20260316145357.png]]
![[Pasted image 20260316145513.png]]                                                                          
![[Pasted image 20260316152242.png]]

---
![[Pasted image 20260316152531.png]]

![[Pasted image 20260316152721.png]]
![[Pasted image 20260316152824.png]]
![[Pasted image 20260316152926.png]]

---
![[Pasted image 20260316153159.png]]
![[Pasted image 20260316153432.png]]

![[Pasted image 20260316153815.png]]
![[Pasted image 20260316153939.png]]

---
![[Pasted image 20260316154129.png]]
![[Pasted image 20260316154558.png]]
![[Pasted image 20260316154810.png]]

---
![[Pasted image 20260316155004.png]]
![[Pasted image 20260316155038.png]]
![[Pasted image 20260316155128.png]]


### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>

using namespace std;

const string ClientsFileName = "Clients.txt";
const string UsersFileName = "Users.txt";


void ShowMainMenue();
void ShowTransactionsMenue();
void ShowManageUsersMenuScreen();
void ShowLoginScreen();

struct sClient {

    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
    bool MarkForDelete = false;

};
struct sUsers {
    string UserName;
    string Password;
    
    int Permission;
    bool MarkForDelete = false;
};
sUsers CurrentUser;

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

bool ClientExistsByAccountNumber(string AccountNumber, string FileName) { // Check if Client exists by AccountNumber into FileName. 

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
            if (Client.AccountNumber == AccountNumber)
            {
                MyFile.close();
                return true;
            }


            vClients.push_back(Client);
        }

        MyFile.close();

    }

    return false;


}


sClient ReadNewClient() { 

    sClient Client;

    cout << "Enter Account Number? ";

    // Usage of std::ws will extract all the whitespace character
    getline(cin >> ws, Client.AccountNumber);

    while (ClientExistsByAccountNumber(Client.AccountNumber, ClientsFileName))
    {
        cout << "\nClient with [" << Client.AccountNumber << "] already exists, Enter another Account Number? ";
        getline(cin >> ws, Client.AccountNumber);
    }


    cout << "Enter PinCode? ";
    getline(cin, Client.PinCode);

    cout << "Enter Name? ";
    getline(cin, Client.Name);

    cout << "Enter Phone? ";
    getline(cin, Client.Phone);

    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;

    return Client;

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

void PrintClientRecordLine(sClient Client) {

    cout << "| " << setw(15) << left << Client.AccountNumber;
    cout << "| " << setw(10) << left << Client.PinCode;
    cout << "| " << setw(40) << left << Client.Name;
    cout << "| " << setw(12) << left << Client.Phone;
    cout << "| " << setw(12) << left << Client.AccountBalance;

}

void PrintClientRecordBalanceLine(sClient Client) {

    cout << "| " << setw(15) << left << Client.AccountNumber;
    cout << "| " << setw(40) << left << Client.Name;
    cout << "| " << setw(12) << left << Client.AccountBalance;

}

void ShowAllClientsScreen() {

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);

    cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

    cout << "| " << left << setw(15) << "Accout Number";
    cout << "| " << left << setw(10) << "Pin Code";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Phone";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

    if (vClients.size() == 0)
        cout << "\t\t\t\tNo Clients Available In the System!";
    else

        for (sClient Client : vClients)
        {

            PrintClientRecordLine(Client);
            cout << endl;
        }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

}

void ShowTotalBalances() {

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);

    cout << "\n\t\t\t\t\tBalances List (" << vClients.size() << ") Client(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

    cout << "| " << left << setw(15) << "Accout Number";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

    double TotalBalances = 0;

    if (vClients.size() == 0)
        cout << "\t\t\t\tNo Clients Available In the System!";
    else

        for (sClient Client : vClients)
        {

            PrintClientRecordBalanceLine(Client);
            TotalBalances += Client.AccountBalance;

            cout << endl;
        }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    cout << "\t\t\t\t\t   Total Balances = " << TotalBalances;

}

void PrintClientCard(sClient Client) {

    cout << "\nThe following are the client details:\n";
    cout << "-----------------------------------";
    cout << "\nAccout Number: " << Client.AccountNumber;
    cout << "\nPin Code     : " << Client.PinCode;
    cout << "\nName         : " << Client.Name;
    cout << "\nPhone        : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
    cout << "\n-----------------------------------\n";

}

bool FindClientByAccountNumber(string AccountNumber, vector <sClient> vClients, sClient& Client) { 
    
    // Check if Client Exists in (vector <sClient> vClients, Not into the FileName) by AccountNumber. 

    for (sClient C : vClients)
    {

        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }

    }
    return false;

}

sClient ChangeClientRecord(string AccountNumber) { // Update Client by AccountNumber.  

    sClient Client;

    Client.AccountNumber = AccountNumber;

    cout << "\n\nEnter PinCode? ";
    getline(cin >> ws, Client.PinCode);

    cout << "Enter Name? ";
    getline(cin, Client.Name);

    cout << "Enter Phone? ";
    getline(cin, Client.Phone);

    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;

    return Client;

}

bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector <sClient>& vClients) {

    for (sClient& C : vClients)
    {

        if (C.AccountNumber == AccountNumber)
        {
            C.MarkForDelete = true;
            return true;
        }

    }

    return false;

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

void AddNewClient(){

    sClient Client;
    Client = ReadNewClient(); 
    AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));

}

void AddNewClients(){

    char AddMore = 'Y';
    do
    {
        system("clear");
        cout << "Adding New Client:\n\n";

        AddNewClient();
        cout << "\nClient Added Successfully, do you want to add more clients? Y/N? ";


        cin >> AddMore;

    } while (toupper(AddMore) == 'Y');

}

bool DeleteClientByAccountNumber(string AccountNumber, vector <sClient>& vClients) { 

    sClient Client;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {

        PrintClientCard(Client);

        cout << "\n\nAre you sure you want delete this client? y/n ? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            MarkClientForDeleteByAccountNumber(AccountNumber, vClients);
            SaveCleintsDataToFile(ClientsFileName, vClients);

            //Refresh Clients 
            vClients = LoadCleintsDataFromFile(ClientsFileName);

            cout << "\n\nClient Deleted Successfully.";
            return true;
        }

    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
        return false;
    }

}

bool UpdateClientByAccountNumber(string AccountNumber, vector <sClient>& vClients) {

    sClient Client;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {

        PrintClientCard(Client);
        cout << "\n\nAre you sure you want update this client? y/n ? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {

            for (sClient& C : vClients)
            {
                if (C.AccountNumber == AccountNumber)
                {
                    C = ChangeClientRecord(AccountNumber);
                    break;
                }

            }

            SaveCleintsDataToFile(ClientsFileName, vClients);

            cout << "\n\nClient Updated Successfully.";
            return true;
        }

    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
        return false;
    }

}

bool DepositBalanceToClientByAccountNumber(string AccountNumber, double Amount, vector <sClient>& vClients) {

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

string ReadClientAccountNumber() {

    string AccountNumber = "";

    cout << "\nPlease enter AccountNumber? ";
    cin >> AccountNumber;
    return AccountNumber;

}

void ShowDeleteClientScreen() {

    cout << "\n-----------------------------------\n";
    cout << "\tDelete Client Screen";
    cout << "\n-----------------------------------\n";

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();
    DeleteClientByAccountNumber(AccountNumber, vClients);

}

void ShowUpdateClientScreen() {

    cout << "\n-----------------------------------\n";
    cout << "\tUpdate Client Info Screen";
    cout << "\n-----------------------------------\n";

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();
    UpdateClientByAccountNumber(AccountNumber, vClients);

}

void ShowAddNewClientsScreen() {

    cout << "\n-----------------------------------\n";
    cout << "\tAdd New Clients Screen";
    cout << "\n-----------------------------------\n";

    AddNewClients();

}

void ShowFindClientScreen() {

    cout << "\n-----------------------------------\n";
    cout << "\tFind Client Screen";
    cout << "\n-----------------------------------\n";

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    sClient Client;
    string AccountNumber = ReadClientAccountNumber();
    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
        PrintClientCard(Client);
    else
        cout << "\nClient with Account Number[" << AccountNumber << "] is not found!";

}

void ShowEndScreen() {

    cout << "\n-----------------------------------\n";
    cout << "\tProgram Ends :-)";
    cout << "\n-----------------------------------\n";

}

void ShowDepositScreen() {

    cout << "\n-----------------------------------\n";
    cout << "\tDeposit Screen";
    cout << "\n-----------------------------------\n";


    sClient Client;

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();


    while (!FindClientByAccountNumber(AccountNumber, vClients, Client))
    {
        cout << "\nClient with [" << AccountNumber << "] does not exist.\n";
        AccountNumber = ReadClientAccountNumber();
    }


    PrintClientCard(Client);

    double Amount = 0;
    cout << "\nPlease enter deposit amount? ";
    cin >> Amount;

    DepositBalanceToClientByAccountNumber(AccountNumber, Amount, vClients);

}

void ShowWithDrawScreen() {

    cout << "\n-----------------------------------\n";
    cout << "\tWithdraw Screen";
    cout << "\n-----------------------------------\n";

    sClient Client;

    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();


    while (!FindClientByAccountNumber(AccountNumber, vClients, Client))
    {
        cout << "\nClient with [" << AccountNumber << "] does not exist.\n";
        AccountNumber = ReadClientAccountNumber();
    }

    PrintClientCard(Client);

    double Amount = 0;
    cout << "\nPlease enter withdraw amount? ";
    cin >> Amount;

    //Validate that the amount does not exceeds the balance
    while (Amount > Client.AccountBalance)
    {
        cout << "\nAmount Exceeds the balance, you can withdraw up to : " << Client.AccountBalance << endl;
        cout << "Please enter another amount? ";
        cin >> Amount;
    }

    DepositBalanceToClientByAccountNumber(AccountNumber, Amount * -1, vClients);

}

void ShowTotalBalancesScreen() {

    ShowTotalBalances();

}

enum enPermission {

    eFullAccess = -1, pListClients = 1, pAddNewClient = 2, pDeleteClient = 4, 
    pUpdateClient = 8, pFindClient = 16, pShowTransactionsMenue = 32,
    pManageUser = 64
};
enum enManageMenuOptions {
    eListUsers = 1, eAddNewUser = 2,
    eDeleteUser = 3, UpdateUser = 4,
    FindUser = 5, MainMenu = 6
};
enum enTransactionsMenueOptions { 
    eDeposit = 1, eWithdraw = 2, 
    eShowTotalBalance = 3, eShowMainMenue = 4 
};
enum enMainMenueOptions { 
    eListClients = 1, eAddNewClient = 2, eDeleteClient = 3, 
    eUpdateClient = 4, eFindClient = 5, eShowTransactionsMenue = 6,
    ManageUser = 7, eExit = 8 
};

void GoBackToManageMenu() {

    cout << "\n\nPress any key to go back to Main Menue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // لتنظيف البفر
    cin.get();
    ShowManageUsersMenuScreen();

}

void GoBackToMainMenue() {

    cout << "\n\nPress any key to go back to Main Menue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // لتنظيف البفر
    cin.get();
    ShowMainMenue();

}

//////////////////////////////////////////////////// M.A.N.A.G.E - U.S.E.R ////////////////////////////////////////////////////👇
void AddUsersDataLineToFile(string FileName, string stDataLine){
    
    fstream MyFile;
    MyFile.open(FileName, ios::out | ios::app);

    if (MyFile.is_open())
    {

        MyFile << stDataLine << endl;

        MyFile.close();
    }

}

sUsers ConvertLinetoRecordOfUsers(string Line, string Seperator = "#//#") {


    sUsers Users;
    vector<string> vUserData;

    vUserData = SplitString(Line, Seperator);

    Users.UserName = vUserData[0];
    Users.Password = vUserData[1];
    Users.Permission = stoi(vUserData[2]);


    return Users;

}
string ConvertRecordToLineOfUsers(sUsers Users, string Seperator = "#//#") { 
    
    // Collects CilentStructer with Seperator And stor theme into the string.

    string stUsersRecord = "";

    stUsersRecord += Users.UserName + Seperator;
    stUsersRecord += Users.Password + Seperator;
    stUsersRecord += to_string(Users.Permission);

    return stUsersRecord;

}

bool UsersExistsByAccountNumber(string UserNumber, string FileName) {  

    vector <sUsers> vUsers;

    fstream MyFile;
    MyFile.open(FileName, ios::in);//read Mode

    if (MyFile.is_open())
    {

        string Line;
        sUsers Users;

        while (getline(MyFile, Line))
        {

            Users = ConvertLinetoRecordOfUsers(Line);
            if (Users.UserName == UserNumber)
            {
                MyFile.close();
                return true;
            }


            vUsers.push_back(Users);
        }

        MyFile.close();

    }

    return false;

}

bool FindUsersByUserName(string UserName, vector <sUsers> vUsers, sUsers& Users) { 
    
    // Check if Users Exists in (vector <sUsers> vUsers, Not into the FileName) by UserName. 

    for (sUsers C : vUsers)
    {

        if (C.UserName == UserName)
        {
            Users = C;
            return true;
        }
        

    }
    return false;

}

vector <sUsers> LoadUsersDataFromFile(string FileName) { 
    
    // Drag from FileName("Clients.txt") line by line and store theme into the vector <sClient> vClients.  
    
    vector <sUsers> vUsers;

    fstream MyFile;
    MyFile.open(FileName, ios::in);//read Mode

    if (MyFile.is_open())
    {

        string Line;
        sUsers Users;

        while (getline(MyFile, Line))
        {

            Users = ConvertLinetoRecordOfUsers(Line);

            vUsers.push_back(Users);
        }

        MyFile.close();

    }

    return vUsers;

}
string ReadUserNameOfUser() {

    string Name;

    cout << "Enter The UserName: ";
    cin >> Name;

    return Name;
}
void PrintUsersCard(sUsers Users) {

    cout << "\nThe following are the Users details:\n";
    cout << "-----------------------------------";
    cout << "\nUserName : " << Users.UserName;
    cout << "\nPassword : " << Users.Password;
    cout << "\nPermission : " << Users.Permission;
    cout << "\n-----------------------------------\n";

}
vector <sUsers> SaveUsersDataToFile(string UserName, vector <sUsers> vUsers) {

    fstream MyFile;
    MyFile.open(UserName, ios::out);//overwrite

    string DataLine;

    if (MyFile.is_open())
    {

        for (sUsers U : vUsers)
        {

            if (U.MarkForDelete == false)
            {
                //we only write records that are not marked for delete.  
                DataLine = ConvertRecordToLineOfUsers(U);
                MyFile << DataLine << endl;

            }

        }

        MyFile.close();

    }

    return vUsers;

}
bool CheckAccessPermission(enPermission Permission) {
    
    if(CurrentUser.Permission == enPermission::eFullAccess)
        return true;
    
    if((Permission & CurrentUser.Permission) == Permission)
        return true;

    return false;
}

////////////////////////////////// Find User ///////////////////////////////👇
void ShowFindUserScreen() {

    if(CheckAccessPermission(enPermission::pFindClient))
    {
        cout << "\n-----------------------------------\n";
        cout << "\tFind User Screen";
        cout << "\n-----------------------------------\n";

        vector <sUsers> vUsers = LoadUsersDataFromFile(UsersFileName);
        sUsers Users;
        string UserName = ReadUserNameOfUser();
        if (FindUsersByUserName(UserName, vUsers, Users))
            PrintUsersCard(Users);
        else
            cout << "\nUser with UserName[" << UserName << "] is not found!";
    }
    else
    {
        cout << "\n-----------------------------------";
        cout << "\nAccess Denied,";
        cout << "\nYou Don't Have Permission,";
        cout << "\nPlease Contact your Admin";
        cout << "\n-----------------------------------";
    }

}
////////////////////////////////// Find User ///////////////////////////////👆

////////////////////////////////// Update User ///////////////////////////////👇
int ReadPermissionsToSet();

sUsers ChangeUserRecord(string UserName) {  

    sUsers Users;

    Users.UserName = UserName;

    cout << "Enter Password? ";
    getline(cin >> ws, Users.Password);

    return Users;

}
bool UpdateUserByUserName(string UserName, vector <sUsers>& vUsers) {

    sUsers Users;
    char Answer = 'n';

    if (FindUsersByUserName(UserName, vUsers, Users))
    {

        PrintUsersCard(Users);
        cout << "\n\nAre you sure you want update this User? y/n ? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {

            for (sUsers& U : vUsers)
            {
                if (U.UserName == UserName)
                {
                    U = ChangeUserRecord(UserName);
                    U.Permission = ReadPermissionsToSet();
                    break;
                }

            }

            SaveUsersDataToFile(UsersFileName, vUsers);

            cout << "\n\nUsers Updated Successfully.";
            return true;
        }

    }
    else
    {
        cout << "\nUsers with UserName (" << UserName << ") is Not Found!";
        return false;
    }

}
void ShowUpdateUserScreen() {
    
    if(CheckAccessPermission(enPermission::pUpdateClient))
    {
        cout << "\n-----------------------------------\n";
        cout << "\tUpdate User Info Screen";
        cout << "\n-----------------------------------\n";

        vector <sUsers> vUsers = LoadUsersDataFromFile(UsersFileName);
        string UserName = ReadUserNameOfUser();
        UpdateUserByUserName(UserName, vUsers);
    }
    else
    {
        cout << "\n-----------------------------------";
        cout << "\nAccess Denied,";
        cout << "\nYou Don't Have Permission,";
        cout << "\nPlease Contact your Admin";
        cout << "\n-----------------------------------";
    }

}
////////////////////////////////// Update User ///////////////////////////////👆

////////////////////////////////// DeleteUser ///////////////////////////////👇

bool MarkUserForDeleteByUserName(string UserName, vector <sUsers>& vUsers) {

    for (sUsers& U : vUsers)
    {

        if (U.UserName == UserName)
        {
            U.MarkForDelete = true;
            return true;
        }

    }

    return false;

}
bool DeleteUsersByUserName(string UserName, vector <sUsers>& vUsers) { 

    sUsers Users;
    char Answer = 'n';

    if (FindUsersByUserName(UserName, vUsers, Users))
    {

        PrintUsersCard(Users);

        cout << "\n\nAre you sure you want delete this User? y/n ? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            MarkUserForDeleteByUserName(UserName, vUsers);
            SaveUsersDataToFile(UsersFileName, vUsers);

            //Refresh Clients 
            vUsers = LoadUsersDataFromFile(UsersFileName);

            cout << "\n\nUsers Deleted Successfully.";
            return true;
        }
        if(tolower(Answer) == 'n')
        {
            return false;
        }

    }
    else
    {
        cout << "\nUsers with UserName (" << UserName << ") is Not Found!";
        return false;
    }

}
void ShowDeleteUsersScreen() {

    if(CheckAccessPermission(enPermission::pDeleteClient))
    {
        cout << "\n-----------------------------------\n";
        cout << "\tDelete Client Screen";
        cout << "\n-----------------------------------\n";

        vector <sUsers> vUsers = LoadUsersDataFromFile(UsersFileName);
        string UserName = ReadUserNameOfUser();
        DeleteUsersByUserName(UserName, vUsers);
    }
    else
    {
        cout << "\n-----------------------------------";
        cout << "\nAccess Denied,";
        cout << "\nYou Don't Have Permission,";
        cout << "\nPlease Contact your Admin";
        cout << "\n-----------------------------------";
    }

    

}
////////////////////////////////// DeleteUser ///////////////////////////////👆

////////////////////////////////// AddUsers ///////////////////////////////👇
int ReadPermissionsToSet() {
    

    int Permission = 0;
    char Choise = 'n';

    cout << "\nDo you want give this User all Permission! y/n? ";
    cin >> Choise;
    if(tolower(Choise) == 'y')
    {
        return Permission = -1;
    }

    cout << "\nDo you wanna give access to: \n";
    
    cout << "\nShow Client List? y/n"; cin >> Choise;
    if(tolower(Choise) == 'y')
        Permission += enPermission::pListClients;

    cout << "\nAdd New Client? y/n"; cin >> Choise;
    if(tolower(Choise) == 'y')
        Permission += enPermission::pAddNewClient;
    
    cout << "\nDelete Client? y/n"; cin >> Choise;
    if(tolower(Choise) == 'y')
        Permission += enPermission::pDeleteClient;

    cout << "\nUpdate Client? y/n"; cin >> Choise;
    if(tolower(Choise) == 'y')
        Permission += enPermission::pUpdateClient;

    cout << "\nFind Client? y/n"; cin >> Choise;
    if(tolower(Choise) == 'y')
        Permission += enPermission::pFindClient;
    
    cout << "\ntransactions? y/n"; cin >> Choise;
    if(tolower(Choise) == 'y')
        Permission += enPermission::pShowTransactionsMenue;
    
    cout << "\nManage Users? y/n"; cin >> Choise;
    if(tolower(Choise) == 'y')
        Permission += enPermission::pManageUser;


    return Permission;
}

sUsers ReadNewUsers() { 

    sUsers Users;

    cout << "Enter UserName? ";

    // Usage of std::ws will extract all the whitespace character
    getline(cin >> ws, Users.UserName);

    while (UsersExistsByAccountNumber(Users.UserName, UsersFileName))
    {
        cout << "\nUsers with [" << Users.UserName << "] already exists, Enter another UserName? ";
        getline(cin >> ws, Users.UserName);
    }


    char Choise; 

    cout << "Enter Password? ";
    getline(cin, Users.Password);

    Users.Permission = ReadPermissionsToSet(); 

    return Users;

}
void AddNewUser(){

    sUsers Users;
    Users = ReadNewUsers(); 
    AddUsersDataLineToFile(UsersFileName,ConvertRecordToLineOfUsers(Users));

}
void AddNewUsers(){

    char AddMore = 'Y';
    do
    {
        system("clear");
        cout << "Adding New User:\n\n";

        AddNewUser();
        cout << "\nUser Added Successfully, do you want to add more Users? Y/N? ";


        cin >> AddMore;

    } while (toupper(AddMore) == 'Y');

}
void ShowAddNewUsersScreen() {

    if(CheckAccessPermission(enPermission::pAddNewClient))
    {
        cout << "\n-----------------------------------\n";
        cout << "\tAdd New Users Screen";
        cout << "\n-----------------------------------\n";

        AddNewUsers();
    }
    else
    {
        cout << "\n-----------------------------------";
        cout << "\nAccess Denied,";
        cout << "\nYou Don't Have Permission,";
        cout << "\nPlease Contact your Admin";
        cout << "\n-----------------------------------";
    }
    

}

////////////////////////////////// AddUsers ///////////////////////////////👆

////////////////////////////////// UsersList ///////////////////////////////👇
void PrintUsersRecordLine(sUsers Users) {

    cout << "| " << setw(15) << left << Users.UserName;
    cout << "| " << setw(10) << left << Users.Password;
    cout << "| " << setw(40) << left << Users.Permission;

}
void ShowAllUsersScreen() {

    vector <sUsers> vUsers = LoadUsersDataFromFile(UsersFileName);

    cout << "\n\t\t\t\t\tUsers List (" << vUsers.size() << ") Users(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

    cout << "| " << left << setw(15) << "User Name";
    cout << "| " << left << setw(10) << "Password";
    cout << "| " << left << setw(40) << "Permission";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

    if (vUsers.size() == 0)
        cout << "\t\t\t\tNo Clients Available In the System!";
    else

        for (sUsers Users : vUsers)
        {

            PrintUsersRecordLine(Users);
            cout << endl;
        }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

}
void ShowUsersScreen() {

    if(CheckAccessPermission(enPermission::pListClients))
    {
        ShowAllUsersScreen();
    }
    else
    {
        cout << "\n-----------------------------------";
        cout << "\nAccess Denied,";
        cout << "\nYou Don't Have Permission,";
        cout << "\nPlease Contact your Admin";
        cout << "\n-----------------------------------";
    }

}
////////////////////////////////// UsersList ///////////////////////////////👆

void PerformManageUsersMenuScreen(enManageMenuOptions ManageMenuOptions) {

    switch (ManageMenuOptions)
    {
    case enManageMenuOptions::eListUsers:
        system("clear");
        ShowUsersScreen();
        GoBackToManageMenu();
        break;
        
    case enManageMenuOptions::eAddNewUser:
        system("clear");
        ShowAddNewUsersScreen();
        GoBackToManageMenu();
        break;
    
    case enManageMenuOptions::eDeleteUser:
        system("clear");
        ShowDeleteUsersScreen();
        GoBackToManageMenu();
        break;

    case enManageMenuOptions::UpdateUser:
        system("clear");
        ShowUpdateUserScreen();
        GoBackToManageMenu();
        break;

    case enManageMenuOptions::FindUser:
        system("clear");
        ShowFindUserScreen();
        GoBackToManageMenu();
        break;
    
    case enManageMenuOptions::MainMenu:
        system("clear");
        ShowMainMenue();
        break;

    default:
        break;
    }
}

short ReadManageUsersMenuScreen() {

    short Choise = 0;

    cout << "Choose What Do You Want To Do? [1- 6]\n";
    cin >> Choise;

    return Choise;
}

void ShowManageUsersMenuScreen() {

    system("clear");
    cout << "===========================================\n";
    cout << "\t\tManage Users Menu Screen\n";
    cout << "===========================================\n";
    cout << "\t[1] List Users.\n";
    cout << "\t[2] Add New User.\n";
    cout << "\t[3] Delete User.\n";
    cout << "\t[4] Update User.\n";
    cout << "\t[5] Find User.\n";
    cout << "\t[6] Main Menu.\n";
    cout << "===========================================\n";    

    PerformManageUsersMenuScreen((enManageMenuOptions) ReadManageUsersMenuScreen());
}

//////////////////////////////////////////////////// M.A.N.A.G.E - U.S.E.R ////////////////////////////////////////////////////👆


void GoBackToTransactionsMenue() {

    cout << "\n\nPress any key to go back to Transactions Menue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // لتنظيف البفر
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
    case enTransactionsMenueOptions::eDeposit:
    {
        system("clear");
        ShowDepositScreen();
        GoBackToTransactionsMenue();
        break;
    }

    case enTransactionsMenueOptions::eWithdraw:
    {
        system("clear");
        ShowWithDrawScreen();
        GoBackToTransactionsMenue();
        break;
    }


    case enTransactionsMenueOptions::eShowTotalBalance:
    {
        system("clear");
        ShowTotalBalancesScreen();
        GoBackToTransactionsMenue();
        break;
    }


    case enTransactionsMenueOptions::eShowMainMenue:
    {

        ShowMainMenue();

    }
    }

}

void ShowTransactionsMenue() {

    system("clear");
    cout << "===========================================\n";
    cout << "\t\tTransactions Menue Screen\n";
    cout << "===========================================\n";
    cout << "\t[1] Deposit.\n";
    cout << "\t[2] Withdraw.\n";
    cout << "\t[3] Total Balances.\n";
    cout << "\t[4] Main Menue.\n";
    cout << "===========================================\n";
    PerfromTranactionsMenueOption((enTransactionsMenueOptions)ReadTransactionsMenueOption());
}

short ReadMainMenueOption() {

    cout << "Choose what do you want to do? [1 to 7]? ";
    short Choice = 0;
    cin >> Choice;

    return Choice;
}

void PerfromMainMenueOption(enMainMenueOptions MainMenueOption) {

    switch (MainMenueOption)
    {
    case enMainMenueOptions::eListClients:
    {
        system("clear");
        ShowAllClientsScreen();
        GoBackToMainMenue();
        break;
    }
    case enMainMenueOptions::eAddNewClient:
        system("clear");
        ShowAddNewClientsScreen();
        GoBackToMainMenue();
        break;

    case enMainMenueOptions::eDeleteClient:
        system("clear");
        ShowDeleteClientScreen();
        GoBackToMainMenue();
        break;

    case enMainMenueOptions::eUpdateClient:
        system("clear");
        ShowUpdateClientScreen();
        GoBackToMainMenue();
        break;

    case enMainMenueOptions::eFindClient:
        system("clear");
        ShowFindClientScreen();
        GoBackToMainMenue();
        break;

    case enMainMenueOptions::eShowTransactionsMenue:
        system("clear");
        ShowTransactionsMenue();
        break;

    case enMainMenueOptions::ManageUser:
        system("clear");
        ShowManageUsersMenuScreen();
        break;

    case enMainMenueOptions::eExit:
        system("clear");
        ShowLoginScreen();
        
        break;
    }

}

void ShowMainMenue() {

    system("clear");
    cout << "===========================================\n";
    cout << "\t\tMain Menue Screen\n";
    cout << "===========================================\n";
    cout << "\t[1] Show Client List.\n";
    cout << "\t[2] Add New Client.\n";
    cout << "\t[3] Delete Client.\n";
    cout << "\t[4] Update Client Info.\n";
    cout << "\t[5] Find Client.\n";
    cout << "\t[6] Transactions.\n";
    cout << "\t[7] ManageUser.\n";
    cout << "\t[8] Logout.\n";
    cout << "===========================================\n";
    PerfromMainMenueOption((enMainMenueOptions)ReadMainMenueOption());
}

void ShowLoginScreen() {

    string UserName, Password;
    vector<sUsers> vUsers = LoadUsersDataFromFile(UsersFileName);
    
    bool LoginSuccess = false;

    do {
        system("clear");
        cout << "===========================================\n";
        cout << "\t\t Login Screen\n";
        cout << "===========================================\n";

        cout << "Enter The UserName? ";
        cin >> UserName;
        cout << "Enter the Password? ";
        cin >> Password;

        for (sUsers &U : vUsers) {
            if (U.UserName == UserName && U.Password == Password) {
                CurrentUser = U; 
                LoginSuccess = true;
                break;
            }
        }

        if (!LoginSuccess) {
            cout << "\nInvalid Username/Password!\n";
            system("pause"); 
        }

    } while (!LoginSuccess);

    ShowMainMenue();
}

int main() {
    
    
    ShowLoginScreen();

    cout << "\nPress Enter to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}
```
<font color="#646a73">Output:</font>
```

```
---

---
### <font color="#ffff00">(#P2):</font>

### <font color="#ffff00">Input:</font>
```cpp

```
---
