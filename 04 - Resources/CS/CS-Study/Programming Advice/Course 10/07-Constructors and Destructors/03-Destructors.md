---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Destructors</font>
---

### <font color="#c9c441">Input:</font>
```cpp
#include <iostream>
using namespace std;


class clsPerson
{
    public:
    string FullName;

    clsPerson() {
        FullName = "Medkouri";
        cout << "Hi I'am Constractor.\n";
    }
    ~clsPerson() {
        cout << "Hi I'am Destractor.\n";
    }

};

void Func1() {
    clsPerson Person1;
}

void Func2() {
    clsPerson * Person2 = new clsPerson;
    
    delete Person2;
}

int main() {

    Func1();
    cout << endl;
    Func2();    

    return 0;
}
```
Output:
```
Hi I'am Constractor.
Hi I'am Destractor.

Hi I'am Constractor.
Hi I'am Destractor.
```
---
### <font color="#245bdb">Quiz:</font>

- Destructor is an instance member function which is invoked automatically whenever an object is going to be destroyed. Meaning, a destructor is the last function that is going to be called before an object is destroyed?
- True

- Destructor has the same name as their class name preceded by a tilde (~) symbol?
- True

- It is not possible to define more than one destructor?
- True

- The destructor is only one way to destroy the object create by constructor. Hence destructor can-not be overloaded?
- True

- Destructor neither requires any argument nor returns any value?
- True

- It is automatically called when object goes out of scope?
- True