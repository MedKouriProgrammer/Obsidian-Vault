---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Friend Classes</font>
---
![[Screenshot_20260420-141054_Moon+ Reader Pro.jpg]]
![[Screenshot_20260420-141057_Moon+ Reader Pro.jpg]]

---
### <font color="#c9c441">Input:</font>
```cpp
#include<iostream>
using namespace std;

class clsA
{
private:
    int _Var1;

protected:
    int _Var3;

public:
    int Var2;
    
    clsA()
    {
        _Var1 = 10;
        Var2 = 20;
        _Var3 = 30;

    }
    //this will grant access for everything to class B 
    friend class clsB;    //friend class 

};

class clsB
{
public:
    void display(clsA A1)
    {
        cout << endl << "The value of Var1=" << A1._Var1 ;
        cout << endl << "The value of Var2=" << A1.Var2  ;
        cout << endl << "The value of Var3=" << A1._Var3 ;
    }
};

int main()
{
    clsA A1;
    clsB B1;

    B1.display(A1);
    
    system("pause>0");

    return 0;
}
```
---
### <font color="#245bdb">Quiz:</font>

- We can use a friend Class in C++ using the "friend" keyword?
- True

- A friend class can access both private and protected members of the class in which it has been declared as friend?
- True

- Since ClassB is a friend class, we can access all members of ClassA from inside ClassB. However, we cannot access members of ClassB from inside ClassA. It is because friend relation in C++ is only granted, not taken?
- True

- If ClassB is declared as a friend Class inside ClassA , ClassB can access all private and protected members of ClassA, and also ClassA can Access all members of ClassB?
- False, only ClassB can access all members of ClassB but ClassA cannot.
