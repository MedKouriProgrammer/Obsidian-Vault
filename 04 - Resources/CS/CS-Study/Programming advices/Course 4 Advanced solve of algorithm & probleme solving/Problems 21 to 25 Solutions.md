---
date: 2025-04-13T14:18
tags:
  - Resources/Articles
---
Resource: [Problems #21 to #25 Solutions - YouTube](https://www.youtube.com/watch?v=KpdzXc2VoH0&list=PL3X--QIIK-OEwPmZVfltqCYy6_RuwXr4A&index=7)
Author: [[abu-hedhoud]]
___
# <font color="#ffff00"><u>Homework: from 21 to 25 Solutions.</u></font>
![[2025-03-15 (6).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

float Read_Circle_Area()
{
	float L;
	cout << "Please entre Circle Area L\n";
	cin >> L;
	return L;
}
float Calc_Circle_Area_by_Circumference(float L)
{
	float  PI = 3.141592653589793238;
	return (L * L) / (4 * PI);
}
void Print_Area_Result(float Area)
{
	cout << "\nThe Circle Area is = " << Area;
}
int main()
{
	Print_Area_Result(Calc_Circle_Area_by_Circumference(Read_Circle_Area()));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please entre Circle Area L
20

The Circle Area is = 31.831
```
---
# <font color="#92d050"><font color="#ffff00">(#22)</font></font>
![[2025-03-15 (7).png]]
## <font color="#92d050">Input</font>
<u></u>```cpp
#include <iostream>
#include<cmath>
using namespace std;

float Read_Circle_Area(float &a,float &b)
{
	cout << "Please entre Circle Area a\n";
	cin >> a;
	cout << "Please enter Circle Area b\n";
	cin >> b;
	return a, b;
}
float Calc_Circle_Area_by_Triangle(float a,float b)
{
	float  PI = 3.141592653589793238;
	return (PI * b * b / 4) * ((2 * a - b) / (2 * a + b));
}
void Print_Area_Result(float Area)
{
	cout << "\nThe Circle Area is = " << Area;
}
int main()
{
	float a, b;
	Read_Circle_Area(a, b);
	Print_Area_Result(Calc_Circle_Area_by_Triangle(a, b));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter Circle Area b
10

The Circle Area is = 47.1239
```
---
# <font color="#92d050"><font color="#ffff00">(#23)</font></font>
![[2025-03-15 (8).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

void Read_Circle_Area(float &a,float &b,float &c)
{
	cout << "Please entre Circle Area A\n";
	cin >> a;
	cout << "Please enter Circle Area B\n";
	cin >> b;
	cout << "Please enter Circle Area C\n";
	cin >> c;
}
float Calc_Circle_Area_by_Triangle(float a,float b,float c)
{
	float  PI = 3.141592653589793238;
	float P = (a + b + c) / 2;
	float T = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));
	T = T * T;
	return PI * T;
}
void Print_Area_Result(float Area)
{
	cout << "\nThe Circle Area is = " << Area;
}
int main()
{
	float a, b,c;
	Read_Circle_Area(a, b, c);
	Print_Area_Result(Calc_Circle_Area_by_Triangle(a, b, c));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please entre Circle Area A
5
Please enter Circle Area B
6
Please enter Circle Area C
7

The Circle Area is = 40.088
```
---
# <font color="#92d050"><font color="#ffff00">(#24)</font></font>
![[2025-03-15 (9).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

int Read_Age()
{
	int age;
	cout << "Please enter your age\n";
	cin >> age;
	return age;
}
bool Check_Age(int number,int from,int to)
{
	return (number >= from && number <= to);
}
void Print_Age_Result(int age)
{
	if (Check_Age(age,18,45))
	{
		cout << "\n" << age << " is a Valide age";
	}
	else
	{
		cout << endl << age << "is Invalide age";
	}
}
int main()
{
	Print_Age_Result(Read_Age());

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter your age
33

33 is a Valide age
```
---
# <font color="#92d050"><font color="#ffff00">(#25)</font></font>
![[2025-03-15 (10).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

int Read_Age()
{
	int age;
	cout << "Please enter your age\n";
	cin >> age;
	return age;
}
bool Check_Age(int number,int from,int to)
{
	return (number >= from && number <= to);
}
int Read_Until_Age_Between(int from, int to)
{
	int age = 0;
	
	do
	{
		age = Read_Age();

	} while (!Check_Age(age, from,to));

	return age;
}
void Print_Age_Result(int age)
{
	cout << "Your age is " << age << " so it's a validate number\n";
}
int main()
{
	Print_Age_Result(Read_Until_Age_Between(18,45));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter your age
11
Please enter your age

44
Your age is 44 so it's a validate number
```