---
creation_date: 2025-11-15T09:10
tags:
  - Resources/Articles
Resource: https://programmingadvices.com/courses/introduction-to-programming-using-c-level-2/lectures/41957156
Author: "[[abu-hedhoud]]"
topic: "[[Lesson 26 - Setw Manipulator]]"
---
> [!summary]-
> 

# <font color="#646a73">Lesson #26 - Setw Manipulator</font>
---
![[Screenshot_20251108-152538_Moon+ Reader Pro.jpg]]
### Input:
```cpp
#include<iostream>
#include<iomanip>// this library stored the 

using namespace std; 

int main() {

	cout << "---------|--------------------------------|---------|" << endl;
	cout << "  Code   |               Name             |  Mark   |" << endl;
	cout << "---------|--------------------------------|---------|" << endl;


	cout << setw(9) << "C101" << "|" << setw(32) << "introduction to Programming 1" << "|" << setw(9) << "95" << "|" << endl;
	cout << setw(9) << "C102" << "|" << setw(32) << "Computer Hardware" << "|" << setw(9) << "88" << "|" << endl;
	cout << setw(9) << "C1035243" << "|" << setw(32) << "Network" << "|" << setw(9) << "75" << "|" << endl;
	cout << "---------|--------------------------------|---------|" << endl;

	return 0;
}
```
### Output:
```
---------|--------------------------------|---------|
  Code   |               Name             |  Mark   |
---------|--------------------------------|---------|
     C101|   introduction to Programming 1|       95|
     C102|               Computer Hardware|       88|
 C1035243|                         Network|       75|
---------|--------------------------------|---------|
```
---

### Input:
```cpp
#include<iostream>
#include<iomanip>// this library stored the 

using namespace std; 

int main() {

	cout << "|---------|--------------------------------|---------|" << endl;
	cout << "|  Code   |               Name             |  Mark   |" << endl;
	cout << "|---------|--------------------------------|---------|" << endl;


	cout << "|" << setw(9) << "C101" << "|" << setw(32) << "introduction to Programming 1" << "|" << setw(9) << "95" << "|" << endl;
	cout << "|" << setw(9) << "C102" << "|" << setw(32) << "Computer Hardware" << "|" << setw(9) << "88" << "|" << endl;
	cout << "|" << setw(9) << "C1035243" << "|" << setw(32) << "Network" << "|" << setw(9) << "75" << "|" << endl;
	cout << "|---------|--------------------------------|---------|" << endl;

	return 0;
}
```
### Output:
```
|---------|--------------------------------|---------|
|  Code   |               Name             |  Mark   |
|---------|--------------------------------|---------|
|     C101|   introduction to Programming 1|       95|
|     C102|               Computer Hardware|       88|
| C1035243|                         Network|       75|
|---------|--------------------------------|---------|
```
---

### Input: Make the line in the left.
```cpp
#include<iostream>
#include<iomanip>// this library stored the 

using namespace std; 

int main() {

	cout << "|---------|--------------------------------|---------|" << endl;
	cout << "|  Code   |               Name             |  Mark   |" << endl;
	cout << "|---------|--------------------------------|---------|" << endl;


	cout << "|" << left << setw(9) << "C101" << "|" << setw(32) << "introduction to Programming 1" << "|" << setw(9) << "95" << "|" << endl;
	cout << "|" << left << setw(9) << "C102" << "|" << setw(32) << "Computer Hardware" << "|" << setw(9) << "88" << "|" << endl;
	cout << "|" << left << setw(9) << "C1035243" << "|" << setw(32) << "Network" << "|" << setw(9) << "75" << "|" << endl;
	cout << "|---------|--------------------------------|---------|" << endl;

	return 0;
}
```
### Output:
```
|---------|--------------------------------|---------|
|  Code   |               Name             |  Mark   |
|---------|--------------------------------|---------|
|C101     |introduction to Programming 1   |95       |
|C102     |Computer Hardware               |88       |
|C1035243 |Network                         |75       |
|---------|--------------------------------|---------|
```