---
date: 2025-03-02T05:50
tags:
  - Resources/Articles
---
Resource: [Lesson #22 - Postfix vs Prefix : ++A vs A++ , --A vs A-- - YouTube](https://www.youtube.com/watch?v=yW2wdi0fMFE&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=28)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[ Postfix vs Prefix : ++A vs A++ , --A vs A--]]
___
# Summary 

---
# Highlights & Notes

- # What’s the different between postfix & prefix : ++A vs A++, --A vs A--.
- for example when I have ( A= 10 )
- if I print B = A++, B will take number 10, but A will take number 11.
- if I print B = ++A, B will take number 11, and A will take number 11.
- if I print B = A--, B will take number 10, and the contrary A will take number 9.
- if I print B = --A, B will take number 9, also A will take number 9.
---
# Let’s see this on real life.

## Input
```cpp
#include <<iostream>>
using namespace std;

int main()
{
int a = 10;// i can aloso write a = 10, b = 10 has the same concepts.
int b = a++;// b will take old value of a and a will increse by 1.

cout << b << endl;
cout << a << endl;

cout << "\n";

b = ++a;// a will increse by 1, and b will take the new value like a.
cout << b << endl;
cout << a << endl;

return 0;
}
```

## output
```cpp
10 
11

12
12
```