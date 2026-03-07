---
date: 2025-03-03T13:54
tags:
  - Resources/Articles
---
Resource: [Lesson 28 - Enums - YouTube](https://www.youtube.com/watch?v=a7_k9cBfz8I&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=34)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[User-defined: enum ]][[ enum]]
___
# Summary 

---
# Highlights & Notes

- # What’s enum.
- [[enum]] and also called Enumeration is a type of datatype exactly in [[User-defined]], used to create a [[User-defined]] type that consist of a set of named integer constants, this makes your code more readable and organized instead of using plain number.
- ---
- # let's see this in action.

## input
```cpp
#include <iostream>
using namespace std;

enum enphone {samsung, iphone , oppo ,tesla};

int main()
{
	enphone phone;
	phone = enphone::samsung;
	phone = enphone::iphone;
	phone = enphone::oppo;
	phone = enphone::tesla;
	
	cout << "my phone is " << enphone::samsung << endl;

	return 0;
}

```

## I can also use a lot of enum on my code.

## input
```cpp
#include <iostream>
using namespace std;

enum engender {male,female};
enum enstatus {single,married};

int main()
{
	engender gender;
	enstatus status;

	gender = engender::male;
	gender = engender::female;

	status = enstatus::single;
	status = enstatus::married;

	cout << "his gender is " << engender::male << " and his status is " << enstatus::single << endl;

	return 0;
}

```