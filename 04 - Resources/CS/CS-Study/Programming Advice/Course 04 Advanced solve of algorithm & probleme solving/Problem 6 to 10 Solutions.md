---
date: 2025-04-08T13:07
tags:
  - Resources/Articles
---
Resource: [Problem #6 to #10 Solutions - YouTube](https://www.youtube.com/watch?v=0QidpPifb8g&list=PL3X--QIIK-OEwPmZVfltqCYy6_RuwXr4A&index=4)
Author: [[abu-hedhoud]]
___
# <font color="#ffff00"><u>Homework: from 6 to 10 Solutions.</u></font>
![[2025-03-13 (10) 1.png]]
## <font color="#92d050">Input</font>
```cpp
struct strnameinfo
{
	string F_name;
	string L_name;
};
strnameinfo Read_First_Name()
{
	strnameinfo nameinfo;

	cout << "Please enter first name\n";
	cin >> nameinfo.F_name;
	cout << "And Last name\n";
	cin >> nameinfo.L_name;
	return nameinfo;
}
string Get_Full_name(strnameinfo nameinfo)
{
	string fullname;
	fullname = nameinfo.F_name + " " + nameinfo.L_name;
	return fullname;
}
void Print_Full_Name(string fullname)
{
	cout << "\nYour full name is " << fullname;
}
int main()
{
	Print_Full_Name(Get_Full_name(Read_First_Name()));

	return 0;
} 
```
## <font color="#92d050">Output</font> 
```
Please enter first name
zakaria
And Last name
medkouri

Your full name is zakaria medkouri
```
---
# <font color="#92d050"><font color="#ffff00">(#7)</font></font>
![[2025-03-13 (11).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;

int Read_Number()
{
	int num;
	cout << "Please enter a number: ";
	cin >> num;
	return num;
}
 float Calc_Half_of_Number(int num)
{
	 return (float)num / 2;
}
void Print_Number(int num)
{
	string Result;
	Result = "The half of number " + to_string(num) + " is " + to_string(Calc_Half_of_Number(num));
	cout << Result << endl;
}
int main()
{
	Print_Number(Read_Number());

	return 0;
} 
```
## <font color="#92d050">Output</font>
```
Please enter a number: 60
The half of number 60 is 30.000000
```
## <font color="#92d050">Output</font>
```
Please enter a number: 50
The half of number 50 is 25.000000
```
---
# <font color="#92d050"><font color="#ffff00">(#8)</font></font>
![[2025-03-14.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;

enum enMark{Passe=1,Fail=2};
int Read_Mark()
{
	int mark;
	cout << "PLease enter the Mark: ";
	cin >> mark;
	return mark;
}
enMark Check_result_of_mark(int mark)
{
	if (mark >= 50)
		return enMark::Passe;
	else
		return enMark::Fail;
} 
void Print_Result_of_mark(int mark)
{
	if (Check_result_of_mark(mark) == enMark::Passe)
		cout << "\nPasse";
	else
		cout << "\nFail" << endl;
}
int main()
{
	Print_Result_of_mark(Read_Mark());

	return 0;
}
```
## <font color="#92d050">Output: False</font>
```
PLease enter the Mark: 45

Fail
```
## <font color="#92d050">Output: True</font>
```
PLease enter the Mark: 56

Passe
```
---
# <font color="#92d050"><font color="#ffff00">(#9)</font></font>
![[2025-03-14 (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;

void Read_Numbers(int &num1, int &num2, int &num3)
{

	cout << "Please enter number 1: ";
	cin >> num1;
	cout << "And number 2: ";
	cin >> num2;
	cout << "And number 3: ";
	cin >> num3;
}
int Calc_Sum_of_Numbers(int num1, int num2, int num3)
{
	return num1 + num2 + num3;  
}
void Print_Sum_of_Numbers(int sum)
{
	cout << "\nThe sum of numbers is: " << sum;
}
int main()
{
	int num1, num2, num3;
	Read_Numbers(num1, num2, num3);
	Print_Sum_of_Numbers(Calc_Sum_of_Numbers(num1, num2, num3));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter number 1: 10
Please enter number 2: 20
Please enter number 3: 30

The sum of numbers is: 60
```
---
# <font color="#92d050"><font color="#ffff00">(#10)</font></font>
![[2025-03-14 (2).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;

void Read_mark(int& mark1, int& mark2, int& mark3)
{
	cout << "Please enter mark 1\n";
	cin >> mark1;
	cout << "Please enter mark 2\n";
	cin >> mark2;
	cout << "Please enter mark 3\n";
	cin >> mark3;
}
int Sum_of_Mark(int mark1, int mark2, int mark3)
{
	return mark1 + mark2 + mark3;
}
float Calc_Average_of_Mark(int mark1, int mark2, int mark3)
{
	return (float)(mark1 + mark2 + mark3) / 3;
}
void Print_Result_of_Mark(float result)
{
	cout << "\nThe average of marks is: " << result;
}
int main()
{
	int mark1, mark2, mark3;
	Read_mark(mark1, mark2, mark3);
	Print_Result_of_Mark(Calc_Average_of_Mark(mark1, mark2, mark3));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter mark 1
90
Please enter mark 2
80
Please enter mark 3
70

The average of marks is: 80
```
