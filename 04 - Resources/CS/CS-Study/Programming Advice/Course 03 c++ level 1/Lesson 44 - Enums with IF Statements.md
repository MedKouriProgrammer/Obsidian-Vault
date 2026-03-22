---
date: 2025-03-08T14:18
tags:
  - Resources/Articles
---
Resource: [Lesson #44 - Enums with IF Statements - YouTube](https://www.youtube.com/watch?v=QaTbIwTByo4&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=50)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[ Enums with IF Statements]]
___
# Summary 

---
# Highlights & Notes

- # Why I have to collect between [[Conditional Statements: IF, IF ... Else Statement]] with [[enum]] if my code need names & How  I can ask user with [[enum]].
- ### Firstly how to convert enum to ask user.

- ## Input
```cpp
#include<iostream>
using namespace std;

enum encontry {maroc = 1,france = 2};

int main()
{
	int a;
	encontry contry;

	cin >> a;
	contry = (encontry)a;

	return 0;
}
```
---
# New let’s see [[Conditional Statements: IF, IF ... Else Statement]] with [[enum]] if my code need many names.
## input
```cpp
#include<iostream>
using namespace std;

enum enfood_menu_choise { sald = 1, tajin = 2, fruit = 3, oronge_juise = 4, pizza = 5, other_type = 6 };
int main()
{
	cout << "*********************************\n";
	cout << "chose your food\n";
	cout << "salat = 1\n";
	cout << "tajin = 2\n";
	cout << "fruit = 3\n";
	cout << "orange_juise = 4\n";
	cout << "pizza = 5\n";
	cout << "other type = 6\n";
	cout << "*********************************\n";

	int a;// here i have to print int a to converst it in the next step.
	enfood_menu_choise food_menu;

	cin >> a;
		food_menu =(enfood_menu_choise)a;// here i have to convers (a) to food_menu to ask user with enum
	if (food_menu == enfood_menu_choise::sald)// here i should type (==) instead (=).
	{
		cout << "your salad has comming soon\n";
	}
	
	else if (food_menu == enfood_menu_choise::tajin)
	{
		cout << "your tajin will comming soon!\n";
	}
	
	else if (food_menu == enfood_menu_choise::fruit)
	{
		cout << "your fruit will comming soon!\n";
	}
	
	else if (food_menu == enfood_menu_choise::oronge_juise)
	{
		cout << "your orange juise will comming soon!\n";
	}
	
	else if (food_menu == enfood_menu_choise::pizza)
	{
		cout << "your pizza will comming soon\n";
	}
	else
	{
		cout << "your other type will come\n";
	}
	cout << "thank you\n";

	return 0;
}
```
## output
```cpp
*********************************
chose your food
salat = 1
tajin = 2
fruit = 3
orange_juise = 4
pizza = 5
other type = 6
*********************************
4
your orange juise will comming soon!
thank you
```