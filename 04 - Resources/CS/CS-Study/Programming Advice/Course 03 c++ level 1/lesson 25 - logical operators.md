---
date: 2025-03-02T12:53
tags:
  - Resources/Articles
---
Resource: [Lesson #25 - Logical Operators - YouTube](https://www.youtube.com/watch?v=_yjaNl9Chdk&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=31)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[ logical operator ]]
___
# Summary 
as I say before logical operators are symbols used to combine two or more conditions, and their symbols are AND ( && ) - OR ( || ) - NOT ( ! ) .

---
# Highlights & Notes

- # What & when I can use logical operators.
- Firstly logical operators are symbols or words used in programming to combine two or more conditions and check if they are true or false.
- ## The most common logical operators are :
- AND ( && ) : returns true only if both conditions are true.
- OR ( || ) : returns true if one of conditions are true.
- NOT ( ! ) : it reverses the conditions, if the condition is true, it becomes false.
- --
- # let’s ses this in action
```cpp
#include <iostream>
using namespace std;

int main()
{
bool a = 1, b = 0;
cout << (a && b) << endl;
cout << (a || b) << endl;
cout << !a << endl;
cout << !b << endl;
cout << !(a && b) << endl;
cout << !(a || b) << endl;

return 0;
}
```

## output
```cpp
0
1
0
1
1
0
```
---
# let’s say we have : !(5 > 6 || 7 == 7) && !(1 || 0) 

## input 
```cpp
#include <iostream>
using namespace std;

int main()
{
cout << !(5 > 6 || 7 == 7) && !(1 || 0);
------------------------------------------------------------------------------
// we can also type :
bool resoult;
resoult = !(5 > 6 || 7 == 7) && !(1 || 0);
cout << resoult;

return 0;
}
```

## output
```cpp
0
0
```