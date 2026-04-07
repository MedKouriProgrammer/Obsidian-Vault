---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Person Exercise Solution</font>
---
### <font color="#c9c441">My Input:</font>
```cpp
#include <iostream>
using namespace std;


class clsPersone {

    private:
    int  _ID = 0;
    string _FirstName;
    string _LastName;
    string _FullName;
    string _Email;
    string _Phone;

    public:
    clsPersone(int ID, string FirstName, string LastName, string Email, string Phone) {

        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _FullName = FirstName + " " + LastName;
        _Email = Email;
        _Phone = Phone;
    }

    int ID() {
        return _ID;
    }

    string SetFirstName(string FirstName) {
        return _FirstName = FirstName;
    }
    string FirstName() {
        return _FirstName;
    }

    string SetLastName(string LastName) {
        return _LastName = LastName;
    }
    string LastName() {
        return _LastName;
    }

    string FullName() {
        return _FirstName + " " + _LastName;
    }

    string SetEmail(string Email) {
        return _Email + Email;
    }

    string Email() {
        return _Email;
    }

    string SetPhone(string Phone) {
        return _Phone = Phone;
    } 
    string Phone() {
        return _Phone;
    }
    
    void Print() {

        cout << "\nInfo:";
        cout << "\n________________________";
        cout << "\nID       : " << _ID;
        cout << "\nFirstName: " << _FirstName;
        cout << "\nLastName : " << _LastName;
        cout << "\nFullName : " << FullName();
        cout << "\nEmail    : " << _Email;
        cout << "\nPhone    : " << _Phone;
        cout << "\n________________________" << endl;
    }

    void SendEmail(string Subject, string Body) {

        cout << "\nThe following email send successfully to email: " << _Email;
        cout << "\nSubject: " << Subject;
        cout << "\nBody   : " << Body << endl;
    }
    
    void SendSMS(string Subject) {

        cout << "\nThe following message send successfully to Phone: " << _Phone;
        cout << "\nSubject: " << Subject << endl;
    }

};


int main() {
    
    clsPersone Persone1(10, "Zakaria", "Medkouri", "my@gmail.com", "06213547"); 
    Persone1.Print();

    Persone1.SendEmail("Hi", "How are you");
    Persone1.SendSMS("How are you");
    
    return 0;
}
```
Output:
```
Info:________________________
ID       : 10
FirstName: Zakaria
LastName : Medkouri
FullName : Zakaria Medkouri
Email    : my@gmail.com
Phone    : 06213547
________________________

The following email send successfully to email: my@gmail.com
Subject: Hi
Body   : How are you

The following message send successfully to Phone: 06213547
Subject: How are you
```
