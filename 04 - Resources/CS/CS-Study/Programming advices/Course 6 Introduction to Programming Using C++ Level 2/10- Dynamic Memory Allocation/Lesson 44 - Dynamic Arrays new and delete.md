---
creation_date: 2025-12-01
tags:
  - Resources/Articles
Resource: https://programmingadvices.com/courses/1827205/lectures/41773042
Author: "[[abu-hedhoud]]"
top: "[[  Lesson 44 - Dynamic Arrays new and delete]]"
---
> [!summary]-
> 

# <font color="#646a73">Lesson #44 - Dynamic Arrays: new and delete</font>
---
![[Screenshot_20251108-152654_Moon+ Reader Pro.jpg]]

---
### My input: 
```cpp
#include<iostream>
#include<vector>
using namespace std;

void ReadNumberAndGrade_Students(int* &ptr, int &Num_Students) {
	
	
	cout << "Enter the number of students: ";
	cin >> Num_Students;

	ptr = new int[Num_Students];


	for (int i = 0; i < Num_Students; i++)
	{
		cout << endl;

		cout << "Enter grade of student number " << i + 1 << ": ";
		cin >> ptr[i];
	}

}
void printGrades(int* ptr, int Num_Students) {

	cout << "\nLoading Result.....\n";
	cout << "--------------------------------------------\n";
	for (int i = 0; i < Num_Students; i++)
	{
		cout << "The grade of student number [" << i + 1 << "] is = " << ptr[i] << "%   |" << endl;
	}
	cout << "--------------------------------------------\n";

}

int main() {
	
	int Num_Student = 0;
	int* ptr;
	
	ReadNumberAndGrade_Students(ptr, Num_Student);
	printGrades(ptr, Num_Student);


	delete[] ptr;
	return 0;
}
```
Output:
```
Enter the number of students: 5

Enter grade of student number 1: 45

Enter grade of student number 2: 36

Enter grade of student number 3: 27

Enter grade of student number 4: 47

Enter grade of student number 5: 78

Loading Result.....
--------------------------------------------
The grade of student number [1] is = 45%   |
The grade of student number [2] is = 36%   |
The grade of student number [3] is = 27%   |
The grade of student number [4] is = 47%   |
The grade of student number [5] is = 78%   |
--------------------------------------------
```