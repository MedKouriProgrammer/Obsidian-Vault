---
date: 2025-03-06T12:58
tags:
  - Resources/Articles
---
Resource: [Lesson #38 - Structures and Functions - Re-usability. - YouTube](https://www.youtube.com/watch?v=eBDwY1gvOPU&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=44)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Structures and Functions - Re-usability.]]
___
# Summary 

---
# Highlights & Notes

- # Why I need to collect between structures & functions.
- I need it to make my code better and short and easy to read and to edit it, and saves me hours of work.
---
# Some examples :
## input
```cpp
#include<iostream>
using namespace std;

struct strinformation
{
	string name;
	int age;
	string contry;
};
void vreadinfo(strinformation &info)// it's necessary to write ( & )
{
	cout << "please enter your name \n";
	cin >> info.name;
	cout << "and your age\n";
	cin >> info.age;
	cout << "and your contry\n";
	cin >> info.contry;
}
void vprintinfo(strinformation info)
{
	cout << "\n";
	cout << "your name is " << info.name << "\n";
	cout << "and your age is " << info.age << "\n";
	cout << "and your contry is " << info.contry << "\n";
}
int main()
{ // new i can recall them for any time amd more than ones.
	strinformation(person1);
	vreadinfo(person1);
	vprintinfo(person1);
	
	cout << "\n";
	
	strinformation(person2);
	vreadinfo(person2);
	vprintinfo(person2);

	return 0;
}
```
## output
```cpp
please enter your name
zakaria
and your age
20
and your contry
morocco

your name is zakaria
and your age is 20
and your contry is 
morocco

please enter your name
ahmed
and your age
19
and your contry
usa

your name is ahmed
and your age is 19
and your contry is usa
```