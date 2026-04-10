---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Friend Function</font>
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
   
    friend int MySum(clsA A1);    //friend function 

};

//this function is normal function and not a member of any class
int MySum(clsA A1)
{
    return A1._Var1 + A1.Var2 + A1._Var3 ;
}

//int Fun2(clsA A1)
//{
//    return A1._Var1 + A1.Var2 + A1._Var3;
//}

int main()
{
    clsA A1;
   
    cout << MySum(A1);
    
    system("pause>0");

    return 0;
}
```
---
### <font color="#245bdb">Quiz:</font>

- A friend function in C++ is defined as a function that can access private, protected and public members of a class?
- True

- The friend function is declared using the friend keyword inside the body of the class?
- True

- By using the keyword, the ‘friend’ compiler understands that the given function is a friend function?
- True

- We declare friend function inside the body of a class, whose private and protective data needs to be accessed, starting with the keyword friend to access the data. We use them when we need to operate between two different classes at the same time?
- True

- Friend functions of the class are granted permission to access private and protected members of the class in C++. They are defined globally outside the class scope. Friend functions are not member functions of the class?
- True

- A friend function in C++ is a function that is declared outside a class but is capable of accessing the private and protected members of the class. There could be situations in programming wherein we want two classes to share their members. These members may be data members, class functions or function templates. In such cases, we make the desired function, a friend to both these classes which will allow accessing private and protected data of members of the class?
- True

- Generally, non-member functions cannot access the private members of a particular class. Once declared as a friend function, the function is able to access the private and the protected members of these classes?
- True

