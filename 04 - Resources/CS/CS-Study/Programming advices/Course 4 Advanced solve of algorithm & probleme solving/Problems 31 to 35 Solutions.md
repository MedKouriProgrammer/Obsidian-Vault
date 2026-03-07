---
date: 2025-04-17T13:21
tags:
  - Resources/Articles
---
Resource: [Problems #31 to #35 Solutions - YouTube](https://www.youtube.com/watch?v=E-29CYjOBME&list=PL3X--QIIK-OEwPmZVfltqCYy6_RuwXr4A&index=9)
Author: [[abu-hedhoud]]
___
# <font color="#ffff00"><u>Homework: from 31 to 35 Solutions.</u></font>
![[2025-03-16 (8).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

int Read_Number()
{
	int number;
	cout << "Please enter a number: \n";
	cin >> number;
	return number;
}
void Pow_of_1_2_3(int number)
{
	int a, b, c;
	a = number * number;
	b = number * number * number;
	c = number * number * number * number;
	cout << "\n" << a << "\n";
	cout << b << endl;
	cout << c;
}
int main()
{
	Pow_of_1_2_3(Read_Number());

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter a number:
3

9
27
81
```
---
# <font color="#92d050"><font color="#ffff00">(#32)</font></font>
![[2025-03-16 (10).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

int Read_Number()
{
	int num;
	cout << "Please enter a number: ";
	cin >> num;
	return num;
}
int Read_M()
{
	int num;
	cout << "Please enter number M: ";
	cin >> num;
	return num;
}
int Print_Pow_of_Numbers(int num,int M)
{
	if (M == 0)
	{
		return 1;
	}

	int p = 1;
	
	for (int counter = 1;counter <= M;counter++)
	{
		p = p * num;
	}
	return p;
}
int main()
{
	cout << "\nResult is = " << Print_Pow_of_Numbers(Read_M(), Read_Number());

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter a number: 2
Please enter number M: 4

Result is = 16
```
---
# <font color="#92d050"><font color="#ffff00">(#33)</font></font>
![[2025-03-17.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

int Read_Grade_In_Range(int from,int to)
{
	int grade;

	do
	{
		cout << "Please enter a grade between 0 to 100?\n";
		cin >> grade;

	} while (grade<from || grade>to);

	return grade;
}
char Print_Result_of_Grade(int grade)
{
	cout << endl;

	if (grade >= 90)
	{
		return 'A';
	}
	else if (grade >= 80)
	{
		return 'B';
	}
	else if (grade >= 70)
	{
		return 'C';
	}
	else if (grade >= 60)
	{
		return 'D';
	}
	else if (grade >= 50)
	{
		return 'E';
	}
	else
		return 'F';
	
	return grade;
}
int main()
{

	cout << Print_Result_of_Grade(Read_Grade_In_Range(0, 100));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter a grade between 0 to 100?
95

A
```
---
# <font color="#92d050"><font color="#ffff00">(#34)</font></font>
![[2025-03-17 (3).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

int Read_Total_Sales()
{
	int Total_Sales;
	cout << "Please enter your Totalsales: ";
	cin >> Total_Sales;
	
	return Total_Sales;
}
float Print_Percentage_Result(int Total_Sales)
{

	if (Total_Sales >= 1000000)
	{
		return 0.01;
	}
	else if (Total_Sales >= 500000)
	{
		return 0.02;
	}
	else if (Total_Sales >= 100000)
	{
		return 0.03;
	}
	else if (Total_Sales >= 50000)
	{
		return 0.05;
	}
	else
	{
		return 0.00;
	}
	return Total_Sales;
}
float Calc_Ptint_Result(int Total_Sales)
{
	return Print_Percentage_Result(Total_Sales) * Total_Sales;
}
int main()
{
	float Total_sales = Read_Total_Sales();
	cout << "\nYour Percentage is = " << Print_Percentage_Result(Total_sales);
	cout << "\nTotal comission is = " << Calc_Ptint_Result(Total_sales);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter your Totalsales: 110000

Your Percentage is = 0.03
Total comission is = 3300
```
---
# <font color="#92d050"><font color="#ffff00">(#35)</font></font>
![[2025-03-18.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

struct strBanck
{
	int penny, nickels, dimes, quarters, dollars;
};
strBanck Read_Banck_Content()
{
	strBanck banck_info;
	cout << "Penny = ";
	cin >> banck_info.penny;
	cout << "Nickel = ";
	cin >> banck_info.nickels;
	cout << "Dimes = ";
	cin >> banck_info.dimes;
	cout << "Quarter = ";
	cin >> banck_info.quarters;
	cout << "Dollar = ";
	cin >> banck_info.dollars;

	return banck_info;
}
int Calc_Total_pennies_Dollars(strBanck banck_info)
{
	 int PenniesTotal = banck_info.penny*1 + banck_info.nickels*5 + banck_info.dimes*10 + banck_info.quarters*25 + banck_info.dollars*100;
	 return PenniesTotal;
	 
}
int main()
{
	int Total_Pennies = Calc_Total_pennies_Dollars(Read_Banck_Content());
	cout << "\n" << "Total Pennies = " << Total_Pennies << "\n";
	cout << "Total Dollars = " << (float)Total_Pennies / 100 << endl;

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Penny = 5
Nickel = 5
Dimes = 5
Quarter = 5
Dollar = 5

Total Pennies = 705
Total Dollars = 7.05
```
