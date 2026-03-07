---
creation_date: 2025-11-15T09:10
tags:
  - Resources/Articles
Resource: https://programmingadvices.com/courses/introduction-to-programming-using-c-level-2/lectures/41952504
Author: "[[abu-hedhoud]]"
topic: "[[Lesson 24 - Float Format (printf)]]"
---
> [!summary]-
> 

# <font color="#646a73">Lesson #24 - Float Format (printf)</font>
---
![[Screenshot_20251108-152532_Moon+ Reader Pro.jpg]]
### Input:
```cpp
#include<iostream>
#include<iomanip>
using namespace std; 

int main() {

	double PI = 5.127537973;

	printf("Precision Specification of %.*f", 1, PI);
	printf("\nPrecision Specification of %.*f", 2, PI);
	printf("\nPrecision Specification of %.*f", 3, PI);
	printf("\nPrecision Specification of %.*f", 5, PI);

	cout << "\n------------\n";

	float num1 = 1.3, num2 = 3.45;

	printf("The float division of %.3f and %.3f is = %.3f", num1, num2, num1 / num2);

	cout << "\n------------\n";

	double d = 31.45;

	printf("The double value is: %.5f", d);
	printf("\nThe double value is: %.9f", d);


	return 0;
}
```
### Output:
```
Precision Specification of 5.1
Precision Specification of 5.13
Precision Specification of 5.128
Precision Specification of 5.12754
------------
The float division of 1.300 and 3.450 is = 0.377
------------
The double value is: 31.45000
The double value is: 31.450000000
```