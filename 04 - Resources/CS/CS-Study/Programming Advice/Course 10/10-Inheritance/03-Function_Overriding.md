---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Function Overriding</font>
---
![[Screenshot_20260420-140940_Moon+ Reader Pro.jpg]]
![[Screenshot_20260420-140943_Moon+ Reader Pro.jpg]]

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

    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, bool Salary)
    :clsPersone(ID, FirstName, LastName, Email, Phone) {
        
        _Title = Title;
        _Salary = Salary;
        _Department = Department;
    }    

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

    void Print() {

        cout << "\nInfo:";
        cout << "\n________________________";
        cout << "\nID        : " << ID();
        cout << "\nFirstName : " << FirstName();
        cout << "\nLastName  : " << LastName();
        cout << "\nFullName  : " << FullName();
        cout << "\nEmail     : " << Email();
        cout << "\nPhone     : " << Phone();

        cout << "\nTitle     : " << Title();
        cout << "\nSalary    : " << Salary();
        cout << "\nDepartment: " << Department();
        cout << "\n________________________" << endl;
    }

};

int main() {
 
    clsEmployee Employee1(10, "Zakaria", "Medkouri", "my@gmail.com", "06213547", "CEO", "ProgrammingAdvices", 5000);

    Employee1.Print();
    
    return 0;
}
```
Output:
```
Info:
________________________
ID        : 10
FirstName : Zakaria
LastName  : Medkouri
FullName  : Zakaria Medkouri
Email     : my@gmail.com
Phone     : 06213547
Title     : CEO
Salary    : 1
Department: ProgrammingAdvices
________________________
```
---
### <font color="#245bdb">Quiz:</font>

- Function Overriding : The function in derived class overrides the function in base class?
- True

- If you override a function in base class will you be able to access this function from the object of derived class?
- False

- If you override a function in base class will you be able to access this function inside derived class?
- True

- If you override a function in base class will you be able to access this function inside derived class?
- BaseClassName::FunctionName()