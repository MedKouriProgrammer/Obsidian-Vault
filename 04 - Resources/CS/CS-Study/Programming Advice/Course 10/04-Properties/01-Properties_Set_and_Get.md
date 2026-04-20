---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Properties Set and Get</font>
---
![[Screenshot_20260420-140709_Moon+ Reader Pro.jpg]]
![[Screenshot_20260420-140712_Moon+ Reader Pro.jpg]]
![[Screenshot_20260420-140717_Moon+ Reader Pro.jpg]]

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

    void SetLastName(string LastName) {
        _LastName = LastName;
    }
    string LastName() {
        return _LastName;
    }

    string PrintFullName() {

        return _FirstName + " " + _LastName; 
    }
    

};

int main() {

    clsPerson Person;

    Person.SetFirstName("Mohemmed");
    Person.SetLastName("Abu-Hedhoud");
	
	cout << "FirstName: " << Person.FirstName() << endl;
	cout << "LastName: " << Person.LastName() << endl;
    cout << "\nFullName: " << Person.PrintFullName();
    
}
```
Output:
```
FirstName: Mohemmed
LastName: Abu-Hedhoud

FullName: Mohemmed Abu-Hedhoud
```
