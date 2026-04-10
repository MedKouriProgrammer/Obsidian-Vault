---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Static vs Dynamic Binding</font>
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
    //Early-Static Binding: at compilation time
    Employee1.Print();
    Student1.Print();

    clsPerson * Person1 = &Employee1;
    clsPerson * Person2 = &Student1;
    
    //Late-Dynamic Binding: at runtime
    Person1->Print();
    Person2->Print();


    system("pause>0");
    return 0;
}
```
---
### <font color="#245bdb">Quiz:</font>

- Static Binding: The binding which can be resolved at compile time by the compiler is known as static or early binding. The binding of all the static, private methods is done at compile-time?
- True

- Dynamic Binding: In Dynamic binding compiler doesn’t decide the method to be called. Overriding is a perfect example of dynamic binding. In overriding both parent and child classes have the same method?
- True

- Early Binding and Static Binding are the same?
- True

- Late Binding and Dynamic Binding are the same?
- True

- Early Binding / Static Binding are done at the compilation time?
- True

- Late Binding/Dynamic Binding are done at run time?
- True