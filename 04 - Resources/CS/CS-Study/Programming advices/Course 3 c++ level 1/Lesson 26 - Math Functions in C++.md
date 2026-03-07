---
date: 2025-03-02T15:04
tags:
  - Resources/Articles
---
nResource: [Lesson #26 - Math Functions in C++ - YouTube](https://www.youtube.com/watch?v=GCo-7JTTtpw&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=33)
Author: [[abu-hedhoud]]
Topics: [[c++]][[Math Functions]] 

---
# Highlights & Notes

- # First things what is functions and how does it works.
- A function in programming is a block of code that performs a specific task, and you can say it like a machine:
 - you give it input( optional )
 - it does something ( processes )
 - it gives you output ( optional )
 
 -  And also functions help you avoid repeating code, and make your program organized and easy to read. 
# Example
## input
```cpp
#include <iostream>
using namespace std;

void sayhello()
{
cout << "hello" << endl;
}
int main()
{
sayhello();// calling the function.

return 0;
}
```
---
# New let’s see [[math functions]] what is it, and how does it work.
```
- math functions is a library includes a lot of functions, among these functions, 6 is the most popular, and they’re a lot of others I will need it in future if my apps need it.

- Square = sqrt(64) : the square of this functions is ( 8 )  
- Rounding = round(2.4) : it's rounding the number, ( 2 )
- Power = pow(2,4) : the power of this function is ( 16 ) 
- ceiling = ceil(2.3) : it's rounding the number above, ( 3 ).
- flooring = floor(4.6) : it’s rounding the number down, ( 4 ).
- Absolute = abs(-10) : it always contrary the symbole to positive, if i have (-10) it will contrary to 10.
- note, i can also calculate it like this round(sqrt(55)).
```
---
# Let's see this in reality

## input
```cpp
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int a= 64;
cout << "number 1 = " << sqrt(a) << endl;// i can print like this. 
cout << "number 2 = " << sqrt(64) << endl;// or usually like this.
------------------------------------------------------------------------------
cout << "number 3 = " << round(2.5) << endl;// i should always type(.) not (,) to avoide error,the (.) is only for power.
cout << "number 4 = " << round(2.7) << endl;// note i can't take or let space into the brackets
------------------------------------------------------------------------------
int a = 2 , b = 4;
cout << "number 5 = " << pow(a,b) << endl;// here in contrary of all functions the power should type (,) not (.).
cout << "number 6 = " << pow(4,3) << endl;
------------------------------------------------------------------------------
cout << "number 7 = " << ceil(2.2) << endl;
cout << "number 8 = " << floor(2.9) << endl;

cout << "number 9 = " << ceil(-2.2) << endl;// i can also type (-)
cout << "number 10 = " << floor(-2.9) << endl;
------------------------------------------------------------------------------
cout << "number 11 = " << abs(-10) << endl;
cout << "number 12 = " << abs(10) <, endl;
------------------------------------------------------------------------------

return 0;
}
```

```cpp
number 1 = 8
number 2 = 8
number 3 = 3
number 4 = 3
number 5 = 16
number 6 = 64
number 7 = 2
number 8 = 3
number 9 = -2
number 10 = -3
number 11 = 10
number 12 = 10
```