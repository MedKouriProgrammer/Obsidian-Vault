---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Up Casting vs Down Casting</font>
---

### <font color="#c9c441">Input:</font>
```cpp
#include <iostream>

using namespace std;

class clsPerson
{

public:

    string FullName="Mohammed Abu-Hadhoud";
 
};

class clsEmployee : public clsPerson
{

public:
    string Title = "CEO";

};

int main()

{

    clsEmployee Employee1;
  
    cout << Employee1.FullName << endl;

    ////upcasting
    //this will convert employee to person.
    clsPerson * Person1 = &Employee1;
    cout << Person1->FullName << endl;
   

    //clsPerson Person2;
    //cout << Person2.FullName << endl;

    ////downcasting : you cannot convert person to employee
    //clsEmployee* Employee2 = &Person2;



    system("pause>0");
    return 0;
}
```
--- 
### <font color="#245bdb">Quiz:</font>

- Up Casting is converting derived object to it's base object?
- True

- Down Casting is Converting Base object to Derived object?
- True

 - A pointer of type parent can point to an object of child class?
 - True, because all the members in which the pointer can access are exist in memory when the object of child class.

- A pointer of child class cannot point to an object of parent class?
- True, because the child class members the pointer can access do not exist in memory when the object is of parent class.

