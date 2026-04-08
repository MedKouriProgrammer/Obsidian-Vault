---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Third Principle Inheritance</font>
---
### <font color="#c9c441">Input:</font>
```cpp
#include <iostream>
using namespace std;


class clsPersone {

    private:
    int  _ID = 0;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

    public:

    clsPersone() {

    }

    clsPersone(int ID, string FirstName, string LastName, string Email, string Phone) {

        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
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
        cout << "\nID        : " << _ID;
        cout << "\nFirstName : " << _FirstName;
        cout << "\nLastName  : " << _LastName;
        cout << "\nFullName  : " << FullName();
        cout << "\nEmail     : " << _Email;
        cout << "\nPhone     : " << _Phone;
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

class clsEmployee : public clsPersone {

    private:
    string _Title;                     
    bool _Salary;
    string _Department;

    public:

    string SetTitle(string Title) {
        return _Title = Title;
    }
    string Title() {
        return _Title;
    }

    bool SetSalary(bool Salary) {
        return _Salary = Salary;
    }
    bool Salary() {
        return _Salary;
    }

    string SetDepartment(string Department) {
        return _Department = _Department;
    }
    string Department() {
        return _Department;
    }

};

int main() {
 
    clsEmployee Employee;

    Employee.SetFirstName("Mohemmed");
    Employee.SetLastName("Abu-Hedhoud");
    Employee.FullName();
    Employee.SetEmail("Email.@gmail.com");
    Employee.Print();

    Employee.SetSalary(5000);
    cout << "\nSalary is: " << Employee.Salary();

    //Calling the print will not print anything from derived class, only base class
    //therfore the print method will not serve me here, this is a problem will be solved in the next lecture.    
    
    return 0;
}
```
Output:
```
Info:
________________________
ID        : 0
FirstName : Mohemmed
LastName  : Abu-Hedhoud
FullName  : Mohemmed Abu-Hedhoud
Email     : 
Phone     : 
________________________

Salary is: 5000
```