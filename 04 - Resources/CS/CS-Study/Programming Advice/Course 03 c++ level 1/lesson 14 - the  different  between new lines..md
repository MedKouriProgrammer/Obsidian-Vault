---
date: 2025-02-24T06:39
tags:
  - Resources/Articles
---
Resource: [Title Unavailable \| Site Unreachable](https://www.youtube.com/watch?v=_hLyxy_1Wb4&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=17)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[deffirent \n & endl]]
___
# Summary 
finally we can say the using of this new lines it's مختصر on my situation but if i have let's say 100 line of codes we should divide it and the 49 sentences we use \n becouse it’s fastest but the buffer will be full so we have to use endl to flashing the buffer. 

---
# Highlights & Notes

- ## what different between \n & endl and how it works and when i need them.
- the new line like \n or endl works by do something called buffer it likes the table, for example when i use \n it do buffer and this buffer is populated of sentences and then it print this sentences and then flashing the buffer . but on the contrary the buffer on endl populated of sentences then it print a sentence and flash it , a sentence and flash it ,and stay like this.

## input
---
```cpp
#include <<iostream>> 
using namespacestd;

int main()
{

cout << "hello world\n"; // the buffer in \n print all sentences and after that flashing the buffer. 

cout << "hello new life" << endl; // the buffer in endl print a sentence and flash it , print and flash it.


return 0;
}
```

## output
---
```cpp

hello world
hello new life

```