---
date: 2025-03-05T14:19
tags:
  - Resources/Articles
---
Resource: [Lesson #35 - Function Part 3 - Parameters - YouTube](https://www.youtube.com/watch?v=g6eNyuGurd8&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=41)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Function Part 3 - Parameters]]
___
# Summary 

---
# Highlights & Notes

## It’s not practical to print & ask the user into the function, so I should do something called parameter.
- ---
- ## Input
```cpp
#include<iostream>
using namespace std;

/*int function1()
{
   int num1,num2;
   cout << "number 1\n";
   cin >> num1;
   cout << "number 2\n";
   cin >> num2;
return num1 + num2;

}*/
//it's not practical.
------------------------------------------------------------------------------
int myfanction2(int num1, int num2)
{
  return num1 + num2;
}

int main()
{
cout << myfanction2(10,20)//here i have to write a name of variable or numbers to calculate or print it

return 0;
}// if i want to ask the user enter a numbers i should see the next step.
------------------------------------------------------------------------------
int main()
{
int num1, num2;// i should to definition becouse the function is differently than another function
cout << "please enter first number\n";
cin >> num1;
cout >> "and number 2\n";
cin >> num2;

cout << myfunction(num1,num2);

return 0;
}

}
```
### Note : the functions, I can recall it more than ones. 
## Output
```cpp
------------------------------------------------------------------------------
30
------------------------------------------------------------------------------
please enter first number
40
and number 2
40
80
``` 
---
# Homework of algorithm and problem-solving: 1–2 - 14 - 15 - 16 - 18 - 19 - 20 - 21 - 22 - 23 - 31 - 32 - 42 - 43.
![[2025-03-13 (3).png]]
## Input: I have the choice to chose procedures.
```cpp
#include <iostream>  
#include<cmath>
using namespace std;

void print_name()
{
	cout << "my name is zakaria medkouri\n";
}
int main()
{
	 print_name();


	return 0;
}
```
## Output
```
my name is zakaria medkouri
```
---
# (#2)
![[2025-03-13 (4).png]]
## Input: don’t forget return in functions.
```cpp
#include <iostream>  
#include<cmath>
using namespace std;

void print_name()
{
	string num1;
	cout << "Enter your name\n";
	cin >> num1;
	cout << "\n";
	cout << "your name is " << num1;
}
int main()
{
	print_name();


	return 0;
}
```
## Output
```
Enter your name
zakaria

your name is zakaria
```
---
# (#14)
![[2025-03-21.png]]
## Input                                                                                    
```cpp                                                                       
#include <iostream>  
using namespace std;

void swap_number(int &num1,int &num2)
{
	cout << num1 << endl;
	cout << num2 << endl;
	cout << "\n";

	int temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout << num1 << endl;
	cout << num2 << endl;
}
int main(){
	int num1, num2;
	cout << "Please enter number 1\n";
	cin >> num1;
	cout << "And number 2\n";
	cin >> num2;
	cout << "\n";
	swap_number(num1, num2);

	return 0;
}
```
## Input: Another step.
```cpp
#include <iostream>  
using namespace std;

void swap_number(int num1,int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << num1 << "\n";
	cout << num2 << "\n";
}
int main() {
	int num1, num2;
	cout << "Please enter number 1\n";
	cin >> num1;
	cout << "And number 2\n";
	cin >> num2;
	
	cout << "\n";
	
	cout << num1 << "\n";
	cout << num2 << "\n";
	cout << endl;

	swap_number(num1, num2);

	return 0;
}
```
## Output
```
Please enter number 1
10
And number 2
20

10
20

20
10
```
---
# (#15)
![[2025-03-14 (8).png]]
## Input
```cpp
#include <iostream>  
using namespace std;

int calc_area(int a,int b)
{
	int Area;
	Area = a * b;
	return Area;
}
int main(){
	int a, b;
	cout << "Enter a \n";
	cin >> a;
	cout << "And b \n";
	cin >> b;
	cout << "\n";

	cout << print_name(a, b);

	return 0;
}
```
## Output
```
Enter a
10
And b
20

200
```
---
# (#16)
![[2025-03-14 (9).png]]
## Input
```cpp
#include <iostream>  
#include<cmath>
using namespace std;

int calc_Rectangle(int a,int d)
{
	int Area;
	Area = a * sqrt(d * d - a * a);
	return Area;
}
int main(){
	int a, d;
	cout << "Enter a \n";
	cin >> a;
	cout << "And d \n";
	cin >> d;
	cout << "\n";

	cout << calc_Rectangle(a, d);

	return 0;
}
```
## output
```
Enter a
5
And d
40

200
```
---
# (#18)
![[2025-03-15 (2).png]]
## Input
```cpp
#include<cmath>
using namespace std;

float calc_circle(int r)
{
	float PI = 3.14;
	float Area;
	Area = PI * (r * r);
		return Area;
}
int main(){
	int r;
	cout << "Enter a \n";
	cin >> r;
	cout << "\n";	

	cout << calc_circle(r);

	return 0;
}
```
## output
```
Enter a
5

78.5
```
---
# (#19)
![[2025-03-15 (3).png]]
## Input
```cpp
#include<cmath>
#include<cmath>
using namespace std;

float calc_circle(int D)
{
	float PI = 3.14;
	float Area;
	Area = (PI * D * D) / 4;
	return Area;
}
int main() {
	int D;
	cout << "Please enter number D\n";
	cin >> D;
	cout << "\n";

	cout << calc_circle(D);

	return 0;
}
```
## Output
```
Please enter number D
10

78.5
```
---
# (#20)
![[2025-03-15 (5).png]]
## Input
```cpp
#include<cmath>
#include<cmath>
using namespace std;

float calc_circle(int A)
{
	float PI = 3.14;
	float Area;
	Area = (PI * (A * A)) / 4;
	return Area;
}
int main() {
	int A;
	cout << "Please enter number A\n";
	cin >> A;
	cout << "\n";

	cout << calc_circle(A);

	return 0;
}
```
## Output
```
Please enter number A
10

78.5
```
---
# (#21)
![[2025-03-15 (6).png]]
## Input
```cpp
#include<cmath>
#include<cmath>
using namespace std;

float calc_circle(int L)
{
	float PI = 3.14;
	float Area;
	Area = (L * L) / (PI * 4);
	return Area;
}
int main() {
	int L;
	cout << "Please enter number L\n";
	cin >> L;
	cout << "\n";

	cout << calc_circle(L);

	return 0;
}
```
## Output
```
Please enter number L
20

31.8471
```
---
# (#22)
![[2025-03-15 (7).png]]
## Input
```cpp
#include<iostream>
#include<cmath>
using namespace std;

float calc_circle(int a,int b)
{
	float PI = 3.14;
	float Area = (PI * a * b / 4) * ((2 * a - b) / (2 * a + b));

	return Area;
}
int main()
{
	int a, b;
	cout << "Please enter number a\n";
	cin >> a;
	cout << "And number b\n";
	cin >> b;
	cout << "\n";

	cout << calc_circle(a,b) << endl;

	return 0;
}
```
## Output
```
Please enter number a
20
And number b
10

47.1
```
---
# (#23)
![[2025-03-15 (8).png]]
## Input
```cpp
#include<iostream>
#include<cmath>
using namespace std;

float calc_circle(int a,int b, int c)
{
	float PI = 3.14;
	float P = (a + b + c) / 2;
	float T = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));
	float T = T * T;
	float Area = PI * T;

	return Area;
}
int main()
{
	int a, b, c;
	cout << "Please enter number a\n";
	cin >> a;
	cout << "And number b\n";
	cin >> b;
	cout << "And b\n";
	cin >> c;
	cout << "\n";

	cout << calc_circle(a,b,c) << endl;

	return 0;
}
```
---
# (#31)
![[2025-03-16 (8).png]]
## Input
```cpp
#include<iostream>
#include<cmath>
using namespace std;

void calc_number(int number, int num1, int num2, int num3)
{

	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	
}
int main()
{
	int number,num1,num2,num3;
	cout << "Please enter numbre 1\n";
	cin >> number;
	cout << "\n";
	num1 = number * number;
	num2 = number * number * number;
	num3 = number * number * number * number;

	calc_number(number, num1, num2, num3);

	return 0;
}
```
## Output
```cpp
Please enter numbre 1
3

9
27
81
```
---
# (#32)
![[2025-03-16 (10).png]]
## Input
```

```
---
# (#42)
![[Screenshot (1).png]]
## Input
```cpp
#include<iostream>
#include<cmath>
using namespace std;

void calc_number(int TotalSeconds)
{

	cout << TotalSeconds << endl;
}
int main()
{
	int num_days, num_hours, num_minutes, num_seconds;
	float TotalSeconds;
	cout << "Enter number a number of days\n";
	cin >> num_days;
	cout << "And of hours\n";
	cin >> num_hours;
	cout << "And of minutes\n";
	cin >> num_minutes;
	cout << "And of seconds\n";
	cin >> num_seconds;
	cout << "\n";
	TotalSeconds = (num_days * 24 * 60 * 60) + (num_hours * 60 * 60) + (num_minutes * 60) + (num_seconds);

	calc_number(TotalSeconds);

	return 0;
}
```
## Output
```
Enter number a number of days
2
And of hours
5
And of minutes
45
And of seconds
35

193535
```
---
# (#43)
![[2025-03-19 (2).png]]
## Input
```cpp
#include <iostream>  
using namespace std;

void convert_seconds(int TotalSeconds)
{
	int Days = TotalSeconds / 86400;
	TotalSeconds %= 86400;
	int Hours = TotalSeconds / 3600;
	TotalSeconds %= 3600;
	int minutes = TotalSeconds / 60;
	int Seconds = TotalSeconds % 60;

	cout << Days << ":" << Hours << ":" << minutes << ":" << Seconds;

}
int main() {
	int seconds;
	cout << "Please enter the number of seconds\n";
	cin >> seconds;
	cout << "\n";

	 convert_seconds(seconds);

	return 0;
}
```
## Output
```
Please enter the number of seconds
193535

2:5:45:35
```