---
creation_date: 2025-11-13
tags:
  - Resources/Articles
Resource: https://programmingadvices.com/courses/introduction-to-programming-using-c-level-2/lectures/41496622
Author: "[[abu-hedhoud]]"
topic: "[[Lesson 19 - Recursion]]"
---
> [!summary]-
> 

# <font color="#646a73">Lesson #19 - Recursion</font>
---
![[Screenshot_20251108-152511_Moon+ Reader Pro 1.jpg]]

---
## <font color="#646a73">Homework:</font>
![[2025-11-15 1.png]]
### <font color="#ffff00">Input: problem 1</font>
```cpp
#include<iostream>
using namespace std; 

void TestRecursion(int num1, int num2) {     
	
	if (num2 >= num1)
	{
		cout << num2 << endl;
		TestRecursion(num1, num2 - 1);
	}
	
} 

int main() {     
	
	TestRecursion(1,10);
	

	return 0; 
} 
```
### <font color="#ffff00">Output:</font>
```
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
### <font color="#ffff00">Input: problem 2</font>
```cpp
#include<iostream>
using namespace std; 

int TestRecursion(int Base, int Power) {     
	
	if (Power == 0)
		return 1;
	else
		return (Base * TestRecursion(Base, Power - 1));
	
} 

int main() {     
	
	cout << TestRecursion(2,4);
	

	return 0; 
} 
```
### <font color="#ffff00">Output:</font>
```
16
```
---
