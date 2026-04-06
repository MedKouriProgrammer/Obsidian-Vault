---
creation_date: 2026-04-06
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Copy Constructors</font>
---

### <font color="#c9c441">Input:</font>
```cpp
#include <iostream>
using namespace std;


class clsAddress
{
    private:
    string _AddressLine1;
    string _AddressLine2;
    string _POBox       ;
    string _ZipCode     ;
    
    
    public :

    clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZipCode) {

        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _POBox = POBox;
        _ZipCode = ZipCode;
    }
    clsAddress(clsAddress &Old_Cons) {

        _AddressLine1 = Old_Cons.AddressLine1();
        _AddressLine2 = Old_Cons.AddressLine2();
        _POBox = Old_Cons.POBox();
        _ZipCode = Old_Cons.ZipCode();
    }

    void SetAddressLine1(string AddressLine1)
    {
        _AddressLine1 = AddressLine1;
    }
    string AddressLine1()
    {
        return _AddressLine1;
    }
    void SetAddressLine2(string AddressLine2)
    {
        _AddressLine2 = AddressLine2;
    }
    string AddressLine2()
    {
        return _AddressLine2;
    }

    void SetPOBox(string POBox)
    {
        _POBox = POBox;
    }
    string POBox()
    {
        return _POBox;
    }
    void SetZipCode(string ZipCode)
    {
        _ZipCode = ZipCode;
    }
    string ZipCode()
    {
        return _ZipCode;
    }
    void Print()
    {
        cout << "\nAddress Details:\n";
        cout << "------------------------";
        cout << "\nAddressLine1: " << _AddressLine1 <<endl;
        cout << "AddressLine2: " << _AddressLine2 << endl;
        cout << "POBox : " << _POBox << endl;
        cout << "ZipCode : " << _ZipCode << endl;
    }

};

int main() {

    clsAddress Adreess1("Queen Alia Street","B 303","11192","5555");
    Adreess1.Print();

    clsAddress Adreess2 = Adreess1;
    Adreess2.Print();

    return 0;
}
```
### <font color="#0070c0">Quiz:</font> 
- The copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object?
- True.

- The process of initializing members of an object through a copy constructor is known as copy initialization?
- True.

- It is also called member-wise initialization because the copy constructor initializes one object with the existing object, both belonging to the same class on a member-by-member copy basis?
- True.

- The copy constructor can be defined explicitly by the programmer. If the programmer does not define the copy constructor, the compiler does it for us?
- True.

- You should always implement a copy constructor in your code?
- No, because the compiler will do it for you.

- What are the types of constructors: (1)Default Constructor , (2)Parameterized Constructor , (3)Copy Constructor?
- (1) , (2) , (3).