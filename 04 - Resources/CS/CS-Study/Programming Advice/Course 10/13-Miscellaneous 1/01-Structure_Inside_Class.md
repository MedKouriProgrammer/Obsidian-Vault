---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Structure Inside Class</font>
---
![[Screenshot_20260420-141120_Moon+ Reader Pro.jpg]]

---
### <font color="#c9c441">Input:</font>
```cpp
#include<iostream>
using namespace std;

class clsPersone {

    struct stAdresse
    {
        string AddressLine1;
        string AddressLine2;
        string City;
        string Country;
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

    void PrintAdress() {
        cout << "\nAddress:\n";
        cout << Address.AddressLine1 << endl;
        cout << Address.AddressLine2 << endl;
        cout << Address.City << endl;
        cout << Address.Country << endl;
    }
    
};

int main() {

    clsPersone Persone;
    Persone.PrintAdress();

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
