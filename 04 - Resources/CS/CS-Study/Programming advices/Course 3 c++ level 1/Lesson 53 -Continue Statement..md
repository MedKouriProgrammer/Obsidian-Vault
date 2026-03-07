---
date: 2025-03-11T06:26
tags:
  - Resources/Articles
---
Resource: [Lesson #53 - Continue Statement - YouTube](https://www.youtube.com/watch?v=hmgK6YNrZE4&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=59)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Continue Statement]]
___
# Summary 

---
# Highlights & Notes

- # What’s [[Continue Statement]] & what’s there use
- The `continue` statement is used in programming languages like Python, C++, and Java to skip the remaining code inside a loop for the current iteration and jump to the next iteration of the loop.

In other words, when the `continue` statement is encountered, the program skips the rest of the code inside the loop for that iteration and proceeds with the next iteration.
- ![[2025-03-11.png]]
---
# Homework.
## Input
```cpp
#include<iostream>
using namespace std;

int main() {

	int sum = 0;
	int user = 0;

	for (int a = 1;a <= 5;a++)// i think ( a<=5 ) is like an array contains 5 arrays.
	{
		cout << "enter a number: ";
		cin >> user;
		if (user > 50)
		{
			cout << "this number is less than 50, will not be calculate\n";
			continue;
		}
		
	}
	cout << "\n";
	cout<< "the result is " << sum + user;

	return 0;
}
```
## output
```
enter a number: 20
enter a number: 10
enter a number: 55
this number is less than 50, will not be calculate
enter a number: 20
enter a number: 10

the result is 10
```
---
الـ `continue` هو عبارة عن تعليمة في لغات البرمجة مثل بايثون وC++ وJava، وتستخدم داخل الحلقات (مثل: `for` و `while`) للانتقال مباشرة إلى التكرار التالي من الحلقة، متجاهلاً ما تبقى من التعليمات بعد التعليمة `continue` في التكرار الحالي.

بمعنى آخر، عندما يتم تنفيذ تعليمة `continue` في حلقة، يقوم البرنامج بتخطي باقي الكود داخل الحلقة ويبدأ التكرار التالي من الحلقة.

### متى نستخدم `continue`؟

- يمكن استخدام `continue` عندما تريد تخطي جزء من الكود في حالة معينة داخل الحلقة.
- مفيد في الحلقات الكبيرة التي تحتوي على شروط متعددة ولا ترغب في إتمام كل الشروط.