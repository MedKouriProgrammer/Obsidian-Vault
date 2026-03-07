---
date: 2025-04-15T14:37
tags:
  - Resources/Articles
---
Resource: [Problems #26 to #30 Solutions - YouTube](https://www.youtube.com/watch?v=UcvvRplXhoQ&list=PL3X--QIIK-OEwPmZVfltqCYy6_RuwXr4A&index=8)
Author: [[abu-hedhoud]]
___
# <font color="#ffff00"><u>Homework: from 26 to 30 Solutions.</u></font>
![[2025-03-16.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

int Read_Numbers()
{
	int num;
	cout << "Please enter your number: ";
	cin >> num;
	return num;
}
void Print_Range_From1_to_N(int num)
{
	for (int counter = 1;counter <= 10;counter++)
	{
		cout << counter << endl;
	}
}
int main()
{
	Print_Range_From1_to_N(Read_Numbers());

	return 0;
}
```
## <font color="#92d050">Output</font> 
```
Please enter your number: 10
1
2
3
4
5
6
7
8
9
10
```
---
# <font color="#92d050"><font color="#ffff00">(#27)</font></font>
![[2025-03-16 (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

int Read_Numbers()
{
	int num;
	cout << "Please enter your number: ";
	cin >> num;
	return num;
}
void Print_Range_From1_to_N(int num)
{
	for (int counter = num;counter >= 1;counter--)
	{
		cout << counter << endl;
	}
}
int main()
{
	Print_Range_From1_to_N(Read_Numbers());

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter your number: 10
10
9
8
7
6
5
4
3
2
1
```
---
# <font color="#92d050"><font color="#ffff00">(#28)</font></font>
![[2025-03-16 (2).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

enum enCheck_Odd_Even { odd = 1,even=2};
int Read_Numbers()
{
	int num;
	cout << "Please enter your number: ";
	cin >> num;
	return num;
}
enCheck_Odd_Even ChecK_Number_Odd_Even(int num)
{
	if (num % 2 != 0)
		return enCheck_Odd_Even::odd;
	else
		return enCheck_Odd_Even::even;
}
void Print_Range_From1_to_N(int num)
{
	int sum = 0;

	for (int counter = 1;counter <= num;counter+=2)
	{ cout << counter << "\n";
	    
	    if (ChecK_Number_Odd_Even(counter) == enCheck_Odd_Even::odd)
	    {
		    sum += counter;
	    }

	}
	cout << endl << "The Sum Odd of N is = " << sum;
}
int main()
{
	Print_Range_From1_to_N(Read_Numbers());

	return 0;
}

}```
## <font color="#92d050">Output</font>
```
Please enter your number: 10
1
3
5
7
9

The Sum Odd of N is = 25
```
---
# <font color="#92d050"><font color="#ffff00">(#29)</font></font>
![[2025-03-16 (3).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

enum enCheck_Odd_Even { odd = 1,even=2};
int Read_Numbers()
{
	int num;
	cout << "Please enter your number: ";
	cin >> num;
	return num;
}
enCheck_Odd_Even ChecK_Number_Odd_Even(int num)
{
	if (num % 2 != 0)
		return enCheck_Odd_Even::odd;
	else
		return enCheck_Odd_Even::even;
}
void Print_Range_From1_to_N(int num)
{
	int sum = 0;

	for (int counter = 0;counter <= num;counter+=2)
	{ cout << counter << "\n";
	    
	    if (ChecK_Number_Odd_Even(counter) == enCheck_Odd_Even::even)
	    {
		    sum += counter;
	    }

	}
	cout << endl << "The Sum Even of N is = " << sum;
}
int main()
{
	Print_Range_From1_to_N(Read_Numbers());

	return 0;
}

```
## <font color="#92d050">Output</font>
```
Please enter your number: 10
0
2
4
6
8
10

The Sum Even of N is = 30
```
---
# <font color="#92d050"><font color="#ffff00">(#30)</font></font>
![[2025-03-16 (4).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
using namespace std;

int Read_Positive_number(string Messege)
{
	int num;
	do
	{
		cout << Messege << "\n";
		cin >> num;
	} while (num <= 0);
	return num;
}
int Calc_Print_Factorial(int num)
{
	int factorial = 1;
	for (int counter = num;counter >= 1;counter--)
	{
		factorial *= counter;
	}
	cout << endl << "The factorial of " << num << " is = " << factorial;
	return factorial;
}
int main()
{
	Calc_Print_Factorial(Read_Positive_number("Enter a positive number of N?"));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter a positive number of N?
-4
Enter a positive number of N?
6

The factorial of 6 is = 720
```