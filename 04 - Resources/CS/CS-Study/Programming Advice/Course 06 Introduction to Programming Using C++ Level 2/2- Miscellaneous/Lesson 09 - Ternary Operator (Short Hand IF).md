---
creation_date: 2025-11-08
tags:
  - Resources/Articles
Resource: https://programmingadvices.com/courses/introduction-to-programming-using-c-level-2/lectures/41496724
Author: "[[abu-hedhoud]]"
topic: "[[Lesson 09 - Ternary Operator (Short Hand IF)]]"
---
> [!summary]-
> 

# <font color="#646a73">Lesson #09 - Ternary Operator: Short Hand IF</font>
---
![[Screenshot_20251108-152439_Moon+ Reader Pro.jpg]]

### Input:
```cpp
#include<iostream>
#include "MyInputLib.h"

using namespace std; 


int main() { 
	
	int Number = 0;
	string Result;

	cout << "Enter your number: ";
	cin >> Number;

	Result = (Number > 0) ? "\nIs positive number." : "\nIs negative namber.";

	cout << Result;


	return 0; 
}
```

```cpp
#include<iostream>
#include "MyInputLib.h"

using namespace std; 


int main() { 
	
	int Number = 0;
	string Result;

	cout << "Enter your number: ";
	cin >> Number;

	Result = (Number == 0) ? "\nIt's zero" : ((Number > 0) ? "\nIs positive number." : "\nIs negative namber.");

	cout << Result;


	return 0; 
}
```