---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Read Only Property</font>
---
![[Screenshot_20260420-140720_Moon+ Reader Pro.jpg]]

---
### <font color="#ffc000">Input: </font>
```cpp
#include <iostream>
using namespace std;


class clsPerson {

    private:
    int _ID = 10;
    string _FirstName;
    string _LastName;


    public:

    int ID() {
        return _ID;
    }

    void SetFirstName(string FirstName) {
        _FirstName = FirstName;
    }
    string FirstName() {
        return _FirstName;
    }

    void SetLastName(string LastName) {
        _LastName = LastName;
    }
    string LastName(string LastName) {
        return _LastName;
    }

    string PrintFullName() {

        return _FirstName + " " + _LastName; 
    }
    

};

int main() {

    clsPerson Person;

    cout << Person.ID();
        
}
```
Output:
```
10
```