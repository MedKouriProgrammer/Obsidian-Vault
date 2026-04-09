---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Inheritance Visibility Modes</font>
---

### <font color="#c9c441">Input:</font>
```cpp
#include <iostream>
using namespace std;

class clsA 
{

private: 
    int V1;
    int Fun1()
    {
        return 1;
    }

protected:
    int V2;
    int Fun2()
    {
        return 2;
    }

public:
    int V3;
    int Fun3()
    {
        return 3;
    }

};

//try to change visibility mode public/private/protected 
//and see in the main what will happen iside objects.
class clsB : private clsA
{

public:
    
    int Fun4()
    {

        return 4;
    }

};

class clsC : public clsB
{

public:

    int Fun5()
    {

        return 5;
    }
};


int main()
{   
  

    clsB B1;
    //Try B1 after you change visibility mode in clsB.   and see what you can see.
    
    
    clsC C1;
    //Try C1 after you change visibility mode in clsB.   and see what you can see.
 
}
```
---
### <font color="#245bdb">Quiz:</font>

- Visibility Mode "Private" will make everything private in the derived class, so it can make use of it and no one will make use of it neither derived classes nor objects?
- True

- Visibility Mode "Protected" will make everything protected in the derived class, so it can make use of it and all other derived classes will make use of it, but no objects will make use of it?
- True

- Visibility Mode "Protected" will make everything protected in the derived class, so it can make use of it and all other derived classes will make use of it, but no objects will make use of it?
- True

- Private Members in the Base Class are not accessible from outside the class nor the derived classes?
- True