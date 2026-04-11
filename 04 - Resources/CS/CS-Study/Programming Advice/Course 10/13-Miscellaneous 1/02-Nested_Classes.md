---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Nested Classes</font>
---

### <font color="#c9c441">Input:</font>
```cpp
#include<iostream>
using namespace std;

class clsPersone {

    class stAdresse
    {
    public:
        string AddressLine1;
        string AddressLine2;
        string City;
        string Country;
    
        void Print() {
            cout << "\nAddress:\n";
            cout << AddressLine1 << endl;
            cout << AddressLine2 << endl;
            cout << City << endl;
            cout << Country << endl;
        }
        
    };

public:
    string FullName;
    stAdresse Address;
    
    clsPersone()
    {
        FullName = "Mohammed Abu-Hadhoud";
        Address.AddressLine1 = "Building 10";
        Address.AddressLine2 = "Queen Rania Street";
        Address.City = "Amman";
        Address.Country = "Jordan";
    };
    
};

int main() {

    clsPersone Persone;
    Persone.Address.Print();

    return 0;
}
```
Output:
```
Address:
Building 10
Queen Rania Street
Amman
Jordan
```
--- 
### <font color="#245bdb">Quiz:</font>

- Nested or Inner Classes : A class can also contain another class definition inside itself, which is called “Inner Class” in C++?
- True

- Nested or Inner Classes : A class can also contain another class definition inside itself, which is called “Inner Class” in C++?
- True

- An Inner class is a member and as such has the same access rights as any other member of the enclosure class?
- True

- The members of an enclosing class have no special access to members of a nested class; the usual access rules shall be obeyed?
- True

---
### Requirement: Make a constractor into inner class, And Read it into the clsPersone Container: [[03-Nested_Classes_Homework_Solution]]