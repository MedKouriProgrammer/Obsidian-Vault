---
creation_date: 2025-11-18
tags:
  - Resources/Articles
Resource: https://programmingadvices.com/courses/introduction-to-programming-using-c-level-2/lectures/41496624
Author: "[[abu-hedhoud]]"
topic: "[[Lesson 27 - Two Dimensional Arrays]]"
---
> [!summary]-
> 

# <font color="#646a73">Lesson # 27 - Two Dimensional Arrays</font>
---
![[Pasted image 20251118174610.png]]

---
## <font color="#646a73">Homework: </font>
![[2025-11-19.png]]
### Input:
```cpp
#include<iostream>
#include<iomanip>
using namespace std; 

int main() {

	int arr1[10][10];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			 arr1[i][j] = (i + 1) * (j + 1);
		}
		
	}
	
	for (int i = 0; i < 10; i++) 
	{ 
		for (int j = 0; j < 10; j++) 
		{ 
			printf("%0*d ", 2, arr1[i][j]); 	
		}	
		cout << endl;
	}


	return 0;
}
```
### Output:
```
01 02 03 04 05 06 07 08 09 10
02 04 06 08 10 12 14 16 18 20
03 06 09 12 15 18 21 24 27 30
04 08 12 16 20 24 28 32 36 40
05 10 15 20 25 30 35 40 45 50	
06 12 18 24 30 36 42 48 54 60
07 14 21 28 35 42 49 56 63 70
08 16 24 32 40 48 56 64 72 80
09 18 27 36 45 54 63 72 81 90
10 20 30 40 50 60 70 80 90 100
```
