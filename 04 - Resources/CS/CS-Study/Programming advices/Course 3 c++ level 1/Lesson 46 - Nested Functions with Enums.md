---
date: 2025-03-09T12:39
tags:
  - Resources/Articles
---
Resource: [Lesson #46 - Nested Functions with Enums - YouTube](https://www.youtube.com/watch?v=6N5y9ndDLOs&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=52)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Nested Functions with Enums]]
___
# Summary 

---
# Highlights & Notes

- # [[Nested Functions with Enums]].
- ## Input
```cpp
#include<iostream>
using namespace std;

enum enweekday { monday = 1, thustday = 2, wensday = 3, thursday = 4, friday = 5, saturday = 6, sanday = 7 };
void menu_weekday()
{
	cout << "****************************\n";
	cout << "*          weekday         *\n";
	cout << "****************************\n";
	cout << "monday: 1\n";
	cout << "thusday: 2\n";
	cout << "wensday: 3\n";
	cout << "thursday: 4\n";
	cout << "friday: 5\n";
	cout << "sturday: 6\n";
	cout << "sanday: 7\n";
	cout << "\n";
	cout << "chose a day\n";
}
enweekday read_weekday()
{
	enweekday weekday;
	int wd;
	cin >> wd;
	return (enweekday)wd;
}
string getweekday(enweekday weekday)
{
	switch (weekday)[// i always have to write return in function instead cout.
	{
	case enweekday::monday:// i can also write case 1: 
		return "monday";
		break;
	case enweekday::thustday:
		return  "thusday";
	    break;
	case enweekday::wensday:
		return  "wensday";
		break;
	case enweekday::thursday:
		return "thursday";
		break;
	case enweekday::friday:
		return "friday";
		break;
	case enweekday::saturday:
		return "saturday";
		break;
	case enweekday::sanday:
		return "sanday";
		break;
	default:
		return "chose a week day and try again\n";
	}
	return "\n";
	return "thank you\n";
}
int main()
{
	menu_weekday();
	cout << "you chose " << getweekday(read_weekday()) << endl;

	return 0;
}
```
## output
```cpp
****************************
*          weekday         *
****************************
monday: 1
thusday: 2
wensday: 3
thursday: 4
friday: 5
sturday: 6
sanday: 7

chose a day
4
you chose thursday
```
## output: an other number.
```cpp
****************************
*          weekday         *
****************************
monday: 1
thusday: 2
wensday: 3
thursday: 4
friday: 5
sturday: 6
sanday: 7

chose a day
9
you chose chose a week day and try again
```