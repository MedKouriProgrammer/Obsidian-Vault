---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Interfaces and Abstract Classes</font>
---
![[Screenshot_20260420-141045_Moon+ Reader Pro.jpg]]
![[Screenshot_20260420-141048_Moon+ Reader Pro.jpg]]
![[Screenshot_20260420-141051_Moon+ Reader Pro.jpg]]

---
### <font color="#c9c441">Input:</font>
```cpp
#include <iostream>
using namespace std;


//Abstract Class / Interface / Contract.
class clsMobile
{
    virtual void Dial(string PhoneNumber) = 0;
    virtual void SendSMS(string PhoneNumber,string Text) = 0;
    virtual void TakePicture() = 0;

};

class clsiPhone : public clsMobile
{

  //This class signed a contract with clsMobile abstract class   therefore it should implement everything in the abstract class

public:

    void Dial(string PhoneNumber)
    {

    };
  
    void SendSMS(string PhoneNumber, string Text)
    {

    };

    void TakePicture()
    {


    };

    void MyOwnMethod()
    {

    }
  
};


class clsSamsungNote10 : public clsMobile
{
   //This class signed a contract with clsMobile abstract class   therefore it should implement everything in the abstract class

public:
    void Dial(string PhoneNumber)
    {

    };

    void SendSMS(string PhoneNumber, string Text)
    {

    };

    void TakePicture()
    {


    };

};


int main()

{
    clsiPhone iPhone1;
    clsSamsungNote10 Note10;

    system("pause>0");
    return 0;

}
```
--- 
### <font color="#245bdb">Quiz:</font>

- A pure virtual function doesn't have the function body and it must end with = 0?
- True

- If you have one pure virtual function in a class then it will be converted to abstract class?
- True

- Abstract Class is the same concept of Interface Class and they are both contracts?
- True

- Abstract Class/Interface Class is a class with pure virtual functions?
- True

- You can have an object of abstract class?
- No, You can only inherit it

- An abstract class in C++ has at least one pure virtual function by definition. In other words, a function that has no definition?
- True

- The abstract class's descendants (derived classes) must define the pure virtual function; otherwise, it is not allowed and you will get error?
- True

- Derived Classes from abstract class can have extra methods other than the methods in the abstract class?
- Yes

- The C++ interfaces are implemented using abstract classes and these abstract classes should not be confused with data abstraction which is a concept of keeping implementation details separate from associated data?
- True

- Abstract Class is the Same as Abstraction in OOP?
- No, they are two different things, these abstract classes should not be confused with data abstraction which is a concept of keeping implementation details separate from associated data.
