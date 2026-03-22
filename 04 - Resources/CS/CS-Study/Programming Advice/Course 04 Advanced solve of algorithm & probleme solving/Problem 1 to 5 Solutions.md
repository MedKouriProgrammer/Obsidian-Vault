---
date: 2025-04-05T13:55
tags:
  - Resources/Articles
---
Resource: [Problem #1 to #5 Solutions - YouTube](https://www.youtube.com/watch?v=ifoC6FFeq8M&list=PL3X--QIIK-OEwPmZVfltqCYy6_RuwXr4A&index=4)
Author: [[abu-hedhoud]]
___
# <font color="#ffff00"><u>Homework: from 1 to 5 Solutions.</u></font>
![[2025-03-13 (3).png]] 
# <font color="#ffff00">(#1)</font>
## <font color="#92d050">input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;

void Print_name(string name)
{
	cout << "Your name is: " << name;
}
int main()
{
	Print_name("Mohemmed");

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Your name is: Mohemmed
```
---
# <font color="#92d050"><font color="#ffff00">(#2)</font></font>
![[2025-03-13 (4).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;

string Read_name()
{
	string name;
	cout << "What's your name?\n";
	getline(cin, name);
	return name;
}
void Print_name(string name)
{
	cout << "\nYour name is: " << name;
}
int main()
{
	string name = Read_name();
	Print_name(name);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
What's your name?
zakaria medkouri

Your name is: zakaria medkouri
```
## <font color="#0070c0"><u>Note: there are two ways to solving these problems</u></font>.
---
# <font color="#92d050"><font color="#ffff00">(#3)</font></font>
![[2025-03-13 (6).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;

enum ennumber_type{even=1,odd=2};
int Read_num()
{
	int num;
	cout << "Please enter a number: ";
	cin >> num;
	return num;
}
ennumber_type Check_num_odd_even(int num)
{
	int result = num % 2;
	if (result == 0)
		return ennumber_type::even;
	else
		return ennumber_type::odd;
}
void Print_num_result_type(ennumber_type number_type)
{
	if (number_type == ennumber_type::even)
		cout << "\nThe number is even\n";
	else
		cout << "The number is odd\n";
	
}
int main()
{
	Print_num_result_type(Check_num_odd_even(Read_num()));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter a number: 5
The number is odd
```
---
# <font color="#92d050"><font color="#ffff00">(#4)</font></font>
![[2025-03-13 (7).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;

struct strinfo
{
	int age;
	bool driver_lisence;
};
strinfo Read_persone_info()
{
	strinfo info;

	cout << "Please enter your age: ";
	cin >> info.age;
	cout << "\nHave you a driver lisence? (yes:1)(no:0)\n";
	cin >> info.driver_lisence;
	
	return info;
}
bool Check_persone_info(strinfo info)
{
	return (info.age > 21 && info.driver_lisence);
};
void Print_persone_info(strinfo info)
{
	if (Check_persone_info(info))
	{
		cout << "\nHired\n";
	}
	else
	{
		cout << "\nRejected\n";
	}
}
int main()
{

	Print_persone_info(Read_persone_info());

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter your age: 22

Have you a driver lisence?
1

Hired
```
---
# <font color="#92d050"><font color="#ffff00">(#5)</font></font>
![[2025-03-13 (8).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;

struct strinfo
{
	int age;
	bool driver_lisence;
	bool has_recommendation;
};
strinfo Read_persone_info()
{
	strinfo info;

	cout << "Please enter your age: ";
	cin >> info.age;
	cout << "\nHave you a driver lisence? (yes:1)(no:0)\n";
	cin >> info.driver_lisence;
	cout << "\nHave you Recommendation? (yes:1)(no:0)\n";
	cin >> info.has_recommendation;

	return info;
}
bool Check_persone_info(strinfo info)
{
	if (info.has_recommendation)
	{
		return true;
	}
	else
	{
		return (info.age > 21 && info.driver_lisence);
	}
};
void Print_persone_info(strinfo info)
{
	if (Check_persone_info(info))
	
		cout << "\nHired\n";
	
	else
	
		cout << "\nRejected\n";
	
}
int main()
{

	Print_persone_info(Read_persone_info());

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter your age: 11

Have you a driver lisence? (yes:1)(no:0)
0

Have you Recommendation? (yes:1)(no:0)
1

Hired
```