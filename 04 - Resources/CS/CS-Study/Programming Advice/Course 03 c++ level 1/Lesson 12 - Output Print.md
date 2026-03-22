---
date: 2025-02-23T16:15
tags:
  - Resources/Articles
---
Resource: [Lesson #12 - Output (Print) - YouTube](https://www.youtube.com/watch?v=NZETIeuns-w&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=14)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[\n & endl]] [[double quotation]]
___
# Summary 
as I say before the \n and endl it make a new line and if I don't write it will be in the same line, and the to getline in the right i should write like this “m1 “ ‘‘m2‘‘.

---
# Highlights & Notes
## what is \n & endl and what is double quotation how to get line in the right
---
- it's mean to make a new line to divide between the sentences .

## input
---
```c++
#include <<iostream>>

int main()
{

std::cout << "hello world\n";
std::cout << "hello imad" << std::endl; 


return 0;
}
```

## output 
---
```cpp

hello world
hello imad

```

## double quotation.
---
- to get line in the right you should write like this “hello ““bro” and tab space into the double quotation, and finally the output will print (hello bro) instead of hellobro.
## input
---
```cpp
#include <<iostream>> 

int main()
{

std::cout << "m1""m2""m3" << std::endl;
std::cout << "m1 " << "m2 " << "m3 " << std::endl;

return 0;
}
```

## output
```cpp

m1m2m3
m1 m2 m3 

```