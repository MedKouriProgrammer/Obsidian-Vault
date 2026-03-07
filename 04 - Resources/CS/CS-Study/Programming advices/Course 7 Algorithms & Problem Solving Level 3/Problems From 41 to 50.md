---
creation_date: 2026-02-07
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Problems From 41 to 50</font>
---
### <font color="#ffff00">(41#):</font>
![[Pasted image 20260213204201.png]]
### <font color="#ffff00">My Input:</font>
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string JoinVector(vector<string> &Names, string Delim) {

    string SWord = "";
    
    for (string &i : Names)
    {
        SWord = SWord + i + Delim;
    }
    
    return SWord.substr(0, SWord.length() - Delim.length());
}

string ReverseString(vector<string> &Names, string Delim) {

    string ReverseString = "";

    for (int i = Names.size() - 1; i >= 0; i--) 
    {
        ReverseString += Names[i] + Delim;
    }

    return ReverseString.substr(0, ReverseString.length() - Delim.length());
} 

int main() {

    vector<string> Names = {"Mohammed", "Faid", "Ali", "Maher"};

    cout << "Vector after join: \n";
    cout << ReverseString(Names, " ");

    return 0;
}
```
### <font color="#ffff00">Abu-Hedhoud Input:</font>
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string ReadString() {

    string Name;

    cout << "Enter your string: ";
    getline(cin, Name);

    return Name;
}

vector<string> SplitString(string Name, string Delim) {

    short Pos = 0;
    string Word;

    vector<string> ModName;
    

    while ((Pos = Name.find(Delim)) != std::string::npos)
    {
        Word = Name.substr(0, Pos);

        if(Word != "")
        {
            ModName.push_back(Word);
        }

        Name.erase(0, Pos + Delim.length()); 
    }

    if (Name != "")
    {
        ModName.push_back(Name);
    }
    
    return ModName;
}

string ReverseString(string Name) {

    vector<string> vString;
    string Container = "";

    vString = SplitString(Name, " ");

    vector<string>::iterator iter = vString.end();

    while(iter != vString.begin())
    {
        --iter;

        Container += *iter + " ";
    }

    Container = Container.substr(0, Container.length() - 1);    
    
    return Container;
} 

int main() {

    string Name = ReadString();

    cout << "\nVector after join: \n";
    
    cout << ReverseString(Name);

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter your string: Mohammed Abu-Hedhoud I'am from jordan

Vector after join: 
jordan from I'am Abu-Hedhoud Mohammed
```
---
### <font color="#ffff00">(#42):</font>
![[Pasted image 20260214082047.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string ReadString() {

    string Name;

    cout << "Enter your string: ";
    getline(cin, Name);

    return Name;
}

string ReverseString(string Names, string OldReplace, string NewReplace) {

    short pos = Names.find(OldReplace);

    while(pos != std::string::npos)
    {
        Names = Names.replace(pos, OldReplace.length(), NewReplace);
        pos = Names.find(OldReplace);
    }

    return Names;
} 

int main() {

    string Names = ReadString();

    string OldReplace = "Jordan";
    string NewReplace = "USA";

    cout << "\nOriginal String\n";
    cout << Names << endl;

    cout << "\nString after replace\n";
    cout << ReverseString(Names, OldReplace, NewReplace) << endl;

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter your string: Welcome to Jordan , Jordan is a nice country

Original String
Welcome to Jordan , Jordan is a nice country

String after replace
Welcome to USA , USA is a nice country
```
---
### <font color="#ffff00">(#43):</font>
![[Pasted image 20260214090226.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string ReadString() {

    string Name;

    cout << "Enter your string: ";
    getline(cin, Name);

    return Name;
}

vector<string> SplitString(string Name, string Delim) {

    short Pos = 0;
    string Word;

    vector<string> ModName;
    

    while ((Pos = Name.find(Delim)) != std::string::npos)
    {
        Word = Name.substr(0, Pos);

        if(Word != "")
        {
            ModName.push_back(Word);
        }

        Name.erase(0, Pos + Delim.length()); 
    }

    if (Name != "")
    {
        ModName.push_back(Name);
    }
    
    return ModName;
}

string JoinString(vector<string> Names, string Delim) {

    string SWord = "";
    
    for (string& s : Names)
    {
        SWord = SWord + s + Delim;
    }
    
    return SWord.substr(0, SWord.length() - Delim.length());;
}
string LowerAllString(string S1) {

    for (short i = 0; i < S1.length(); i++)
    {
        S1[i] = tolower(S1[i]);
    }

    return S1;
}

string ReplaceWordInStringUsingSplit(string Names, string OldReplace, string NewReplace, bool MatchCase = false) {

    vector<string> vString = SplitString(Names, " ");
 
    for (string& s : vString)
    {
       if (MatchCase)
        {
            if (s == OldReplace)
            {
                s = NewReplace;
            }
        }
        else    
        {
            if (LowerAllString(s) == LowerAllString(OldReplace))
            {
                s = NewReplace;
            }
        }
    
    }
    
    return JoinString(vString, " ");
} 

int main() {

    string Names = ReadString();

    string OldReplace = "Jordan";
    string NewReplace = "USA";

    cout << "\nOriginal String:\n" << Names;
    cout << "\n\nReplace with match case: ";
    cout << "\n" << ReplaceWordInStringUsingSplit(Names,OldReplace, NewReplace);

    cout << "\n\nReplace with dont match case: ";
    cout << "\n" << ReplaceWordInStringUsingSplit(Names, OldReplace, NewReplace, false);


    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter your string: Welcome to Jordan , Jordan is a nice country

Original String:
Welcome to Jordan , Jordan is a nice country

Replace with match case: 
Welcome to USA , USA is a nice country

Replace with dont match case: 
Welcome to USA , USA is a nice country
```
---
### <font color="#ffff00">(#44):</font>
![[Pasted image 20260214150833.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string ReadString() {

    string Name;

    cout << "Enter your string: ";
    getline(cin, Name);

    return Name;
}

string RemovePunctuation(string Name) {

    string Container = "";

    for (short i = 0; i < Name.length(); i++)
    {
        if (!ispunct(Name[i]))
        {
            Container += Name[i];
        }

    }

    return Container;
}
int main() {

    string Names = ReadString();

    cout << RemovePunctuation(Names);

    
    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter your string: Welcome to Jordan, Jordan is a nice country; it's amazing.

Original String:
Welcome to Jordan, Jordan is a nice country; it's amazing.

Panctcuations Remove: 
Welcome to Jordan Jordan is a nice country its amazing
```
---
### <font color="#ffff00">(#45):</font>
![[Pasted image 20260214163049.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct stInformation {

    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance; 
};

stInformation ReadInformation() {

    stInformation Information;

    cout << "Enter Account Number? \n";
    getline(cin, Information.AccountNumber);

    cout << "\nEnetr PinCode? \n";
    getline(cin, Information.PinCode);

    cout << "\nEnter Name? \n";
    getline(cin, Information.Name);

    cout << "\nEnter Phone? \n";
    getline(cin, Information.Phone);

    cout << "\nEnter AccountBalance? \n";
    cin >> Information.AccountBalance;
    
    return Information;

}

string ConvertStringIntoLine(stInformation &Information, string Seperator) {

    string InfoModification = "";

    InfoModification += Information.AccountNumber + Seperator;
    InfoModification += Information.PinCode + Seperator;
    InfoModification += Information.Name + Seperator;
    InfoModification += Information.Phone + Seperator;
    InfoModification += to_string(Information.AccountBalance);


    return InfoModification;
}

int main() {

    cout << "\nEnter the client data:\n\n";

    stInformation Information;
    Information = ReadInformation();
	
	cout << "\n\nClient Record for Saving is: \n";
    cout << ConvertStringIntoLine(Information, "#//#");

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter the client data:

Enter Account Number? 
A150

Enetr PinCode? 
1234

Enter Name? 
Mohammed Abu-Hedhoud 

Enter Phone? 
0799399999

Enter AccountBalance? 
5000

nClient Record for Saving is:
A150#//#1234#//#Mohammed Abu-Hedhoud#//#0799399999#//#5000.000000
```
---
### <font color="#ffff00">(#46):</font>
![[Pasted image 20260214172255.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct stInformation {

    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance; 
};

vector<string> SplitString(string Name, string Delim) {

    short Pos = 0;
    string Word;

    vector<string> ModName;
    

    while ((Pos = Name.find(Delim)) != std::string::npos)
    {
        Word = Name.substr(0, Pos);

        if(Word != "")
        {
            ModName.push_back(Word);
        }

        Name.erase(0, Pos + Delim.length()); 
    }

    if (Name != "")
    {
        ModName.push_back(Name);
    }
    
    return ModName;
}

stInformation ConvertLinetoRecord(string Line, string seperator = "#//#") {

    stInformation Information;
    vector<string> vClientData;

    vClientData = SplitString(Line, seperator);

    Information.AccountNumber = vClientData[0];
    Information.PinCode = vClientData[1];
    Information.Name = vClientData[2];
    Information.Phone = vClientData[3];
    Information.AccountBalance = stod(vClientData[4]);

    return Information;
}

void PrintClientRecord(stInformation Information) {

    cout << "\n\nThe following is the extracted client record:\n";
    cout << "\nAccount Number: " << Information.AccountNumber;
    cout << "\nPin Code      : " << Information.PinCode;
    cout << "\nName          : " << Information.Name;
    cout << "\nPhone         : " << Information.Phone;
    cout << "\nAccountBalance: " << Information.AccountBalance;

}

int main() {

    string stLine = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";
    
    cout << "\nLine Record is: \n";
    cout << stLine;

    stInformation Information = ConvertLinetoRecord(stLine);

    PrintClientRecord(Information);


    return 0;
}
```
<font color="#646a73">Output:</font>
```
Line Record is: 
A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000

The following is the extracted client record:

Account Number: A150
Pin Code      : 1234
Name          : Mohammed Abu-Hadhoud
Phone         : 079999
AccountBalance: 5270
```
---
### <font color="#ffff00">(#47):</font>
![[Pasted image 20260214182146.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

using namespace std;

struct stInformation {

    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance; 
};

stInformation ReadInformation() {

    stInformation Information;

    cout << "Enter Account Number: ";
    getline(cin, Information.AccountNumber);

    cout << "Enetr PinCode: ";
    getline(cin, Information.PinCode);

    cout << "Enter Name: ";
    getline(cin, Information.Name);

    cout << "Enter Phone: ";
    getline(cin, Information.Phone);

    cout << "Enter AccountBalance: ";
    cin >> Information.AccountBalance;
    
    return Information;

}

string ConvertRecordtoLine(stInformation &Information, string Seperator) {

    string InfoModification = "";

    InfoModification += Information.AccountNumber + Seperator;
    InfoModification += Information.PinCode + Seperator;
    InfoModification += Information.Name + Seperator;
    InfoModification += Information.Phone + Seperator;
    InfoModification += to_string(Information.AccountBalance);


    return InfoModification;
}

void InsertInformationIntoFiles(stInformation Information) {

    fstream MyFilesInfo("ClientInfo.txt", ios::out | ios::app); // append mode

    if (MyFilesInfo.is_open())
    {
        MyFilesInfo << ConvertRecordtoLine(Information, " ");
        
        MyFilesInfo.close();
    }

}

void AddNewClients() {
    
    stInformation Information = ReadInformation();
    InsertInformationIntoFiles(Information);
}

void AskAnd_ReAskForAddClients() {

    char AddMore = 'y';

    do
    {
        cout << "Adding new clients: \n\n";

        AddNewClients();
        cout << "\nClient Added Successfully, do you want to add more clients? Y/N? ";
        cin >> AddMore;

    } while (AddMore != 'n');
     
    
}

int main() {

    
    AskAnd_ReAskForAddClients();

 

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Adding new clients: 

Enter Account Number: A150
Enetr PinCode: 1234
Enter Name: Mohammed Abu-Hedhoud
Enter Phone: 09389838
Enter AccountBalance: 9000

Client Added Successfully, do you want to add more clients? Y/N? n
```
---
### <font color="#ffff00">(#48):</font>
![[Pasted image 20260214192551.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <vector>
#include <iomanip>

using namespace std;

const string FileName = "ClientInfo.txt"; 

struct stInformation {

    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance; 
};

vector<string> SplitString(string Name, string Delim) {

    short Pos = 0;
    string Word;

    vector<string> ModName;
    

    while ((Pos = Name.find(Delim)) != std::string::npos)
    {
        Word = Name.substr(0, Pos);

        if(Word != "")
        {
            ModName.push_back(Word);
        }

        Name.erase(0, Pos + Delim.length()); 
    }

    if (Name != "")
    {
        ModName.push_back(Name);
    }
    
    return ModName;
}

stInformation ConvertLinetoRecord(string Line, string seperator = "#//#") {

    stInformation Information;
    vector<string> vClientData;

    vClientData = SplitString(Line, seperator);

    Information.AccountNumber = vClientData[0];
    Information.PinCode = vClientData[1];
    Information.Name = vClientData[2];
    Information.Phone = vClientData[3];
    Information.AccountBalance = stod(vClientData[4]);

    return Information;
}

vector<stInformation> GetLinesOfClients(string FileName) {

    vector<stInformation> vInformation;

    fstream MyFile;

    MyFile.open(FileName, ios::in);

    if(MyFile.is_open())
    {
        string Line;
        stInformation Info;

        while(getline(MyFile, Line))
        {
            Info = ConvertLinetoRecord(Line);

            vInformation.push_back(Info);
        }

        MyFile.close();
    }

    return vInformation;
}

void PrintClientsRecord(stInformation Information) {

    cout << "| " << setw(15) << left <<  Information.AccountNumber;
    cout << "| " << setw(10) << left <<  Information.PinCode;
    cout << "| " << setw(40) << left <<  Information.Name;
    cout << "| " << setw(12) << left <<  Information.Phone;
    cout << "| " << setw(12) << left <<  Information.AccountBalance;
}

void PrintAllClientsData(vector<stInformation> vInformation) {

    cout << "\n\t\t\t\tClient List (" << vInformation.size() << ") Client(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________" << endl;

    cout << "| " << left << setw(15) << "Accout Number";
    cout << "| " << left << setw(10) << "Pin Code";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Phone";
    cout << "| " << left << setw(12) << "Balance";
    cout <<
    
    "\n_______________________________________________________";
    cout << "_________________________________________" << endl;

    for(stInformation Info : vInformation)
    {
        PrintClientsRecord(Info);
        cout << endl;
    }
    
    cout << "_______________________________________________________";
    cout << "_________________________________________\n" << endl;

}

int main() {

    
    vector<stInformation> Information = GetLinesOfClients(FileName); 

    PrintAllClientsData(Information);

    return 0;
}
```
<font color="#646a73">Output:</font>
```
					            Client List (3) Client(s).       
________________________________________________________________________________________________
| Accout Number  | Pin Code  | Client Name                             | Phone       | Balance     
________________________________________________________________________________________________
| A150           | 1234      | Mohammed Abu-hedhoud                    | 09389838    | 9000        
| A180           | 1464      | Mohammed Abu-hedhoud                    | 09373438    | 6000        
| A153           | 1223      | Mohammed Abu-hedhoud                    | 09345638    | 4000        
________________________________________________________________________________________________

```
---
### <font color="#ffff00">(#49):</font>
![[Pasted image 20260216181200.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <vector>
#include <iomanip>

using namespace std;

const string FileName = "ClientInfo.txt"; 

struct stInformation {

    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance; 
};

vector<string> SplitString(string Name, string Delim) {

    short Pos = 0;
    string Word;

    vector<string> ModName;
    

    while ((Pos = Name.find(Delim)) != std::string::npos)
    {
        Word = Name.substr(0, Pos);

        if(Word != "")
        {
            ModName.push_back(Word);
        }

        Name.erase(0, Pos + Delim.length()); 
    }

    if (Name != "")
    {
        ModName.push_back(Name);
    }
    
    return ModName;
}

stInformation ConvertLinetoRecord(string Line, string seperator = "#//#") {

    stInformation Information;
    vector<string> vClientData;

    vClientData = SplitString(Line, seperator);

    Information.AccountNumber = vClientData[0];
    Information.PinCode = vClientData[1];
    Information.Name = vClientData[2];
    Information.Phone = vClientData[3];
    Information.AccountBalance = stod(vClientData[4]);

    return Information;
}

vector<stInformation> GetLinesOfClients(string FileName) {

    vector<stInformation> vInformation;

    fstream MyFile;

    MyFile.open(FileName, ios::in);

    if(MyFile.is_open())
    {
        string Line;
        stInformation Info;

        while(getline(MyFile, Line))
        {
            Info = ConvertLinetoRecord(Line);

            vInformation.push_back(Info);
        }

        MyFile.close();
    }

    return vInformation;
}

void PrintClientsRecord(stInformation Information) {

    cout << "\nThe following are the client details: \n";
    cout << "\nAccountNumber : " <<  Information.AccountNumber;
    cout << "\nPinCode       : " <<  Information.PinCode;
    cout << "\nName          : " <<  Information.Name;
    cout << "\nPhone         : " <<  Information.Phone;
    cout << "\nAccountBalance: " <<  Information.AccountBalance;
}

bool FindClientByAccountNumber (stInformation &Information, string AccountNumber) {

    vector<stInformation> vInformation = GetLinesOfClients(FileName); 
    
    for(stInformation Info : vInformation)
    {
        if(Info.AccountNumber == AccountNumber)
        {   
            Information = Info;
            return true;
        }

    }

    return false;
}

string ReadForAccountNumber() {

    string AskAccountNumber = "";

    cout << "Enter AccountNumber: ";
    cin >> AskAccountNumber;

    return AskAccountNumber;
}

int main() {


    stInformation Information;
    string AccountNumber = ReadForAccountNumber();   

    if(FindClientByAccountNumber(Information, AccountNumber))
    {
        PrintClientsRecord(Information);
    }
    else
    {
        cout << "\nClient with account number (" << AccountNumber << ") Not Found!";
    } 


    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter AccountNumber: A150

The following are the client details: 

AccountNumber : A150
PinCode       : 1234
Name          : Mohammed Abu-hedhoud
Phone         : 09389838
AccountBalance: 9000
```
<font color="#646a73">Output:</font>
```
Enter AccountNumber: B33

Client with account number (B33) Not Found!
```
---
### <font color="#ffff00">(#50):</font>
![[Pasted image 20260216202625.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

const string FileName = "ClientInfo.txt"; 

struct stInformation {

    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance; 
    bool MarkForDelete = false;
};

vector<string> SplitString(string Name, string Delim) { // get he the line or words.

    short Pos = 0;
    string Word;

    vector<string> ModName;
    

    while ((Pos = Name.find(Delim)) != std::string::npos)
    {
        Word = Name.substr(0, Pos);

        if(Word != "")
        {
            ModName.push_back(Word);
        }

        Name.erase(0, Pos + Delim.length()); 
    }

    if (Name != "")
    {
        ModName.push_back(Name);
    }
    
    return ModName;
}

stInformation ConvertLinetoRecord(string Line, string seperator = "#//#") {

    stInformation Information;
    vector<string> vClientData;

    vClientData = SplitString(Line, seperator);

    Information.AccountNumber = vClientData[0];
    Information.PinCode = vClientData[1];
    Information.Name = vClientData[2];
    Information.Phone = vClientData[3];
    Information.AccountBalance = stod(vClientData[4]);

    return Information;
}

string ConvertRecordtoLine(stInformation &Information, string Seperator = "#//#") {

    string InfoModification = "";

    InfoModification += Information.AccountNumber + Seperator;
    InfoModification += Information.PinCode + Seperator;
    InfoModification += Information.Name + Seperator;
    InfoModification += Information.Phone + Seperator;
    InfoModification += to_string(Information.AccountBalance);


    return InfoModification;
}

vector<stInformation> LoadCleintsDataFromFile(string FileName) {

    vector<stInformation> vInformation;

    fstream MyFile;

    MyFile.open(FileName, ios::in);

    if(MyFile.is_open())
    {
        string Line;
        stInformation Info;

        while(getline(MyFile, Line))
        {
            Info = ConvertLinetoRecord(Line);

            vInformation.push_back(Info);
        }

        MyFile.close();
    }

    return vInformation;
}
void PrintClientsData(stInformation Information) {

    cout << "\nThe following are the client details: \n";
    cout << "\nAccountNumber : " <<  Information.AccountNumber;
    cout << "\nPinCode       : " <<  Information.PinCode;
    cout << "\nName          : " <<  Information.Name;
    cout << "\nPhone         : " <<  Information.Phone;
    cout << "\nAccountBalance: " <<  Information.AccountBalance;
}

bool FindClientByAccountNumber (string AccountNumber,  vector<stInformation> &vInformation, stInformation &Information) {

    
    for(stInformation Info : vInformation) // ?
    {
        if(Info.AccountNumber == AccountNumber)
        {   
            Information = Info;
            return true;
        }

    }

    return false;
}

bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector <stInformation>& vInformation) { // must we adjust struct or vector with &  

    for (stInformation& C : vInformation)
    {
        if (C.AccountNumber == AccountNumber)
        {
            C.MarkForDelete = true;
            return true;
        }
    }

    return false;
}

vector <stInformation> SaveCleintsDataToFile(string FileName, vector <stInformation> vInformation) {

    fstream MyFile;
    MyFile.open(FileName, ios::out);//overwrite
    
    string DataLine;

    if (MyFile.is_open())
    {
        for (stInformation Info : vInformation)
        {
            if (Info.MarkForDelete == false)
            {
                //we only write records that are not marked for delete.
                DataLine = ConvertRecordtoLine(Info);
                MyFile << DataLine << endl;
            }

        }

        MyFile.close();
    }
    
    return vInformation;
}

bool DeleteClientByAccountNumber(string AccountNumber, vector <stInformation>& vInformation) {

    stInformation Information;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, vInformation, Information))
    {
        PrintClientsData(Information);
        
        cout << "\n\nAre you sure you want delete this client? y/n ? ";
        cin >> Answer;
        
        if (Answer == 'y' || Answer == 'Y')
        {
            MarkClientForDeleteByAccountNumber(AccountNumber, vInformation);
            SaveCleintsDataToFile(FileName, vInformation);
            
            //Refresh Clients
            vInformation = LoadCleintsDataFromFile(FileName);
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

string ReadClientAccountNumber() {

    string AccountNumber = "";
    cout << "\nPlease enter AccountNumber? ";
    cin >> AccountNumber;

    return AccountNumber;
}

int main() {

    vector <stInformation> vInformation = LoadCleintsDataFromFile(FileName);

    string AccountNumber = ReadClientAccountNumber();
    DeleteClientByAccountNumber(AccountNumber, vInformation);

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Please enter AccountNumber? A180

The following are the client details: 

AccountNumber : A180
PinCode       : 1464
Name          : Mohammed Abu-hedhoud
Phone         : 09373438
AccountBalance: 6000

Are you sure you want delete this client? y/n ? y


Client Deleted Successfully.
```
#### <font color="#00b0f0">Explained:</font> 
- [ChatGPT - شرح كود C++](https://chatgpt.com/s/t_699727dd61848191adb963b9a005bf08)
---
### <font color="#ffff00">(51#):</font>
![[Pasted image 20260219133640.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

const string FileName = "ClientInfo.txt"; 

string ReadClientAccountNumber() {
     
    string AccountNumber = "";

    cout << "Enter the Account Number: ";
    cin >> AccountNumber;
    
    return AccountNumber;
}

struct stInformation {

    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance; 
    bool MarkForDelete = false;
};

vector<string> SplitString(string Line, string Delim) { 

    short Pos = 0;
    string Word;

    vector<string> ModName;
    

    while ((Pos = Line.find(Delim)) != std::string::npos)
    {
        Word = Line.substr(0, Pos);

        if(Word != "")
        {
            ModName.push_back(Word);
        }

        Line.erase(0, Pos + Delim.length()); 
    }

    if (Line != "")
    {
        ModName.push_back(Line);
    }
    
    return ModName;
}

stInformation ConvertLinetoRecord(string Line, string seperator = "#//#") {

    stInformation Information;
    vector<string> vClientData;

    vClientData = SplitString(Line, seperator);

    Information.AccountNumber = vClientData[0];
    Information.PinCode = vClientData[1];
    Information.Name = vClientData[2];
    Information.Phone = vClientData[3];
    Information.AccountBalance = stod(vClientData[4]);

    return Information;
}

string ConvertRecordtoLine(stInformation &Information, string Seperator = "#//#") {

    string InfoModification = "";

    InfoModification += Information.AccountNumber + Seperator;
    InfoModification += Information.PinCode + Seperator;
    InfoModification += Information.Name + Seperator;
    InfoModification += Information.Phone + Seperator;
    InfoModification += to_string(Information.AccountBalance);


    return InfoModification;
}

vector<stInformation> LoadCleintsDataFromFile(string FileName) {

    vector<stInformation> vInformation;

    fstream MyFile;

    MyFile.open(FileName, ios::in);

    if(MyFile.is_open())
    {
        string Line;
        stInformation Info;

        while(getline(MyFile, Line))
        {
            Info = ConvertLinetoRecord(Line);
            vInformation.push_back(Info);
        }

        MyFile.close();
    }

    return vInformation;
}
void PrintClientsData(stInformation Information) {

    cout << "\nThe following are the client details: \n";
    cout << "\nAccountNumber : " <<  Information.AccountNumber;
    cout << "\nPinCode       : " <<  Information.PinCode;
    cout << "\nName          : " <<  Information.Name;
    cout << "\nPhone         : " <<  Information.Phone;
    cout << "\nAccountBalance: " <<  Information.AccountBalance;
}

bool FindClientByAccountNumber (string AccountNumber,  vector<stInformation> &vInformation, stInformation &Information) {

    
    for(stInformation Info : vInformation) 
    {
        if(Info.AccountNumber == AccountNumber)
        {   
            Information = Info;
            return true;
        }

    }

    return false;
}

bool MarkClientsByAccountNumber (string AccountNumber, vector<stInformation> &vInformation) {

    for(stInformation& Info : vInformation) 
    {
        if(Info.AccountNumber == AccountNumber)
        {   
            Info.MarkForDelete = true; 
            return true;
        }

    }

    return false;
}
stInformation ReadUpdateClientsData(string AccountNumber) {

    stInformation Information;

    Information.AccountNumber = AccountNumber;

    cout << "\nEnter PinCode: ";
    cin >> Information.PinCode;
    
    cout << "Enter Name: ";
    cin >> Information.Name;

    cout << "Enter Phone: ";
    cin >> Information.Phone;

    cout << "Enter AccountBalance: ";
    cin >> Information.AccountBalance;

    return Information;
}

vector <stInformation> SaveClientsDataToFile(string AccountNumber, vector<stInformation> vInformation) {

    fstream MyFile;
    MyFile.open(FileName, ios::out);//overwrite
    
    string DataLine;

    if (MyFile.is_open())
    {
        for (stInformation Info : vInformation)
        {
            if (Info.MarkForDelete == false)
            {
                //we only write records that are not marked for delete.
                DataLine = ConvertRecordtoLine(Info);
                MyFile << DataLine << endl;
            }

        }

        MyFile.close();
    }
    
    return vInformation;

}

bool UpdateClientByAccountNumber(string AccountNumber, vector<stInformation> vInformation) {

    char Choise = 'n';

    stInformation Information;

    if(FindClientByAccountNumber(AccountNumber, vInformation, Information))
    {

        PrintClientsData(Information);

        cout << "\n\nDo you want to Update this client ? y/n ? ";
        cin >> Choise;

        if(Choise == 'y' || Choise == 'Y')
        {
            for (stInformation &Info : vInformation)
            {
                if(Info.AccountNumber == AccountNumber)
                {
                    Info = ReadUpdateClientsData(AccountNumber);
                    break;
                }

            }
            
            SaveClientsDataToFile(AccountNumber, vInformation);

            cout << "\n\nUpdate Succssefelly.\n";

            vInformation = LoadCleintsDataFromFile(FileName);
            return true;    
        }
        
    } 
    
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
        return false;
    }

}

int main() {

    vector <stInformation> vInformation = LoadCleintsDataFromFile(FileName);

    string AccountNumber = ReadClientAccountNumber();
    UpdateClientByAccountNumber(AccountNumber, vInformation);

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter the Account Number: A150

The following are the client details: 

AccountNumber : A150
PinCode       : 8623
Name          : Mohammed Abu-hedhoud
Phone         : 09345638
AccountBalance: 5000

Do you want to Update this client ? y/n ? y

Enter PinCode: A99
Enter Name: Hani
Enter Phone: 0474642  
Enter AccountBalance: 699000


Update Succssefelly.
```
---
