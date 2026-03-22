---
creation_date: 2025-11-15
tags:
  - Resources/Articles
Resource: https://programmingadvices.com/courses/introduction-to-programming-using-c-level-2/lectures/41496692
Author: "[[abu-hedhoud]]"
topic: "[](Lesson%2023%20-%20Integer%20Format%20(printf).md)"
---
> [!summary]-
> 

# <font color="#646a73">Lesson #23 - Integer Format (printf)</font>
---
![[Screenshot_20251108-152529_Moon+ Reader Pro.jpg]]

---
### Input:
```cpp
#include<iostream>
#include<iomanip>
using namespace std; 

int main() {

	int digit1 = 4, digit2 = 60;

	printf("The digit 1 is = %d, And the digit 2 = %d", digit1, digit2);

	printf("\n\nWe will make number %d to 'Two' numbers = %0*d ", digit1, 2, digit1);
	printf("\nWe will make number %d to 'Five' numbers = %0*d\n", digit2, 4, digit2);

	printf("The number %d + %d = %d", digit1, digit2, digit1 + digit2);



	return 0;
}
```
### Output:
```
The digit 1 is = 4, And the digit 2 = 60

We will make number 4 to 'Two' numbers = 04
We will make number 60 to 'Five' numbers = 0060
The number 4 + 60 = 64
```