---
creation_date: 2025-05-01T15:38
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=sB0ZDkrXTRA&list=PL3X--QIIK-OEwPmZVfltqCYy6_RuwXr4A&index=12
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#ffff00"><u>Homework: from 46 to 50 Solutions. </u></font>
---
# <font color="#ffff00">(#46)</font>
![[2025-03-20 (2).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

void Print_AllLetters_A_to_Z()
{

	for (int i = 65;i <= 90;i++)
	{
		cout << char(i) << endl;
	}

}
int main()
{
	Print_AllLetters_A_to_Z();

	return 0;
}
```
## <font color="#92d050">Output</font>
```
A
B
C
D
E
F
G
H
I
J
K
L
M
N
O
P
Q
R
S
T
U
V
W
X
Y
Z
```
---
# <font color="#ffff00">(#47)</font>
![[2025-03-20 (3).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

float Read_PositiveNumber(string message) {

	float num;

	do
	{
		cout << message;
		cin >> num;

	} while (num <= 0);

	return num;
}
float Calc_TotalMonth(float LoonAmonth, float MonthlyPayment) {

	return (float)LoonAmonth / MonthlyPayment;

}
int main()
{
	float LoonAmonth = Read_PositiveNumber("Enter the LoonAmonth: ");
	float MonthlyPayment = Read_PositiveNumber("Enter the MonthlyPayment: ");

	cout << "\n The TotalMonths is = " << Calc_TotalMonth(LoonAmonth, MonthlyPayment) << " Months";

	return 0;
}
```
## <font color="#92d050">Output</font>
```
nter the LoonAmonth: 5000
Enter the MonthlyPayment: 500

 The TotalMonths is = 10 Months
```
---
# <font color="#ffff00">(#48)</font>
![[2025-03-20 (4).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

float Read_PositiveNumber(string message) {

	float num;

	do
	{
		cout << message;
		cin >> num;

	} while (num <= 0);

	return num;
}
float Calc_TotalMonth(float LoonAmonth, float NumOfMonth) {

	return (float)LoonAmonth / NumOfMonth;

}
int main()
{
	float LoonAmonth = Read_PositiveNumber("Enter the LoonAmonth: ");
	float NumOfMonth = Read_PositiveNumber("Enter the How Many Months?: ");

	cout << "\n The MonthlyPayments is = " << Calc_TotalMonth(LoonAmonth, NumOfMonth) << "$";

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter the LoonAmonth: 5000
Enter the How Many Months?: 10

 The MonthlyPayments is = 500$
```
---
# <font color="#ffff00">(#49)</font>
![[2025-03-20 (5).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

string ReadPinCode() {

	string Pincode;

	cout << "Enter the PinCode: ";
	cin >> Pincode;
	return Pincode;
}
bool Login() {

	string Pincode;

	do
	{
		Pincode = ReadPinCode();

		if (Pincode == "1234")
		{
			return 1;
		}
		else
		{
			cout << "Wrong Pin!\n";
		}

	} while (Pincode != "1234");

	return false;

}
int main()
{
	if (Login())
	{
		cout << endl << "Your Balance is: 7500.";
	}

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter the PinCode: 332
Wrong Pin!
Enter the PinCode: 1234

Your Balance is: 7500.
```
---
# <font color="#ffff00">(#50)</font>
![[2025-03-20 (6).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

string ReadPinCode() {

	string Pincode;

	cout << "Enter the PinCode: ";
	cin >> Pincode;
	return Pincode;
}
bool Login() {

	string Pincode;
	int counter=3;
	do
	{
		counter--;
		Pincode = ReadPinCode();

		if (Pincode == "1234")
		{
			return 1;
		}
		else
		{
			cout << "Wrong Pin!,you have " << counter << " attempts R";
		}

	} while (counter >= 1 && Pincode != "1234");

	return false;

}
int main()
{
	if (Login())
	{
		cout << endl << "Your Balance is: 7500.";
	}
	else
	{
		cout << "\nYour card blocked call the bank for help.\n";
	}

	return 0;
}
```
## <font color="#92d050">Output: False</font>
```
Enter the PinCode: 1232
Wrong Pin!,you have 2 attempts REnter the PinCode: 12
Wrong Pin!,you have 1 attempts REnter the PinCode: 21
Wrong Pin!,you have 0 attempts R
Your card blocked call the bank for help.
```
## <font color="#92d050">Output: True</font>
```
nter the PinCode: 12
Wrong Pin!,you have 2 attempts REnter the PinCode: 12
Wrong Pin!,you have 1 attempts REnter the PinCode: 1234

Your Balance is: 7500.
```
---
