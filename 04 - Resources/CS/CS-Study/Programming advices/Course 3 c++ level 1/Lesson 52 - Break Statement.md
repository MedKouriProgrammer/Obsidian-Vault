---
date: 2025-03-10T16:46

tags:
  - Resources/Articles
  - Todo
---
Resource: [Lesson #52 - Break Statement - YouTube](https://www.youtube.com/watch?v=YBGdc9HrSyo&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=58)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Break Statement]]
___
# Summary 

---
# Highlights & Notes

- # What’s [[Break Statement]] & what’s there use.
- The **break** statement is used to exit a loop (like `for`, `while`) or a `switch` statement before it has completed its full execution.

**How it works:**

- When the program encounters a **break** inside a loop or a `switch` statement, it **immediately exits** that loop or `switch` and continues executing the code after it.
- ![[2025-03-10 (9).png]]
---
# Let’s see this in action
## input
```cpp
#include<iostream>
using namespace std;

int main()
{
for(int a =1;a <= 10; a++)
    {
       if(a==6)
       {
       break;
       }
       cout << a << endl;
    
    }

   return 0;
}
```
## output
```
1
2
3
4
5
```
---
# Homework:
![[2025-03-10 (10).png]]
# Solution:
## input
```cpp
#include<iostream>
using namespace std;

int main()
{
  int arr[10] ={10,20,44,55,33,22,99,88,99,100};
  int serch = 20;
  for(int a = 1;a <= 10; a++)
      {
         cout << "we are at ateration " << a + 1 << "\n;
         if(serch==arr[a])
         cout << "\n" << serch << " we find it, it is " << a << endl;
         break;
      }

  return 0; 
}
```
## output
```
we are at ateration 1
we are at ateration 2

20 we find it, it is 1

```
---
عبارة **break** هي طريقة تستخدم للخروج من حلقة (مثل `for`, `while`) أو من جملة `switch` قبل أن تنتهي من تنفيذ كل تكرار أو جميع الخيارات.

**كيف تعمل؟**

- عندما يصل البرنامج إلى **break** داخل حلقة أو جملة `switch`، فإنه **يخرج فورًا** من تلك الحلقة أو الجملة، ويتابع التنفيذ من السطر الذي يليها.

**باختصار:**

- **`break`** يساعد في الخروج من الحلقات أو الجمل المبكرة، مما يوفر وقت التنفيذ أو يوقف عمليات غير ضرورية.