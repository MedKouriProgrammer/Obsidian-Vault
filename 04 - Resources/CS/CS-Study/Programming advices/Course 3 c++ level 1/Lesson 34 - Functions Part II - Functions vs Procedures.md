---
date: 2025-03-05T13:05
tags:
  - Resources/Articles
---
Resource: [Lesson #34 - Functions Part II - Functions vs Procedures - YouTube](https://www.youtube.com/watch?v=zoC1pQq87dc&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=41)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Functions Part II - Functions vs Procedures]]
___
# Summary 

---
# Highlights & Notes

- # Let's see functions on c++.
- ## Input
```cpp
#include<iostream>
using namespace std;

void myfunction1()// procedures 
{
	cout << "what next!\n";
}
string myfunction2()
{
	return "you're next\n";// here i should write return instead cout becouse it's functions
}
int myfunction3()// i can also define float,bool,double... 
{
	int a = 10, b = 20;
	cout << "**************************\n";// i can also print anytings and calculate, becouse it's functions
	return a + b;
}
int main()
{

	myfunction1();
	cout << myfunction2() << endl;

	int result;
	result = myfunction3() + 50;
	cout << result << endl;

	return 0;
}
```
### Note : I can calculate the functions, also 
## Output
```cpp
what next!
you're next

**************************
80
```
---
# Homework
```cpp
write one function and one procedures.

  //for procedures                          //for functions and calculated   
enter first number 1                            enter sum 1
10                                              30
enter number 2                                  enter sum 2
10                                              30
***********************                         *************************
20                                              20


```
## let’s do this 
## input
```cpp
#include <iostream>
#include<string>
using namespace std;

void myfunction1()
{
	int number, number1;
	cout << "enter first number";
	cin >> number;
	cout << "enter number 2\n";
		cin >> number1;
		cout << "***********************\n";
		cout << number + number1 << endl;
}
int mysum()
{
	int sum1, sum2;
	cout << "enter sum1\n";
	cin >> sum1;
	cout << "enter sum2\n";
	cin >> sum2;
	cout << "***********************\n";
	return sum1 + sum2;
}
int main()
{	
	myfunction1();
	cout << mysum() << endl;

	return 0;
}
```

## Output
```cpp
enter first number 1
10
enter number 2
10
***********************
20

enter sum1
30
enter sum2
30
***********************
60
```