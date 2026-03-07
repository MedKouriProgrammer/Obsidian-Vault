---
date: 2025-04-12T11:47
tags:
  - Resources/Articles
---
Resource: 
Author: [[abu-hedhoud]]
___
# <font color="#ffff00"><u>Homework: from 16 to 20 Solutions.</u></font>
![[2025-03-14 (9).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

void Read_Number_Area(float &a,float &d)
{
	cout << "Please enter number a\n";
	cin >> a;
	cout << "Please enter number d\n";
	cin >> d;
}
float Calc_Rectangle_Area_Through_Diangle(float a, float d)
{
	return a * sqrt(d * d - a * a);
}
void Print_Area(float Area)
{
	cout << endl << "The Circle Area is = " << Area;
}
int main()
{
	float a, b;
	Read_Number_Area(a, b);
	Print_Area(Calc_Rectangle_Area_Through_Diangle(a, b));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter number a
5
Please enter number d
40

The Circle Area is = 198.431
```
---
# <font color="#92d050"><font color="#ffff00">(#17)</font></font>
![[2025-03-15 (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

void Read_Number_Area(float &a,float &h)
{
	cout << "Please enter number a\n";
	cin >> a;
	cout << "Please enter number h\n";
	cin >> h;
}
float Calc_Triangle_Area(float a, float h)
{
	return a / 2 * h;
}
void Print_Area(float Area)
{
	cout << endl << "The Circle Area is = " << Area;
}
int main()
{
	float a, h;
	Read_Number_Area(a, h);
	Print_Area(Calc_Triangle_Area(a, h));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter number a
10
Please enter number h
8

The Circle Area is = 40
```
---
# <font color="#92d050"><font color="#ffff00">(#18)</font></font>
![[2025-03-15 (2).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

float Read_Number_Area()
{
	float r;
	cout << "Please enter number r\n";
	cin >> r;
	return r;
}
float Calc_Circle_Area(float r)
{
	const float PI = 3.141592653589793238;
	return pow(r, 2) * PI;
	  
}
void Print_Area(float Area)
{
	cout << endl << "The Circle Area is = " << Area;
}
int main()
{
	Print_Area(Calc_Circle_Area(Read_Number_Area()));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter number r
5

The Circle Area is = 78.5398
```
---
# <font color="#92d050"><font color="#ffff00">(#19)</font></font>
![[2025-03-15 (3).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

float Read_Number_Area()
{
	float d;
	cout << "Please enter number d\n";
	cin >> d;
	return d;
}
float Calc_Circle_Area_Through_Diamedter(float d)
{
	const float PI = 3.141592653589793238;
	return (PI * d * d) / 4;
	  
}
void Print_Area(float Area)
{
	cout << endl << "The Circle Area is = " << Area;
}
int main()
{
	Print_Area(Calc_Circle_Area_Through_Diamedter(Read_Number_Area()));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter number d
10

The Circle Area is = 78.5398
```
---
# <font color="#92d050"><font color="#ffff00">(#20)</font></font>
![[2025-03-15 (5).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

float Read_Number_Area()
{
	float a;
	cout << "Please enter number a\n";
	cin >> a;
	return a;
}
float Calc_Circle_Area_Inscribed_InSquare(float a)
{
	const float PI = 3.141592653589793238;
	return (PI * (a * a)) / 4;
	  
}
void Print_Area(float Area)
{
	cout << endl << "The Circle Area is = " << Area;
}
int main()
{
	Print_Area(Calc_Circle_Area_Inscribed_InSquare(Read_Number_Area()));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter number a
10

The Circle Area is = 78.5398
```