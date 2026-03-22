---
date: 2025-03-04T11:50
tags:
  - Resources/Articles
---
Resource: [Lesson #30 - Data Type Conversion - YouTube](https://www.youtube.com/watch?v=ErJd-vX1ytc&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=36)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[datatypes conversion]]
___
# Summary 

---
# Highlights & Notes

- # What & when I can use data type conversion.
- Data type conversion, used to changing a value from one data type to another.

- # Schema of changing data type conversion.
![[WhatsApp Image 2025-03-04 at 13.35.12_c6a91476.jpg]]
---
# How to convert double or float to integer.

```cpp
#include<iostream>
using namespace std;

int main()
{
float num1 = 43.63;
	double num2 = 56772.72782;
// i can also print here int giga1, then i don't need to defined it.
	int giga1 = (int)num1;
	int giga2 = (int)num2;

	cout << giga1 << " " << giga2 << endl;

	return 0;
}
```
## Note : I should not to include string.

---
## Convert string to integer or float or double.

```cpp
#include<iostream>
#include<string>
using namespace std;

int main()
int main()
{
	string num1 = "12334.4567";//if I want to covert to integer, string should be numbers not letters.
// i can also type here name of datatype and then i don't need to defined it.
	int giga1 = stoi(num1);
	float giga2 = stof(num1);
	double giga3 = stod(num1);

	cout << giga1 << " " << giga2 << " " << giga3 << endl;

	return 0;
}

```
## Note : to convert string to integer or double or float I need to include string. 
## Note : if I want to covert to integer, string should be numbers not letters.

---
## New convert number of integer or float or double to string.

```cpp
#include<iostream>
#include<string>
using namespace std;

int main()
{
int num1 = 45;
	float num2 = 45.52;
	double num3 = 234.65658;

	string giga1, giga2;
	giga1 = to_string(num1);
	giga2 = to_string(num2);
	string giga3 = to_string(num3);

	cout << giga1 << " " << giga2 << " " << giga3 << endl;

	return 0;
}
```
