---
creation_date: 2026-03-28
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Objects and Dynamic Array</font>
---

### <font color="#c9c441">Input:</font>
```cpp
#include<iostream>
#include<vector>

using namespace std;

class clsA
{
public:

	// dummy constructor
	clsA() {}

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
	short NumberOfObjects = 5;

	// allocating dynamic array
   // of Size NumberOfObjects using new keyword

	clsA * arrA = new clsA[NumberOfObjects];

	// calling constructor
	// for each index of array
	for (int i = 0; i < NumberOfObjects; i++) {
		arrA[i] = clsA(i);
	}

	// printing contents of array
	for (int i = 0; i < NumberOfObjects; i++) {
		arrA[i].Print();
	}

	return 0;

	
	system("pause>0");

}
```
