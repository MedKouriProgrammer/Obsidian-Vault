---
date: 2025-03-07T05:45
tags:
  - Resources/Articles
---
Resource: [Lesson #39 - Arrays - YouTube](https://www.youtube.com/watch?v=d2AYhM6LB1o&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=45)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[arrays]]
___
# Summary 

---
# Highlights & Notes

- # What’s array and what’s there used.
- array is a variable that I can collect a numbers or characters or sentences, is like a box contains numbers or any datatypes, then I can get the value by knowing the box number ( [[Index]] ).
- It abbreviate a lot of code, for examples I want to define many variables, I don’t need to write ```int a = 1,b = 35,c = 56,d = 73;``` it take a long time, instead that I can write
- ```int a[5] = {12,34,45,67,89}
- ---
# Examples of arrays.
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
string x = "zakaria medkouri"; //index start on 0.
// with inter i should defined how much the The inns.
cout << x[5] << "\n"; // output i
cout << x[7] << endl; // output m

return 0;
}
```
## Note : string is an array of characters.
---
## input 
```cpp
#include<iostream>
using namespace std;

int main()
{
int x[5] ={22,44,65,28,79};// i shouldn't repetition the same numbers.
cout << x[3] << "\n";
cout << x[4] << "\n";
cout << x[0] * 8/71 << endl;// i can calculat it, because it's a variable.

return 0;
}
```
## output
```cpp
28
79
2
```
---
# Let's ask the user with an array and multiply the result.
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int x[3];
	cout << "please enter grade 1\n";
	cin >> x[0];
	cout << "and grade 2\n";
	cin >> x[1];
	cout << "and grade 3\n";
	cin >> x[2];
	cout << "************************" << endl;
	cout << "the avarage of grade is " << x[0] + x[1] + x[2];

	return 0;
}
```
## output
```cpp
please enter grade 1
70
and grade 2
80
and grade 3
90
************************
the avarage of grade is 240
```
