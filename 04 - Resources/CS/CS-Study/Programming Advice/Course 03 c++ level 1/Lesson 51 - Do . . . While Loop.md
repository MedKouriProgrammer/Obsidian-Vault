---
date: 2025-03-10T14:44
tags:
  - Resources/Articles
---
Resource: [Lesson #51 - Do . . . While Loop - YouTube](https://www.youtube.com/watch?v=ZpnZs8uRTgI&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=57)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Do . . . While Loop]]
___
# Summary 

---
# Highlights & Notes

- # The difference between a [[While Loop]] and I [[Do . . . While Loop]] lies in when the condition is checked:

1. **while loop**:
    
    - The condition is checked **before** executing the code inside the loop.
    - If the condition is **false** initially, the code inside the loop will not be executed at all, not even once.
    
2. do while loop** (sometimes called **do-while loop** in certain programming languages):

- The code inside the loop is executed **first**, and then the condition is checked.
- This means the code will run at least once, even if the condition is false from the start.
---
- # Some things I have to know about [[Do . . . While Loop]].
- ![[2025-03-10 (4).png]]
---
- ![[2025-03-10 (5).png]]
- ## Note: [[Do . . . While Loop]] it do the body loop after it testing condition.
---
- ![[2025-03-10 (6).png]]
---
![[2025-03-10 (7).png]]
## Note: [[While Loop]] can’t outputting, because it's testing condition before type 6 < 5.
---
![[2025-03-10 (8).png]]

---
# Firstly, let’s see [[While Loop]] and then we’ll compare with [[Do . . . While Loop]].  
## Input
```cpp
#include<iostream>
using namespace std;

int read_whileage(int from, int to)
{
	int num;
	cout << "please enter your age from "<< from << " to " << to << "\n";
	cin >> num;

	while (num < from || num > to)// don't forget ( || ).
	{
		cout << "your age should be from " << from << " to " << to << "\n";
		cout << "try again\n";
		cin >> num;
	}
	cout << "your numbers are " << num << "\n";

	return num;// i can also calculate it like ( num * 10 || num / 10 )
}

int main()
{
	cout << read_whileage(18, 30);

	return 0;
}
------------------------------------------------------------------------------
int askuser(int from,int to)
{
	int num;
	do
	{
		cout << "plz enter number from " << from << " to " << to << "\n";
		cin >> num;

	} while (num < from || num > to);// don't forget ( || ).
		
	cout << "your grade is " << num << endl;

		return num;// i can also calculate it like ( num * 10 || num / 10 )
}
int main()
{
	cout << askuser(18, 30);

	return 0;
}
```
## output
```
plz enter number from 18 to 30
2
plz enter number from 18 to 30
20
your grade is 20
20
```
---
الفرق بين **while loop** و **do while loop** يكمن في طريقة تنفيذ الشرط:

1. **while loop**:
    
    - يتم التحقق من الشرط قبل تنفيذ الكود داخل الحلقة.
    - إذا كان الشرط **غير صحيح** من البداية، فلن يتم تنفيذ الكود داخل الحلقة حتى ولو مرة واحدة.

**do while loop** (تسمى أحيانًا **do-while loop** في بعض لغات البرمجة):

- يتم تنفيذ الكود داخل الحلقة أولاً **ثم** يتم التحقق من الشرط.
- يعني ذلك أن الكود داخل الحلقة سيتم تنفيذه مرة واحدة على الأقل حتى إذا كان الشرط غير صحيح من البداية.