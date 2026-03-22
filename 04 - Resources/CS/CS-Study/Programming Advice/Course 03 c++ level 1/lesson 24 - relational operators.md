---
date: 2025-03-02T11:45
tags:
  - Resources/Articles
---
Resource: [Lesson #24 - Relational Operators - YouTube](https://www.youtube.com/watch?v=QhtwPGX8jRM&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=30)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[relational operators]]
___
# Summary 
Briefly [[relational operators]] used to comparison between two or more values.

---
# Highlights & Notes

- # What’s [[relational operators]] and how I can use it.
- [[relational operators]] means comparison of values and this is his [[syntax]] : 
```
int a = 10 , b = 20;

operators        description                                     exanple
==        for checks if the values are iqual.                     (a == b)
!=        for checks if the values are not equal.                 (a != b)
<         for checks if the values are smaller than.              (a < b)
>         for checks if the values are larger than                (a > b)
<=        for checks if the values are smaller than or equals.    (a <= b)
>=        for checks if the values are larger than or equals.     (a >= b)


```
---
# let's see this in action

## input 
```cpp
#include <<iostram>>
using namespace std;

int main()
{
int a = 10, b = 20;
cout << (a == b) << endl;
cout << (a != b) << endl;
cout << (a < b) << endl;
cout << (a > b) << endl;
cout << (a <= b) << endl;
cout << (a >= b) << endl;

return 0;
}
```

## output
```cpp
0
1
1
0
1
0
```