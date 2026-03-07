---
date: 2025-03-01T06:53
tags:
  - Resources/Articles
---
Resource: [Lesson #18 - User Inputs - YouTube](https://www.youtube.com/watch?v=hCQogJSWXbY&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=23)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[user input ]]
___
# Summary 
finally we can say user input is to ask user to enter any data .

---
# Highlights & Notes

# What’s mean user inputs & what is his syntax.
- it’s mean to ask user to enter something's like data.
---
# What’s his syntax & how can we write it on vs.
- syntax: cin >> variable_name ;
---
## input
```c++
#include <<iostream>>
using nmaespace std;

int main()
{
int age;
cout << "please enter your age\n";
cin >> age;

cout << "your age is " << age << endl;

return 0;
}
```

## output
```c++
please enter your age
18

your age is 18

```