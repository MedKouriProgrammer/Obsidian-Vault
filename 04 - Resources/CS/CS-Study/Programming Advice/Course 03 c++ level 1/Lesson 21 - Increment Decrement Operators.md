---
date: 2025-03-01T16:07
tags:
  - Resources/Articles
---
Resource: [Lesson #21 - Increment Decrement Operators: ++, -- - YouTube](https://www.youtube.com/watch?v=Hh_nyCKRY3k&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=27)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[(++ / --) operators ]]
___
# Summary 

---
# Highlights & Notes

- # What and When I can use # Increment Decrement Operators: ++, --: ++, --.
- Increment Decrement Operators are used to increase or decrease the value of a variable by 1 for example increment (++) increase the variable by 1 and his shame like this : x++ or ++x both have same concept applies.
- and to decrement ( -- ) decrease the variable by 1 and his shame is --x or x-- and both have same concept applies.
---

# Let’s see this in reality.

## input
```cpp
#include <<iostream>>
using namespacestd;

int main()
{
int a = 10 , b = 20;
a++;// i can also write ++a both have the same concept applies. 
--b// or b-- both have same concept.

cout << "10 + 1= " << a << endl;
cout << "20 - 1= " << b << endl;

return 0;
}
```

## output 
```cpp
10 + 1= 11
20 - 1= 19 
```