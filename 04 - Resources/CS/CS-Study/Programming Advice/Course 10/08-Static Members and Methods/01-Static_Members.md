---
creation_date: 2026-04-07
tags:
  - Resources/Articles
Author:
---
> [!summary]-
> 

# <font color="#646a73">Static Members</font>
---
![[Screenshot_20260420-140838_Moon+ Reader Pro.jpg]]
![[Screenshot_20260420-140841_Moon+ Reader Pro.jpg]]

---
### <font color="#c9c441">Input:</font>
```cpp
#include <iostream>
#include <string>
using namespace std;
class clsA
{
    public:
    int var;
    static int counter;

    clsA() {

        counter++;
    }
    void Print() {

        cout << "\nvar = " << var <<endl;
        cout << "counter = " << counter << endl;
    }
};

int clsA::counter = 0; //static variable initialisation outside

int main()
{
    clsA A1, A2,A3;
    A1.var = 10;
    A2.var = 20;
    A3.var = 30;
    A1.Print();
    A2.Print();
    A3.Print();

    A1.counter = 500;
    cout << "\nafter chaning the static member counter in one object:\n";
    A1.Print();
    A2.Print();
    A3.Print();
}
```
Output:
```
var = 10
counter = 3

var = 20
counter = 3

var = 30
counter = 3

after chaning the static member counter in one object:

var = 10
counter = 500

var = 20
counter = 500

var = 30
counter = 500
```
---

### <font color="#245bdb">Quiz:</font>

- Static Member is a variable that is shared for all objects, any object modifies it it get modified for all other objects?
- True

- Each Object has it's own static members?
- False

- Static members are on the class level not for each object?
- True

- Static Members are accessible from all objects?
- True