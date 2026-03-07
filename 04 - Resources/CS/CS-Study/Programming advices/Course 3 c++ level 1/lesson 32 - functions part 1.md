---
date: 2025-03-05T05:47
tags:
  - Resources/Articles
---
Resource: [Lesson #32 - Functions Part 1 - YouTube](https://www.youtube.com/watch?v=LdANP4iuQxQ&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=38)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[functions & procedures ]]
___
# Summary 

---
# Highlights & Notes

- # Firstly, what’s meant (functions) & what is their use. 
- A function is a type of [[Derived data types]] and is simply a part of code that performs a specific task, You write it ones, And then you can use it multiple times whiteout rewriting the same code.
-  <font color="#00b050">For example</font> : if you have an operating to add two numbers, You can create a function called add, give it two numbers, And then it will return the result.
---
# New, let’s see what means (procedures.)
- We’re seen the functions, and we say it returns a value, new procedures is a contrary, it wouldn't return a value, it only to give it a code ( input ) and recalled in anytime and more than ones, and also we can use procedures to read structures.
---
# Let’s see  the procedures on c++.
## input
```cpp
#include <iostream>
#include<string>
using namespace std;

void procedures()
{
	cout << "i see only my goals";
}
void much()
{
    cout << "what's next";
}
int main()
{
	procedures();
	procedures();// i can recall it for anytime, and more than ones. 
    much();
	return 0;
}
```
## output
```
i see only my goals
i see only my goals
what's next
```