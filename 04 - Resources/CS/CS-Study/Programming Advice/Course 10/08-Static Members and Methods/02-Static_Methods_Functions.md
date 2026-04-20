---
creation_date: 2026-04-07
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Static Methods Functions</font>
---
![[Screenshot_20260420-140844_Moon+ Reader Pro.jpg]]
![[Screenshot_20260420-140847_Moon+ Reader Pro.jpg]]

---
### <font color="#c9c441">Input:</font>
```cpp
#include <iostream>
#include <string>
using namespace std;
class clsA
{
    public:
    
    static short Func1() {
        return 10;
    }
    
    short Func2() {
        return 20;
    }

};


int main() {
    
    clsA A1, A2;

    cout << clsA::Func1() << "\n\n";

    cout << A1.Func1() << endl;
    cout << A2.Func2();


    return 0;
}
```
Output:
```
10

10
20
```
---

### <font color="#245bdb">Quiz:</font>

- Static Functions can be called at class level without a need to have an object?
- True

- Functions can not be called through object?
- False

- Static Functions can be called through any object as well as through the class itself?
- True

- If you have a static function, can you access a non-static members of the class from inside that function?
- No, Static methods can only access static members , because static methods can be called at class level without objects, and non static members you cannot access them without having object first.