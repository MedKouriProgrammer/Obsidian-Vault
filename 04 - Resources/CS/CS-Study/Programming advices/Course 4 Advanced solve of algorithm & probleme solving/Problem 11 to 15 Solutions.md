---
date: 2025-04-10T11:40
tags:
  - Resources/Articles
---
Resource: [Problem #11 to #15 Solutions - YouTube](https://www.youtube.com/watch?v=01DiCRs4q9U&list=PL3X--QIIK-OEwPmZVfltqCYy6_RuwXr4A&index=5)
Author: [[abu-hedhoud]]

---
# <font color="#ffff00"><u>Homework: from 11 to 15 Solutions.</u></font>
![[2025-03-14 (3).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;

enum enCheck_Mark{passe=1,fail=2};
void Read_Mark(int& mark1, int& mark2, int& mark3)
{
	cout << "Please enter mark 1?\n";
	cin >> mark1;
	cout << "Please enter mark 2?\n";
	cin >> mark2;
	cout << "Please enter mark 3?\n";
	cin >> mark3;

}
float Calc_Avr_of_Mark(int mark1, int mark2, int mark3)
{
	return (float)(mark1 + mark2 + mark3) / 3;
}
enCheck_Mark Check_Passe_or_Fail(float result)
{
	if (result > 50)

		return enCheck_Mark::passe;

	else
		return enCheck_Mark::fail;
}
void Print_Passe_or_Fail(float result)
{
	cout << "\nYour average is " << result;
	if (Check_Passe_or_Fail(result) == enCheck_Mark::passe)
		cout << "\nPasse";
	else
		cout << "\nFail";
}
int main()
{
	int mark1, mark2, mark3;
	Read_Mark(mark1, mark2, mark3);
	Print_Passe_or_Fail(Calc_Avr_of_Mark(mark1, mark2, mark3));


	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter mark 1?
90
Please enter mark 2?
80
Please enter mark 3?
70

Your average is 80
Passe
```
---
# <font color="#92d050"><font color="#ffff00">(#12)</font></font>
![[2025-03-14 (5).png]]
## <font color="#92d050">input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;

void Read_number(int &num1,int &num2)
{
	cout << "Please enter number 1\n";
	cin >> num1;
	cout << "Please enter number 2\n";
	cin >> num2;
}
int Calc_Max_number(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}
void Print_Max_number(int Max)
{
	cout << "\nThe Maximum Number is " << Max;
}
int main()
{
	int num1, num2;
	Read_number(num1, num2);
	Print_Max_number(Calc_Max_number(num1, num2));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter number 1
30
Please enter number 2
50

The Maximum Number is 50
```
---
# <font color="#92d050"><font color="#ffff00">(#13)</font></font>
![[2025-03-14 (6).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;

void Read_number(int& A, int& B,int &C)
{
	cout << "Please enter number A\n";
	cin >> A;
	cout << "Please enter number B\n";
	cin >> B;
	cout << "Please enter number C\n";
	cin >> C;
}
int Calc_Max_number(int A, int B, int C)
{
	if (A > B && A > C)
		return A;
	else if (B > A && B > C)
		return B;
	else
		return C;
}
void Print_Max_number(int Max)
{
	cout << "\nThe Maximum Number is " << Max;
}
int main()
{
	int A, B, C;
	Read_number(A, B, C);
	Print_Max_number(Calc_Max_number(A, B, C));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter number A
80
Please enter number B
60
Please enter number C
90

The Maximum Number is 90
```
---
# <font color="#92d050"><font color="#ffff00">(#14)</font></font>
![[2025-03-21.png]]
## <font color="#92d050">input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;

void Read_Numbers(int& num1, int& num2)
{
	cout << "Please enter number 1\n";
	cin >> num1;
	cout << "Please enter number 2\n";
	cin >> num2;
}
void Swap_Numbers(int &num1, int &num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
void Print_Max_number(int num1,int num2)
{
	cout << "\nNumber 1 is " << num1 << "\n";
	cout << "Number 2 is " << num2 << endl;
}
int main()
{
	int num1, num2;
	Read_Numbers(num1, num2);
	Print_Max_number(num1, num2);
	Swap_Numbers(num1, num2);
	cout << "\nAfter swap: ";
	Print_Max_number(num1, num2);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter number 1
10
Please enter number 2
20

Number 1 is 10
Number 2 is 20

After swap:
Number 1 is 20
Number 2 is 10
```
---
# <font color="#92d050"><font color="#ffff00">(#15)</font></font>
![[2025-03-14 (8).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;

void Read_Numbers_Area(float& A, float& B)
{
	cout << "Please enter number A?\n";
	cin >> A;
	cout << "Please enter number B?\n";
	cin >> B;
}
float Calc_Numbers_Area(float A, float B)
{
	return A * B;
}
void Print_Numbers_Area(float Area)
{
	cout << "\nRegtangle Area is = " << Area;
}
int main()
{
	float A,B;
	Read_Numbers_Area(A, B);
	Print_Numbers_Area(Calc_Numbers_Area(A, B));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter number A?
10
Please enter number B?
20

Regtangle Area is = 200
```
