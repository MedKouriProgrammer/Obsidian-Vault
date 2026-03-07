---
date: 2025-03-08T11:15
tags:
  - Resources/Articles
---
Resource: [Lesson #42 - Conditional Statements: IF, IF ... Else Statement - YouTube](https://www.youtube.com/watch?v=3ehONJD7r3g&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=48)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Conditional Statements: IF, IF ... Else Statement]]
___
# Summary 

---
# Highlights & Notes

- # What’s syntax of # Conditional Statements: IF, IF ... Else statement, let’s see it on program.
![[2025-03-08 (3).png]]
## Input 
```cpp
#include<iostream>
using namespace std;

int main()
{
int a = 5 , b = 8;
  if(a == 10 , b <=20)// i can also apply [[lesson 25 - logical operators]]
      {
           cout << "your number is successful\n";
      }
      
           cout << "thank you\n";
}
```
## Note: if I want to achieve one of conditions or two or more, I should apply [[lesson 25 - logical operators]]
## output: true
```cpp
your number is successful
thank you
```
## output: false
```cpp
thank you
```
---
# Let’s see the [[syntax]] of IF ... Else statement with asking the user.
![[2025-03-08 (4).png]]
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "please enter your number\n";
	cin >> a;
	cout << "and the seconde number\n";
	cin >> b;

	if (a <= 10 && b <= 20)
	{

		cout << "your number has sucsessfull!\n";
	}
	else
	{
		cout << "please the number should be less than 10!\n";
		cout << " try again\n";
	}
	cout << "thank you" << endl;

	return 9;
}
```
## output: true
```cpp
please enter your number
5
and the seconde number
20
your number has sucsessfull!
thank you
```
## output false
```cpp
please enter your number
20
and the seconde number
20
please the number should be less than 10!
 try again
thank you
```
---
# Homework of algorithm and problem-solving:4-8-11-24-49.
![[2025-03-13 (7).png]]
## Input 
```cpp
#include <iostream>  
using namespace std;

int main()
{
	int age;
	string Driver_license;
	cout << "Please enter your age\n";
	cin >> age;
	cout << "Do you have a driver license yes/no\n";
	cin >> Driver_license;

	if (age > 21 && Driver_license == "yes")
	{
		cout << "Hired\n";
	}
	else
	{
		cout << "Rejected\n";
	}
	cout << "Thanks you\n";

	return 0;
}
```
## Output: True
```
Please enter your age
22
Do you have a driver license yes/no
yes
Hired
Thanks you
```
## Output: no
```
Please enter your age
22
Do you have a driver license yes/no
no
Rejected
Thanks you
```
---
# (#8)
![[2025-03-14.png]]
## Input
```cpp
#include <iostream>  
using namespace std;

int main()
{
	int Mark;
	cout << "Please enter your Mark\n";
	cin >> Mark;
	cout << "\n";

	if (Mark >= 50)
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "Fail";
	}


	return 0;
}
```
## Output: true
```
Please enter your Mark
88

PASS
```
## Output: False
```
Please enter your Mark
22

Fail
```
---
# (#11)
![[2025-03-14 (3).png]]
## Input
```cpp
#include <iostream>  
using namespace std;

int main()
{
	int Mark1, Mark2, Mark3, avr;
	cout << "Please entre your Mark 1\n";
	cin >> Mark1;
	cout << "And Mark 2\n";
	cin >> Mark2;
	cout << "And Mark 3\n";
	cin >> Mark3;
	cout << "\n";

	avr = (Mark1 + Mark2 + Mark3) / 3;
	cout << avr << "\n";
	
	if (avr >= 50)
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL";
	}

	return 0;
}
```
## Output: true
```
Please entre your Mark 1
90
And Mark 2
80
And Mark 3
70

80
PASS
```
---
# (#24)
![[2025-03-15 (9).png]]
## Input
```cpp
#include <iostream>  
using namespace std;

int main()
{
	int age;
	cout << "Please entre your age \n";
	cin >> age;
	cout << "\n";

	if (age >=18 , age <=45)
	{
		cout << "Valid Age" << endl;
	}
	else
	{
		cout << "Invalid Age";
	}

	return 0;
}
```
## Output: true
```
Please entre your age
33

Valid Age
```
## Output: false
```
Please entre your age
56

Invalid Age
```
---
# (49)
![[2025-03-20 (5).png]]
## Input
```cpp
#include <iostream>  
using namespace std;

int main()
{
	int ATM_PIN;
	cout << "Please entre ATM PIN \n";
	cin >> ATM_PIN;
	cout << "\n";

	if (ATM_PIN==1234)
	{
		cout << "Your Balance is: 7500" << endl;
	}
	else
	{
		cout << "Wrong PIN";
	}

	return 0;
}
```
## Output: true
```
Please entre ATM PIN
1234

Your Balance is: 7500
```
## Output: false
```
Please entre ATM PIN
5678

Wrong PIN
```
