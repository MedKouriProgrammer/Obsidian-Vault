---
date: 2025-02-26T06:42
tags:
  - Resources/Articles
---
Resource: [Lesson #17 - Variables - YouTube](https://www.youtube.com/watch?v=P97SYFJfbCc&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=21)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[variables & constants ]]
___
# Summary 

---
# Highlights & Notes

- # What's variable & constants .
- variable are containers for storing data value .
- constant you can’t modify .
--- 
# What’s the types of the variables .
## Fundamental data types:
```
Integral types :
- int: 12
- char: ‘Z‘
Floating types :
- float:  54.3 // note i should print ( . ) instead ( , )
- double: 857.095909
### Boolien types :
- bool: 1 = true _ 0 = false
### string types :
- string: “medkouri“
### Void types :
- void: empty
### Wide character : 
- wchar_t : زكرياء
```
---
# [[Derived data types]]: function -array -pointer -reference.
---
# [[User-defined]]: class -structure -Union -enum -type def.
---
# How to create a variable.
[[syntax]] : type variablename = value
code:     int                   age=                        16;
    
	  type      identifiers      value or initial value or constant.

# input

```cpp
#include <<iostream>>
using namespace std;

int main()
{
int age = 13;
cout << "my name is" << age << endl;

}
```

```cpp
my age is 13
```

Note : the variables are overwriting so you can change his value.
```cpp
#include <<iostream>>
using namespace std;

int main()
{
int age;
age = 19;
cout << "my name is " << name << endl;

age = 22;
cout << "my new name is " << name << endl;

}
```

```cpp
my age is 19
my newage is 22
```

# Other name variable.
## input
```cpp
#include <<iostream>>
using namespace std;

int main()
{
int age = 10;
char mychar = 'a';
float floatname = 12.33;
double mydouble = 253.89898;
bool mystuation = 1;
string myname = "zakaria medkouri";
wchar_t name = ع ;

}
```
Note: i can calculate the variables :
```cpp
#include <<iosream>>
using namespace std; 

int main()
{
int a = 10 , b = 16 , calc = a+b;
------------------------------------------------------------------------------
int a = 10;
int b = 16;
int calc = a + b;
------------------------------------------------------------------------------
int a = 10 , b = 16 ;
int calc = a + b;
cout << "my age is " << calc << endl;
______________________________________________________________________________
int a = 10 , b = 16;
cout << "my age is " << a + b << endl;

return 0;
}```

```cpp
my age is 26
my age is 26
```

# the rules of naming variable.
- names must Bingen with a letters or underscore_
- name are sensitive ( myname - Myname those have a different variable name.)
- names cannot contain a whitespace or special characters like  !  #  etc.

## input
```cpp
#include <<iostream>>
using namespace std;
-
int main()
{
------------------------------------------------------------------------------
int age = 10; // those have a defferent variable name not the same variable.
Age = 10;
------------------------------------------------------------------------------
______________________________________________________________________________
int my age ;//false
int my _ age;//false
int my_age;//true
int _age;//true
______________________________________________________________________________
------------------------------------------------------------------------------
string 5name;//false
string name5;//true if i want write a letter & numbers i should write it after the letters.
------------------------------------------------------------------------------
______________________________________________________________________________
int for;// false
int string;//false

return 0;
}
```

# Constant
- If you wanna change the variables, Switch it to constant.
---

## Input 
```cpp
#include <<iostream>>
using namespace std;

int main()
{
const int a = 43;// now we can't modify this constant.
// if i want change it to variable, I should shift the constant.

}
```