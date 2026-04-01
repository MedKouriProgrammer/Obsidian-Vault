---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Properties Set and Get through equals</font>
---


### <font color="#ffc000">Input:</font>
```cpp
#include <iostream>
using namespace std;


class clsPerson {

    private:
    string _FirstName;
    string _LastName;


    public:

    void SetFirstName(string FirstName) {
        _FirstName = FirstName;
    }
    string FirstName() {
        return _FirstName;
    }

    
    __declspec(property(get = FirstName, put = SetFirstName)) string FirstName;
};

int main() {

    clsPerson Person;

    Person.SetFirstName("Mohemmed");
	cout << "FirstName: " << Person.FirstName() << endl;

    Person.FirstName = "Zakaria";
    cout << Person.FirstName;
    
}
```