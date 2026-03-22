---
date: 2025-03-01T14:33
tags:
  - Resources/Articles
---
Resource: [Lesson #20 - Arithmetic Operators - YouTube](https://www.youtube.com/watch?v=QQpYEMucN5k&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=27)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[arithmetic operators ]]
___
# Summary 
on conclusion we can say [[arithmetic operators]] is to calculate and i’ll need it on my [[programming]] life.

---
# Highlights & Notes
# what’s [[arithmetic operators]] and what’s his syntax.
- [[arithmetic operators]] is to  calculate the numbers and there are some example:
-                                                           int a =10 , b = 10;
- for combine we used the plus sign : a + b;
- for subtraction we used minus sign : a - b;
- for multiplication we used multiple sign : a * b; 
- to David numerator by de-numerator we used : a /b;
- to gives remainder to an intger deviation we used : a % b;
---
## let’s see this in action
## input
```cpp
#includ <<iostream>>
using namespace std;

int main()
{
int a = 10 , b = 10;

cout << "10 + 10 = " << a + b << endl;
cout << "10 - 10 = " << a - b << endl;
cout << "10 * 10 = " << a * b << endl;
cout << "10 / 10 = " << a / b << endl;
cout << "10 % 10 = " << a % b << endl;

return 0;
}
```

---
## output
```cpp
10 + 10 = 20
10 - 10 = 0
10 * 10 = 100 
10 / 10 = 1
10 % 10 = 0
```
---
# Homework of Algorithms and problem-solving of 7-9-10-14-15-17-19-20-21-22-31-35-39-40-42-43-47-48
## ![[2025-03-13 (11).png]]
 
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int num,Num;
	cout << "please enter a number\n";
	cin >> num;
	cin >> Num;
	cout << "\n";

	cout << "Half of " << num << " is " << num / 2 << endl;
	cout << "Half of " << Num << " is " << Num / 2 << endl;


	return 0;
}
```
##  Output
```
please enter a number
50
60

Half of 50 is 25
Half of 60 is 30
```
---
# (#9)
![[2025-03-14 (1).png]]
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	cout << "enter number 1\n";
	cin >> num1;
	cout << "enter number 2\n";
	cin >> num2;
	cout << "enter number 3\n";
	cin >> num3;
	
	cout << endl;
	int sum;
	sum= num1 + num2 + num3;
	cout << sum;

	return 0;
}
```
## Output
```
enter number 1
10
enter number 2
20
enter number 3
30

60
```
---
# (#10)
![[2025-03-14 (2).png]]
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int mark1, mark2, mark3;
	cout << "enter number 1\n";
	cin >> mark1;
	cout << "enter number 2\n";
	cin >> mark2;
	cout << "enter number 3\n";
	cin >> mark3;
	
	cout << endl;
	
	int average;
	average= (mark1 + mark2 + mark3) / 3;
	cout << average;


	return 0;
}
```
## Output
```
enter number 1
90
enter number 2
80
enter number 3
70

80
```
---
## (#14)
![[2025-03-21 1.png]]
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "please enter numbre 1" << "\n";
	cin >> num1;
	cout << "and number 2" << "\n";
	cin >> num2;
	
	cout << "\n";
	
	cout << num1 << "\n";
	cout << num2 << "\n";
	
	cout << "\n";
	
	int swap;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << num1 << "\n";
	cout << num2 << endl;

	return 0;
}
```
## Output
```
please enter numbre 1
10
and number 2
20

10
20

20
10
```
---
## (#15)
![[2025-03-14 (8).png]]
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int a = 10, b = 20;
	int Area;
	Area = a * b;
	cout << Area << endl;

	return 0;
}
```
## Output
```
200
```
---
# (#17)
![[2025-03-15 (1).png]]
## Input 
```cpp
#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "please enter number a\n";
	cin >> a;
	cout << "and b\n";
	cin >> b;
	
	cout << "\n";

	int Area;
	Area = a / 2 * b;
	cout << Area << endl;

	return 0;
}
```
## Output
```
please enter number a
10
and b
8

40
```
---
## (#19)
![[2025-03-15 (3).png]]
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int D;
	cout << "please enter Number D\n";
	cin >> D;
	
	cout << "\n";

	int PI = 3.14;
	int Area = (PI * D * D) / 4;
	cout << Area;

	return 0;
}
```
## Output
```
please enter Number D
10

78.5
```
---
# (#21)
![[2025-03-15 (6).png]]
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int L;
	cout << "please enter Number L\n";
	cin >> L;

	cout << "\n";

	float PI = 3.14;
	float Area = (L * L) / (4 * PI);
	cout << Area;

	return 0;
}
```
## Output
```
Please enter Number L
20

31.8471
```
---
# (#22)
![[2025-03-15 (7).png]]
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	float a, b;
	cout << "please enter Number a\n";
	cin >> a;
	cout << "and b\n";
	cin >> b;

	cout << "\n";

	float PI = 3.14;
	float Area = (PI * b * b / 4) * ((2 * a - b) / (2 * a + b));
	cout << Area;

	return 0;
}
```
## Output
```
please enter Number a
20
and b
10

47.1
```
---
# (#31)
![[2025-03-16 (8).png]]
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "enter a number\n";
	cin >> num;
	cout << "\n";

	int number1, number2, number3;
	number1 = num * num;
	number2 = num * num * num;
	number3 = num * num * num * num;

	cout << number1 << "\n";
	cout << number2 << "\n";
	cout << number3 << endl;

	return 0;
}
```
## Output
```
enter a number
3

9
27
81
```
---
# (#35)
![[2025-03-18.png]]
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int penny, nickels, dimes, quarters, dollars;
	cout << "Pennyies = ";
	cin >> penny;
	
	cout << "\n";

	cout << "Nickels = ";
	cin >> nickels;

	cout << "\n";

	cout << "Dimes = ";
	cin >> dimes;

	cout << "\n";

	cout << "Quarters = ";
	cin >> quarters;

	cout << "\n";

	cout << "Dollars = ";
	cin >> dollars;
	cout << "\n";

	int Total_pennies = penny * 1 + nickels * 5 + dimes * 10 + quarters * 25 + dollars * 100;
	float Total_Dollars = Total_pennies / 100;

	cout << Total_pennies << " Pennies\n";
	cout << Total_Dollars << " Dollars" << endl;

	return 0;
}
```
## Output
```cpp
Pennyies = 5

Nickels = 5

Dimes = 5

Quarters = 5

Dollars = 5

705 Pennies
7 Dollars
```
---
# (#39)
![[2025-03-18 (6).png]]
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int T_Bill, C_Paid;
	cout << "enter TotalBill \n";
	cin >> T_Bill;
	cout << "and CashPiad\n";
	cin >> C_Paid;

	cout << endl;

	int Remainder = C_Paid - T_Bill;
	cout << Remainder;

	return 0;
}
```
## Output
```
enter TotalBill
20
and CashPiad
50

30
```
---
# (#40)
![[2025-03-18 (7).png]]
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int bill_value;
	cout << "enter your BillValue\n";
	cin >> bill_value;

	cout << endl;

	float Total_Bill = bill_value * 1.1;
	Total_Bill = Total_Bill * 1.16;

	cout << Total_Bill;

	return 0;
}
```
## Output
```cpp
enter your BillValue
100

127.6
```
---
# (#42)
![[Screenshot (1).png]]
# Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int num_day, num_hours, num_minutes, num_seconds;
	cout << "enter number of days\n";
	cin >> num_day;
	cout << "and of hours\n";
	cin >> num_hours;
	cout << "and of minutes\n";
	cin >> num_minutes;
	cout << "and of seconds\n";
	cin >> num_seconds;

	cout << endl;

	double d_seconds = (num_day * 24 * 60 * 60) + (num_hours * 60 * 60) + (num_minutes * 60) + num_seconds;
	cout << d_seconds << " Seconds";

	return 0;
}
```
## output
```
enter number of days
2
and of hours
5
and of minutes
45
and of seconds
35

193535 Seconds
```
---
# (#43)
![[2025-03-19 (2).png]]
## Input
```cpp

```
## Output
```

```
---
# (#47)
![[2025-03-20 (3).png]]
## Input
```cpp
#include <iostream>  
using namespace std;

int main() {
    int l_amount, M_payments;
    cout << "enter Loan Amount\n";
    cin >> l_amount;
    cout << "and Monthly Payment\n";
    cin >> M_payments;

    cout << "\n";

    int Total_month = l_amount / M_payments;
    cout << Total_month << " Months";


    return 0;
}
```
## Output
```
enter Loan Amount
5000
and Monthly Payment
500

10 Months
```
---
# (#48)
![[2025-03-20 (4).png]]
# Input
```cpp
#include <iostream>  
using namespace std;

int main() {
    int l_amount, num_month;
    cout << "Enter Loan Amount\n";
    cin >> l_amount;
    cout << "And how many months you need to settle the loan\n";
    cin >> num_month;

    cout << "\n";

    int Total_payment = l_amount / num_month;
    cout << Total_payment;


    return 0;
}
```
## Output
```
Enter Loan Amount
5000
And how many months you need to settle the loan
10

500
```