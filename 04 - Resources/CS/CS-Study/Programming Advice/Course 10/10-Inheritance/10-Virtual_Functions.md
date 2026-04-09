---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Virtual Functions</font>
---

### <font color="#c9c441">Input:</font>
```cpp
#include <iostream>

using namespace std;

class clsPerson
{

public:

  virtual  void Print()
    
  {
        cout << "Hi, i'm a person!\n ";
    
  }

};

class clsEmployee : public clsPerson
{
public:
    void Print()
    {
        cout << "Hi, I'm an Employee\n";
    }
};

class clsStudent : public clsPerson
{
public:
     void Print() 
    {
        cout << "Hi, I'm a student\n";
    }
};


int main()

{

    clsEmployee Employee1;
    clsStudent  Student1;

   Employee1.Print();
    Student1.Print();


   
    clsPerson * Person1 = &Employee1;
    clsPerson * Person2 = &Student1;

    Person1->Print();
    Person2->Print();


    system("pause>0");
    return 0;
}
```
Output:
```
Hi, I'm an Employee
Hi, I'm a student
Hi, I'm an Employee
Hi, I'm a student
```
---
### <font color="#245bdb">Quiz:</font>

- A virtual function is a member function in the base class that we expect to redefine in derived classes?
- True

- Basically, a virtual function is used in the base class in order to ensure that the function is overridden. This especially applies to cases where a pointer of base class points to an object of a derived class?
- True