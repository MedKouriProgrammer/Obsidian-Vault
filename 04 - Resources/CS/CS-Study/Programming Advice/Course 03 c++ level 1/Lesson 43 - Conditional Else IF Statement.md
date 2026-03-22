---
date: 2025-03-08T12:25
tags:
  - Resources/Articles
---
Resource: [Lesson #43 - Conditional Else IF Statement - YouTube](https://www.youtube.com/watch?v=phE5e9kFs34&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=49)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Conditional Else IF Statement]]
___
# Summary 

---
# Highlights & Notes

- # What’s the [[syntax]] of Conditional Else IF Statement.
- ![[2025-03-08 (5).png]]
- ## Note: this syntax is for if I want to achieve only one of conditions, if the condition1 come true (else & else if  will not work), and the same thing of condition2, but if condition1 & condition2 comes false (else) will work.
- ---
- # Let’s see this in action.
- ## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "how old are you?\n";
	cin >> num;

	if (num <= 10)
	{
		cout << "you are kid\n";
	}
	else if (num <= 17)
	{
		cout << "you are a child\n";
	}
	else if(num >= 18)
	{
		cout << "you are young\n";
	}
	else if (num == 30)
	{
		cout << "you are big man\n";
	}
	else
	{
		cout << "you are old man";
	}
	cout << "thak you for your participation";
}
```
## output
```cpp
how old are you?
19
you are young man
```
---
# Homework of algorithm and problem-solving: 33-34-36-44-45.
![[2025-03-17.png]]

## Input
```cpp
#include <iostream>  
using namespace std;

int main()
{
	int grade;
	cout << "Please enter your Grade\n";
	cin >> grade;
	cout << "\n";

	if (grade >= 90 && grade <=100)
	{
		cout << "A\n";
	}
	else if (grade >= 80 && grade <=89)
	{
		cout << "B\n";
	}
	else if (grade >= 70 && grade <=79)
	{
		cout << "C\n";
	}
	else if (grade >= 60 && grade <=69)
	{
		cout << "D\n";
	}
	else if (grade >= 50 && grade<= 59)
	{
		cout << "E\n";
	}
	else
	{
		cout << "F\n";
	}

	return 0;
}
```
## Output: true
```
Please enter your Grade
95

A
```
---
# (#34)
![[2025-03-17 (3).png]]
## Input
```cpp
#include <iostream>  
using namespace std;

int main()
{
	int TotalSales;
	float Persontage, result;
	cout << "Please enter TotalSales\n";
	cin >> TotalSales;
	cout << "\n";

	if (TotalSales >= 1000.000)
	{
		Persontage = 0.01;
		result = Persontage * TotalSales;
		cout << result << "\n";
	}
	else if (TotalSales >= 500.000 && TotalSales < 1000.000)
	{
		Persontage = 0.02;
		result = TotalSales * Persontage;
		cout << result << "\n";
	}
	else if (TotalSales >= 100.000 && TotalSales < 500.000)
	{
		Persontage = 0.03;
		result = TotalSales * Persontage;
		cout << result << "\n";
	}
	else if (TotalSales >= 50.000 && TotalSales < 100.000)
	{
		Persontage = 0.05;
		result = TotalSales * Persontage;
		cout << result << "\n";
	}
	else
	{
		cout << "you're TotalSales is not available\n";
	}

	return 0;
}
```
## Output
```
Please enter TotalSales
110.000

3.3
```
---
# (#36)
![[2025-03-18 (1).png]]
## Input
```cpp
#include <iostream>  
using namespace std;

int main()
{
	int num1, num2;
	string operation_typr;
	cout << "Please enter number 1\n";
	cin >> num1;
	cout << "And number 2\n";
	cin >> num2;
	cout << "And your operation type\n";
	cin >> operation_typr;
	cout << "\n";

	if (operation_typr == "+")
	{
		cout << num1 + num2 << "\n";
	}
	else if (operation_typr == "-")
	{
		cout << num1 - num2 << "\n";
	}
	else if (operation_typr == "*")
	{
		cout << num1 * num2 << "\n";
	}
	else if (operation_typr == "/")
		if (num1 == 0 || num2 == 0)
		{
			cout << "Error: Division by zero is not allowed.";
		}
		else
		{
			cout << num1 / num2;
		}

	return 0;
}```
## Input: another one with [[functions & procedures]]
```cpp
#include <iostream>  
using namespace std;
void vread(int &num1, int &num2, string &operation_type)
{
	cout << "Please enter number 1\n";
	cin >> num1;
	cout << "And number 2\n";
	cin >> num2;
	cout << "And your operation type\n";
	cin >> operation_type;
	cout << "\n";
}
void vprint_condition(int num1, int num2, string operation_type)
{
	if (operation_type == "+")
	{
		cout << num1 + num2 << "\n";
	}
	else if (operation_type == "-")
	{
		cout << num1 - num2 << "\n";
	}
	else if (operation_type == "*")
	{
		cout << num1 * num2 << "\n";
	}
	else if (operation_type == "/")
	if (num1==0 || num2==0)
	{
	    cout <<  "Error: Division by zero is not allowed.";
	}
	else
	{
		cout << num1 / num2 << endl;
	}
}
int main()
{
	int num1, num2;
	string operation_type;
	vread(num1, num2, operation_type);
	vprint_condition(num1, num2, operation_type);

	return 0;
}
```
## Output
```
Please enter number 1
10
And number 2
20
And your operation type
*

200
```
---
# (#44)
![[2025-03-19 (4).png]]
## Input: With functions
```cpp
#include <iostream>  
using namespace std;
void vread(int &day)
{
	cout << "Please enter a day\n";
	cin >> day;
	cout << "\n";
}
void vprint_condition(int day)
{
	if (day == 1)
	{
		cout << "Sunday\n";
	}
	else if (day == 2)
	{
		cout << "Monday\n";
	}
	else if (day == 3)
	{
		cout << "Tuesday\n";
	}
	else if (day == 4)
	{
		cout << "Wednesday\n";
	}
	else if (day == 5)
	{
		cout << "Thursday\n";
	}
	else if (day == 6)
	{
		cout << "Friday\n";
	}
	else if (day == 7)
	{
		cout << "Saturday" << endl;
	}
	else
	{
		cout << "Wraong Day, Please try agine";
	}
}
int main()
{
	int day;
	vread(day);
	vprint_condition(day);

	return 0;
}
```
## Output
```
Please enter a day
1

Sunday
```
---
# (#45)
![[2025-03-19 (5).png]]
## Input: With functions
```cpp
#include <iostream>  
using namespace std;
void vread(int &month)
{
	cout << "Please enter the Month\n";
	cin >> month;
	cout << "\n";
}
void vprint_condition(int month)
{
	if (month == 1)
	{
		cout << "January\n";
	}
	else if (month == 2)
	{
		cout << "February\n";
	}
	else if (month == 3)
	{
		cout << "March\n";
	}
	else if (month == 4)
	{
		cout << "April\n";
	}
	else if (month == 5)
	{
		cout << "May\n";
	}
	else if (month == 6)
	{
		cout << "June\n";
	}
	else if (month == 7)
	{
		cout << "July" << endl;
	}
	else if (month == 8)
	{
		cout << "August\n";
	}
	else if (month == 9)
	{
		cout << "Septembre\n";
	}
	else if (month == 10)
	{
		cout << "October\n";
	}
	else if (month == 11)
	{
		cout << "November\n";
	}
	else if (month == 12)
	{
		cout << "December\n";
	}
	else
	{
		cout << "Wraong Day, Please try agine";
	}
}
int main()
{
	int month;
	vread(month);
	vprint_condition(month);

	return 0;
}
```
## Output
```
Please enter the Month
11

November
```