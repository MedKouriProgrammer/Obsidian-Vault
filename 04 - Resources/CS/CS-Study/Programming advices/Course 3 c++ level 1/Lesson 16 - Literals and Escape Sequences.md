---
date: 2025-02-24T19:32
tags:
  - Resources/Articles
---
Resource: [Lesson #16 - Literals and Escape Sequences - YouTube](https://www.youtube.com/watch?v=HNyFT9-glnk&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=19)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[literals & escape sequences]]
___
# Summary 

---
# Highlights & Notes

## What means literals & escape sequences and what’s their types.

- literals are data used for representing fixed value, they can be used directly in the code.
---
# What are the types of the literals.
### Integer literals like :
- decimals: 0, -2, 59 etc.
- octal : 056, 034, 022 etc.
- hexadecimal : 0*7f, 0*2a etc. 
### floating literals : 5,78 _ 7,22 _ 8,2 etc.
### character literals : h _ d _ F _ # etc.
### escape sequences literals, it will be explained next.
---
# What's escape sequences and what they're types.

	- escape sequences it's Abbreviations can help me to be fastest in coding.
---
# What's their types.
### We have : \\\ & \t & \” & \‘ & \a.

---
# input
```cpp
#include <<iostream>>
using namespacestd;

int main()
{
cout << "m1\m2"; // will not print in output \ becouse is just one.
cout << "m1\\m2";// will print in out \ because i write two of \\. 

cout << "m1    m2" <<;// will takes 4 lines but this coding it's not effective .
cout << "m1\tm2";// will print 4 lines and this coding is faster and effective.

cout << "my name is "medkouri" ";// will not print double quotation on medkouri becouse i didn't wrote \""\.
cout << "my name is \"medkouri\" ";// will print double quotation on my lastname becouse i wrote \""\.

cout << "\a";// it will make a sound.

}
```

# output
```cpp
m1m2
m1\m2

m1    m2
m1    m2

my name is medkouri
my name is "medkouri"
// \a it will make a sound.
```