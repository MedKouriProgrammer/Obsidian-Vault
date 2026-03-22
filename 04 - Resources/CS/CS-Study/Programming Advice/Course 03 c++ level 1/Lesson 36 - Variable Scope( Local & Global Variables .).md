---
date: 2025-03-06T06:22
tags:
  - Resources/Articles
---
Resource: [Lesson #36 - Variable Scope/ Local vs Global Variables - YouTube](https://www.youtube.com/watch?v=bNpiEh4Zi38&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=42)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Variable Scope/ Local vs Global Variables ]]
___
# Summary 

---
# Highlights & Notes

- # What’s the different between local / global variable.
- Local variable is a variable that is declared inside the function or procedures or block, and we can’t use it out of the function, it is destroyed once the function or block ends.
- Global variable : a variable that is declared outside the function and can be accessed from any part of the program, it exists throughout the lifetime of the program.
---
# Some example:
## input 
```cpp
#include <iostream>
using namespace std;

int globalVar = 10;  // Global variable

void myFunction() {
    int localVar = 5;  // Local variable
    cout << localVar << endl;  // Output: 5
    cout << globalVar << endl; // Output: 10
}

int main() {
    myFunction();
    cout << globalVar << endl; // Output: 10
    // cout << localVar;  // Error! localVar is not accessible here
return 0;
}
```
---
# Another example:
## input
```cpp
#include<iostream>
using namespace std;

int a = 10;// global variable i can use it for anytime.

void procedures()
{
int a = 30;
cout <<"the local variable is " << a << endl;
}

int main()
{
int a = 60;
::a;// i can also calculated like( ::a++ ) or ( ::a = 5000; )
cout << "the local varible 2 is " << a << "\n";
procedures();
cout << "the global variable is " << ::a << endl;
return 0;
}
```
## output
```cpp
the local variable is 60
the local varible 2 is 30
the global variable is 10
```