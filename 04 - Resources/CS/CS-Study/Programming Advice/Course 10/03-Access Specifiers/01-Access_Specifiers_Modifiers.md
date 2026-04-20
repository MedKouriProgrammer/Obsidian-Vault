---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Access Specifiers Modifiers</font>
---
![[Screenshot_20260420-140700_Moon+ Reader Pro.jpg]]
![[Screenshot_20260420-140703_Moon+ Reader Pro.jpg]]
![[Screenshot_20260420-140706_Moon+ Reader Pro.jpg]]

---
### <font color="#ffc000">Input:</font>
```cpp
#include <iostream>
using namespace std;


class clsPerson {

    short Variable1 = 1;
    int Function1() {
        return 10;
    }
    
    protected:
    short Variable2 = 2;
    int Function2() {
        return 20;
    }

    public:
    string FirstName;
    string LastName;

    string PrintFullName() {

        return FirstName + " " + LastName; 
    }
    int PrintSumOfNUmbers() {
        return Function1() * Variable1 * Variable2;
    }

};

int main() {

    clsPerson Person;

    Person.FirstName = "Zakaria";
    Person.LastName = "Medkouri";

    cout << Person.PrintFullName() << endl;
    cout << Person.PrintSumOfNUmbers();

}
```
Output:
```
Zakaria Medkouri
20
```