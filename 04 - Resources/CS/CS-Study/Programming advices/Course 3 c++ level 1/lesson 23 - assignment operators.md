---
date: 2025-03-02T06:30
tags:
  - Resources/Articles
---
Resource: [Session #23 - Assignment Operators - YouTube](https://www.youtube.com/watch?v=GnMQrBqK6nw&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=30)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Assignment operators]]
___
# Summary 

---
# Highlights & Notes

- # What and when I can use those [[Assignment operators]].
- [[Assignment operators]] are the short form of a lot of code, and it takes just some time, for example instead of print A = A + B I can print A+=B, ok let's see that.
- let's say we have A = 10, B = 10.
``
```

Operators       Example                        equivalent to
=              A = B                          A = B

+=             A += B                         A = A + B                                                                             
-=             A -= B                         A = A - B                                                                          
*=             A *= B                         A *= B                                                              
/=             A /= B                         A = A / b                                                                          
%=             A %= B                         A = A % B                                                                         
```
---
# let’s coding

## input 
```cpp
#include <<iostream>>
using namespace std;

int main()
{
int a =10 , b =10;
a+=b;
cout << "a = " << a << endl;// i can't type a+=b into (cout.)

a-=b;
cout << "a = " << a << endl;

a*=b;
cout << "a = " << a << endl;

a/=b;
cout << "a = " << a << endl;

a%=b;
cout << "a = " << a << endl;

return 0;
}
```

# output
```cpp
a = 20
a = 10
a = 100
a = 10
a = 0
```