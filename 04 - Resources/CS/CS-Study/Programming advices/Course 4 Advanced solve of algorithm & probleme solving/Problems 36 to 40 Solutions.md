---
date: 2025-04-22T13:00
tags:
  - Resources/Articles
---
Resource: [Problems #36 to #40 Solutions - YouTube](https://www.youtube.com/watch?v=B10mtM1wZKY&list=PL3X--QIIK-OEwPmZVfltqCYy6_RuwXr4A&index=10)
Author: [[abu-hedhoud]]
___
# <font color="#ffff00">Homework: from 36 to 40 Solutions.<u></u></font>
![[2025-03-18 (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

enum enoperation_type { add = '+', subtruct = '-', multible = '*', devide = '/' };
float Read_Numbers(string message)
{
	float number = 0;
	do
	{
		cout << message;
		cin >> number;

	} while (number <= 0);
	
	return number;
}
enoperation_type Read_Operation_Type()
{
	char O_Type;
	cout << "Please enter the Operation Type = ('+' , '-' , '*'  , '/')\n";
	cin >> O_Type;
	return enoperation_type(O_Type);
}
float Calc_and_Print_Result(float number1, float number2, enoperation_type O_Type)
{
	switch (O_Type)
	{
	case enoperation_type::add:;
		return number1 + number2;

	case enoperation_type::subtruct:;
		return number1 - number2;

	case enoperation_type::multible:;
		return number1 * number2;

	case enoperation_type::devide:;
		return number1 / number2;

		break;
	}
}
int main()
{
	float number1 = Read_Numbers("Please enter the first positive number: ");
	float number2 = Read_Numbers("Enter the seconde positive number: ");

	enoperation_type OP_Type = Read_Operation_Type();

	cout << "\nThe result is = " << Calc_and_Print_Result(number1, number2, OP_Type);
	
	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter the first positive number: -9
Please enter the first positive number: 10
Enter the seconde positive number: 20
Please enter the Operation Type = ('+' , '-' , '*'  , '/')
*

The result is = 200
```
---
# <font color="#ffff00">(#37)</font>
![[2025-03-18 (3).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<string>
using namespace std;

float Read_Numbers(string message)
{
	int num=0;
	cout << message;
	cin >> num;
	return num;
}
float Calc_Sum__Print_Result()
{
	int sum = 0, num = 0, counter = 1;

	do
	{
		num = Read_Numbers("Please enter the number " + to_string(counter) + " :");
		if (num == -99)
		{
			break;
		}

		sum += num;
		counter++;

	} while (num != -99);

	return sum;
}
int main()
{
	cout << endl << "Result is = " << Calc_Sum__Print_Result();
	

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter the number 1 :10
Please enter the number 2 :20
Please enter the number 3 :30
Please enter the number 4 :40
Please enter the number 5 :-99

Result is = 100
```
---
# <font color="#ffff00">(#38)</font>
![[2025-04-27.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

enum enPrimeNOTPrime{Prime=1,NotPrime=2};
int Read_Positive_Numbers(string message)
{
	int num;
	do
	{
		cout << message;
		cin >> num;

	} while (num <= 0);
	
	return num;
}
enPrimeNOTPrime Check_Number(int num)
{
	int C = round(num / 2);
	for (int counter = 2;counter <= C;counter++)
	{
		if (num % counter == 0)
			return enPrimeNOTPrime::NotPrime;
	}
	return enPrimeNOTPrime::Prime;
}
void Print_Number_Result(int num)
{
	switch (Check_Number(num))
	{
	case enPrimeNOTPrime::Prime:
		cout << "The number is Prime\n";
		break;
	case enPrimeNOTPrime::NotPrime:
		cout << "The number is not Prime\n";
		break;
	}

}
int main()
{
	Print_Number_Result(Read_Positive_Numbers("Please enter a Positive number: "));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter a Positive number: 5
The number is Prime
```
---
# <font color="#ffff00">(#39)</font>
![[2025-03-18 (6).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

float Read_TotalBill(string message)
{
	float num;
	cout << message;
	cin >> num;
	return num;
}
float Calc_and_Print_Reminders(float TotalBill, float CashPaid)
{
	return CashPaid - TotalBill;
}
int main()
{
	float TotalBill = Read_TotalBill("Please enter the TotallBill: ");
	float CashPaid = Read_TotalBill("Enter the CashPaid: ");
	cout << "\nThe TotalBill is = " << TotalBill << "\n";
	cout << "And CashPaid is = " << CashPaid << "\n";
	cout << "\n The Remainder is = " << Calc_and_Print_Reminders(TotalBill, CashPaid);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter the TotallBill: 20
Enter the CashPaid: 50

The TotalBill is = 20
And CashPaid is = 50

 The Remainder is = 30
```
---
# <font color="#ffff00">(#40)</font>
![[2025-03-18 (7).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

float Read_TotalValue(string message)
{
	float num;
	do
	{
		cout << message;
		cin >> num;

	} while (num <= 0);

	return num;
}
float Calc_TotalBill(float TotalBill)
{
	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;
	return TotalBill;
}
int main()
{
	float TotalBill = Read_TotalValue("Please enter the TotalBill: \n");
	cout << "\nThe TotalBill is = " << TotalBill;
	cout << "\nThe TotalValue is = " << Calc_TotalBill(TotalBill);
	
	

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter the TotalBill:
100

The TotalBill is = 100
The TotalValue is = 127.6
```