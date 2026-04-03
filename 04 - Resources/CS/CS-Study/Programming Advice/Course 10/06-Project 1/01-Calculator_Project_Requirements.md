---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Calculator Project Requirements</font>
---
![[Pasted image 20260402202751.png]]
![[Pasted image 20260402210951.png]]
### My Input:
```cpp
#include <iostream>
using namespace std;


class clsCalculator {

    private:
    int _Add = 0;
    int _Subtruct = 0;
    int _Divinding = 0;
    int _Multiplying = 0;
    int _Result = 0;

    public:

    void Clear() {
        _Add = 0;
        _Divinding = 0;
        _Subtruct = 0;
        _Multiplying = 0;
        _Result = 0;
    }
    void Add(int Add) {
        _Add += Add;    
    }
    
    void Subtruct(int Subtruct) {
        _Subtruct += Subtruct;    
    }

    void Divinding(int Divinding) {
        if(Divinding == 0)
            Divinding = 1;

        _Divinding += Divinding;    
    }

    void Multiplying(int Multiplying) {
        _Multiplying += Multiplying;    
    }

    void PrintResult() {
        if(_Add)
        {
            _Result += _Add;
            cout << "\nResult After Adding " << _Add << " is: " << _Result;
            _Add = 0;
        }
        if(_Subtruct)
        {
            _Result -= _Subtruct;
            cout << "\nResult After Subtructing " << _Subtruct << " is: " << _Result;
            _Subtruct = 0;
        }
        if(_Divinding)
        {
            _Result /= _Divinding;
            cout << "\nResult After Divinding " << _Divinding << " is: " << _Result;
            _Divinding = 0;
        }
        if(_Multiplying)
        {
            _Result *= _Multiplying;
            cout << "\nResult After Multiplying " << _Multiplying << " is: " << _Result;
            _Multiplying = 0;
        }
    } 
    
};

int main() {

    clsCalculator Person;

    Person.Clear();

    Person.Add(10);
    Person.PrintResult();
    
    Person.Add(100);
    Person.PrintResult();

    Person.Subtruct(20);
    Person.PrintResult();

    Person.Divinding(0);
    Person.PrintResult();

    Person.Divinding(2);
    Person.PrintResult();

    Person.Multiplying(3);
    Person.PrintResult();


    return 0;
}
```
Output:
```
Result After Adding 10 is: 10
Result After Adding 100 is: 110
Result After Subtructing 20 is: 90
Result After Divinding 1 is: 90
Result After Divinding 2 is: 45
Result After Multiplying 3 is: 135
```
---

