---
date: 2025-03-06T10:51
tags:
  - Resources/Articles
---
Resource: [Lesson #37 - Function Parameters - By-Val vs By-Ref - YouTube](https://www.youtube.com/watch?v=7Ne5sZiI5Jw&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=43)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[ Function Parameters - By-Val vs By-Ref]]
___
# Summary 
Pass by value : you give a copy.
Pass by reference : you give the original itself.

---
# Highlights & Notes

- # What’s the different between by-value & by-reference.
- by-value is a copy of the variable is sent to the function, that’s mean any changes made inside the function **do not affect** the original variable.
- But by-ref the actual address of the variable is sent to the function, means any changes made inside the function directly affect the original variable.
---
# Let’s see an example of by-value.
## Input
```cpp
#include<iostream>
using namespace std;

void myfunction(int x)
{
x = 2000;
cout << x << "\n";
}
int main()
{
int y;
y = 1000;
myfunction(y);
cout << y << endl;

return 0;
}
```
## output
```cpp
2000
1000
```
---
# An example of by-reference.
## Input
```cpp
#include<iostream>
using namespace std;

void myfunction(int &x)
{
x = 2000;// i shouldn't defined here int, if i defined it this variable will become for the lower 👇 function.
cout << x << "\n";
}
int main()
{
int x;
x = 1000;
myfunction(x);// and i should write this procedure first, because if i don't, this program will be like by value and will not be edit it.
cout << x << endl;

return 0;
}
```

## output
```cpp
2000
2000
```
