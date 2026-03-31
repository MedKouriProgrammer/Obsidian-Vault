---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Properties Set and Get</font>
---

### <font color="#ffc000">Inpurt:</font>
```cpp
#include <iostream>
using namespace std;


class clsPerson {

    private:
    string _FirstName;
    string _LastName;


    public:

    string SetFirstName(string FirstName) {
        return _FirstName = FirstName;
    }
    string FirstName() {
        return _FirstName;
    }

    string SetLastName(string LastName) {
        return _LastName = LastName;
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

    Person.SetFirstName("Mohemmed");
    Person.SetLastName("Abu-Hedhoud");

    cout << Person.PrintFullName();
    
}
```
