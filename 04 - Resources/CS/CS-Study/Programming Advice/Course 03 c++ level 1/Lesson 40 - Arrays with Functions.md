---
date: 2025-03-07T11:01
tags:
  - Resources/Articles
---
Resource: [Lesson #40 - Arrays with Functions - YouTube](https://www.youtube.com/watch?v=sUXVVP6Hfk0&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=46)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Arrays with Functions]]
___
# Summary 

---
# Highlights & Notes

- # Why I should collect between array & functions.
- I should that to make my program short and easy to read or modification.
---
# Let's see how I can collect between array & procedures.
## Input
```cpp
#include<iostream>
using namespace std;

void read_gradestudents_info(int gradstudents[3])
{
	cout << "please enter your first grade\n";
	cin >> gradstudents[0];
	cout << "and secande grade\n";
	cin >> gradstudents[1];
	cout << "and thurt grade\n";
	cin >> gradstudents[2];
}
void print_gradestudents_info(int gradstudents[3])
{
	cout << "\n";
	cout << "your first grade is " << gradstudents[0] << "\n";
	cout << "and your secand grade is " << gradstudents[1] << "\n";
	cout << "and your thurt grade is " << gradstudents[2] << endl;
}
int main()
{
	int gradstudents[3];
	read_gradestudents_info(gradstudents);
	print_gradestudents_info(gradstudents);

	return 0;
}
```
# Note : I don’t have to define procedures by reference because array is only how I shouldn't define it.
## Output
```cpp
please enter your first grade
50
and secande grade
70
and thurt grade
60

your first grade is 50
and your secand grade is 70
and your thurt grade is 60
```
---
# New let’s collect between array & functions with calculations.
## Input
```cpp
#include<iostream>
using namespace std;

void readinfo(int x[3])
{
	cout << "first number" << endl;
	cin >> x[0];
	cout << "secand number" << endl;
	cin >> x[1];
	cout << "thurt number" << endl;
	cin >> x[2];
}
int printinfo(int x[3])
{
	cout <<"*******************\n";
	return x[0] + x[1] + x[2];
}
int main()
{
	int x[3];
	readinfo(x);
	cout << printinfo(x);

	return 0;
}
```
## output
```cpp
first number
40
secand number
50
thurt number
80
*******************
170
```
---
# Another one
## Input
```cpp
#include <iostream>  
using namespace std;

void vread_grades_data(int grades[3])
{
	cout << "Please enter grade 1\n";
	cin >> grades[0];
	cout << "Please enter grade 2\n";
	cin >> grades[1];
	cout << "Please enter grade 3\n";
	cin >> grades[2];
	cout << "\n";
}
void vprint_grades_data(int grades[3])
{
	cout << "Your grade 1 is " << grades[0] << "\n";
	cout << "And your grade 2 is " << grades[1] << "\n";
	cout << "And your grade 3 is " << grades[2] << "\n";
	cout << endl;
}
float calc_grades_average(int grades[3])
{
	float average;
	average = (grades[0] + grades[1] + grades[2]) / 3;
	return average;
}
int main() {

	int grades[3];
    vread_grades_data(grades);
	vprint_grades_data(grades);
	cout << "The average of grade 1 and 2 and 3 is " << calc_grades_average(grades) << endl;


	return 0;
}
```
## Output
```
Please enter grade 1
80
Please enter grade 2
70
Please enter grade 3
90

Your grade 1 is 80
And your grade 2 is 70
And your grade 3 is 90

The average of grade 1 and 2 and 3 is 80
```