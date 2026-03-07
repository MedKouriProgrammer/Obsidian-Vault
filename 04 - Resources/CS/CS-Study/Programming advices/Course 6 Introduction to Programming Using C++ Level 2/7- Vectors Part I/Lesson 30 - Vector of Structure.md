---
creation_date: 2025-11-19T09:00
tags:
  - Resources/Articles
Resource: https://programmingadvices.com/courses/introduction-to-programming-using-c-level-2/lectures/41974736
Author: "[[abu-hedhoud]]"
topic: "[[Lesson 30 - Vector of Structure]]"
---
> [!summary]-
> 

# <font color="#646a73">Lesson # 30 - Vector of Structure</font> 
---
![[Screenshot_20251108-152557_Moon+ Reader Pro.jpg]]

---
![[2025-11-21.png]]
### Input:
```cpp
#include<iostream>
#include<vector>
using namespace std;


struct stEmployee {

	string firstname;
	string lastname;
	int salery;

};

void ReadEmployee(vector<stEmployee> &vEmployee) {

	stEmployee sEmployee;
	char Choise;

	do {

		cout << "What's your name: ";
		cin >> sEmployee.firstname;

		cout << "What's your last name: ";
		cin >> sEmployee.lastname;
		
		cout << "How mush your salery: ";
		cin >> sEmployee.salery;
		vEmployee.push_back(sEmployee);

		cout << "\nDo you want add more information? :";
		cin >> Choise;

		cout << endl;
	
	} while (Choise == 'y' || Choise == 'Y');

}
void PrintEmployeeInrange(vector<stEmployee> &vEmployee) {

	stEmployee sEmployee;

	cout << "-------------------Your Information are:-------------------\n";

	for (stEmployee& Employee : vEmployee)
	{
		cout << "\nYour first name is: " << Employee.firstname;
		cout << "\nYour Last name is: " << Employee.lastname;
		cout << "\nYour salery is: " << Employee.salery << "$
		cout << endl;
	}

	cout << "--------------------------------------";
}

int main() {

	vector<stEmployee> vEmployee;
	
	ReadEmployee(vEmployee);
	PrintEmployeeInrange(vEmployee);


	return 0;
}
```
### Output:
```
What's your name: Zakaria
What's your last name: Medkouri
How mush your salery: 11000

Do you want add more information? :y

What's your name: Mike
What's your last name: watirson
How mush your salery: 5000

Do you want add more information? :y

What's your name: Nina
What's your last name: Sorid
How mush your salery: 6000

Do you want add more information? :n

-------------------Your Information are:-------------------

Your first name is: Zakaria
Your Last name is: Medkouri
Your salery is: 11000$

Your first name is: Mike
Your Last name is: watirson
Your salery is: 5000$

Your first name is: Nina
Your Last name is: Sorid
Your salery is: 6000$
--------------------------------------
```