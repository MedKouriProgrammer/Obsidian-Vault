---
date: 2025-03-01T12:37
tags:
  - Resources/Articles
---
Resource: [Lesson #19 - Datatypes Sizes & Ranges - YouTube](https://www.youtube.com/watch?v=90Mlgpr4L4c&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=26)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[data types ranges & sizes]]
___
# Summary 

---
# Highlights & Notes

- # First thing, what are the sizes of all the fundamental datatypes.

![[WhatsApp Image 2025-03-01 at 12.36.47_3f8a7748 3.jpg]]

---
# New what is type modifiers.
- we can modify some fundamental data types by using type modifiers, there are 4 type modifiers on c++ they are:
- singed
- unsigned 
- short
- long.
## we can used those type modifiers only of those fundamental datatypes : 
- int
- double
- char
---
# First let’s see the ranges & sizes of int.

![[Pasted image 20250301125811.png]]

# Now of char & bool & string & void:
![[WhatsApp Image 2025-03-01 at 12.31.14_53be527b.jpg]]

# Now of float & double & long double:
![[WhatsApp Image 2025-03-01 at 12.31.14_fffc6d26.jpg]]

---
# Lets coding.

```cpp
#include <<iostream>>
using namespace std;

int main()
{
int a;// new it's automatically signed so i d'ont need to writ (singned) before int.
unsigned int a;// here the data should be positive not negative becouse i write (unsigned.)

short a;// it's by default int whitout writ (short int.) 
long long a;// and also that's mean (long long int).  

unsigned long long int a;// yes i can writ it like this and new i have to enter a positive number.
}
```
---
## What if i want the way to know the sizes of fundamental datatypes without return to video, let’s find out.

- there is a [[syntax]] to write it on vs, and it’s :  sizeof( fundamental ) .
## let’s see it on c++.
```cpp
#include <<iostream>>
using namespace std;

int main()
{
cout << "size of float " << sizeof(float) << endl;
cout << "new of double " << sizeof(double) << endl;
cout <<"for bool " << sizeof(bool) << endl;
cout <<"char " << sizeof(char) << endl;
------------------------------------------------------------------------------
cout <<"of int " << sizeof(int) << endl;
cout << "new of short datatypes " << sizeof(short int) << endl;
cout << "new of long long " << sizeof(long long) << endl;



}
```
---
## New let’s see how to know the ranges on vs.
- syntax : for exemble i want to know the ranges of int i should write INT( MIN OR MAX ) and if want to know the long long int i should write LLONG( MIN OR MAX ).
## Let’s coding

![[WhatsApp Image 2025-03-01 at 13.42.27_a49dec13 1.jpg]]

## output
![[WhatsApp Image 2025-03-01 at 13.42.27_1e3f9423.jpg]]
