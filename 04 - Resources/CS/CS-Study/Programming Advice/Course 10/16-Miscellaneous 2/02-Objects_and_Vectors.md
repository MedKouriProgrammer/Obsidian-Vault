---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Objects and Vectors</font>
---
![[Screenshot_20260420-141157_Moon+ Reader Pro.jpg]]

---
### <font color="#c9c441">Input:</font>
```cpp
#include<iostream>
#include<vector>

using namespace std;

class clsA
{
public:
	//Parametarized Constructor
	clsA(int value)
	{
		x = value;
	}

	int x;

	void Print()
	{
		cout << "The value of x=" << x <<endl;
	}

};


int main() 

{
	
	vector <clsA> v1;
	short NumberOfObjects=5;

	// inserting object at the end of vector
	for (int i = 0; i < NumberOfObjects; i++)
	{
		v1.push_back(clsA(i));
	}

	// printing object content
	for (int i = 0; i < NumberOfObjects; i++)
	{
		v1[i].Print();

	}

	system("pause>0");

}
```
Output:
```
The value of x=0
The value of x=1
The value of x=2
The value of x=3
The value of x=4
```