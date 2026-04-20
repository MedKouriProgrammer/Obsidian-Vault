---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Classes and Objects</font>
---
![[Screenshot_20260420-140639_Moon+ Reader Pro.jpg]]
![[Screenshot_20260420-140643_Moon+ Reader Pro.jpg]]
![[Screenshot_20260420-140646_Moon+ Reader Pro.jpg]]

---
### <font color="#ffff00">Input: </font>
```cpp
#include <iostream>
using namespace std;


class clsPerson {

    //this private and will not be accessed from outside the class
    //for internal use only
    
    public:
    string FirstName;
    string LastName;

    string PrintFullName() {

        return FirstName + " " + LastName;
    }

};

int main() {

    clsPerson Person;

    Person.FirstName = "Zakaria";
    Person.LastName = "Medkouri";
    

    cout << Person.PrintFullName();
    string S1;

}
```