---
creation_date: 2025-11-19
tags:
  - Resources/Articles
Resource: https://programmingadvices.com/courses/introduction-to-programming-using-c-level-2/lectures/41741127
Author: "[[abu-hedhoud]]"
topic: "[[Lesson 29 - Add elements]]"
---
> [!summary]-
> 

# <font color="#646a73">Lesson # 29 - Add elements</font>
---
![[Screenshot_20251108-152550_Moon+ Reader Pro.jpg]]
![[Screenshot_20251108-152554_Moon+ Reader Pro.jpg]]

---
### Input: my program. 
```cpp
#include<iostream>
#include<vector>
using namespace std; 

int main() {

	vector <int> num;

	int input1, input2;

	cout << "How many arrays: ";
	cin >> input1;

	for (int i = 0; i < input1; i++)
	{
		printf("Enter value number %d: ", i + 1);
		cin >> input2;
		num.push_back(input2);
	}
	
	cout << "\nYour numbers are: ";

	for (int i : num)
	{
		cout << i << " ";
	}
	 
	return 0;
}
```
### Output:
```
How many arrays: 5
Enter value number 1: 65
Enter value number 2: 86
Enter value number 3: 36
Enter value number 4: 89
Enter value number 5: 36

Your numbers are: 65 86 36 89 36
```
---
## <font color="#646a73">Homework: </font>
![[2025-11-19 (1).png]]
### Input: my solution
```cpp
#include<iostream>
#include<vector>
using namespace std;


void ReadNumbers(vector<int> &num) {

	int ReadNum;
	char Choise;

	do
	{
		cout << "Enter the number: ";
		cin >> ReadNum;
		
		num.push_back(ReadNum);
		
		cout << "\nDo you want more, y or n: ";
		cin >> Choise;

	} while (Choise == 'y' || Choise == 'Y');
	
}

int main() {

	vector <int> num;

	ReadNumbers(num);


	cout << "\nYour all numbers are: ";
	for (int &i : num)
	{
		cout << i << " ";
	}


	return 0;
}
```
### Output:
```
Enter the number: 56

Do you want more, y or n: y
Enter the number: 47

Do you want more, y or n: y
Enter the number: 44

Do you want more, y or n: y
Enter the number: 87

Do you want more, y or n: y
Enter the number: 97

Do you want more, y or n: y
Enter the number: 35

Do you want more, y or n: n

Your all numbers are: 56 47 44 87 97 35
```
### Input: my modification code.
```cpp
#include<iostream>
#include<vector>
using namespace std;


void ReadNumbers(vector<int> &vNum) {

	int ReadNum;
	char Choise;

	do
	{
		cout << "Enter the number: ";
		cin >> ReadNum;
		
		vNum.push_back(ReadNum);
		
		cout << "\nDo you want more, y or n: ";
		cin >> Choise;

	} while (Choise == 'y' || Choise == 'Y');
	
}

void PrintVectorRange(vector<int> vNum) {

	cout << "\nYour all numbers are: ( ";

	for (int i : vNum)
	{
		cout << i << " ";
	}
	cout << ")";

}
int main() {

	vector <int> vNum;

	ReadNumbers(vNum);
	PrintVectorRange(vNum);


	return 0;
}
```
### Output:
```
Enter the number: 56

Do you want more, y or n: y
Enter the number: 84

Do you want more, y or n: y
Enter the number: 34

Do you want more, y or n: y
Enter the number: 78

Do you want more, y or n: y
Enter the number: 24

Do you want more, y or n: y
Enter the number: 56

Do you want more, y or n: y
Enter the number: 56

Do you want more, y or n: n

Your all numbers are: ( 56 84 34 78 24 56 56 )
```