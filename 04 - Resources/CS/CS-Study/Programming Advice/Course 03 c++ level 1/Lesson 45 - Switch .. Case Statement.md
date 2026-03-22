---
date: 2025-03-09T05:38
tags:
  - Resources/Articles
---
Resource: [Lesson #45 - Switch .. Case Statement - YouTube](https://www.youtube.com/watch?v=9z0yfqcxh8w&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=51)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Switch .. Case Statemen with enums]]
___
# Summary 

---
# Highlights & Notes

- # What’s [[Switch .. Case Statemen]] & what’s there use & what is different between [[Switch .. Case Statemen]] & [[Conditional Statements: IF, IF ... Else Statement]].
- a [[Switch .. Case Statemen]] is a conditional control [[Structure]] used to execute specific code based on the value of a variable, instead of writing multiple if-else statements to check different value, [[Switch .. Case Statemen]] provides a more structured and, in some cases, faster alternative.
## Example Comparison

```cpp
Using if-else

int num = 2;
if (num == 1) {
    cout << "One";
} else if (num == 2) {
    cout << "Two";
} else {
    cout << "Other";
}

Using switch case

int num = 2;
switch (num) {
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    default:
        cout << "Other";
}
```
---
# Let’s see this in action
## input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int day = 5;
	switch (day)
	{
	case 1:
		cout << "monday\n";
		break;
	case 2:
		cout << "thusday\n";
		break;
	case 3:
		cout << "wensday\n";
		break;
	case 4:
		cout << "thursday\n";
		break;
	case 5:
		cout << "friday\n";
		break;
	case 6:
		cout << "saturday\n";
		break;
	case 7:
		cout << "sanday\n";
		break;
	default:
		cout << "please write a number day and try again\n";
	}


	return 0;
}
```
## Note: I shouldn't forget break in cases, or it will type the all the sentences.
## Output
```cpp
friday
```
---
# Let’s see it with [[enum]] & ask the user.

## Input
```cpp
#include<iostream>
using namespace std;

enum enfood_menu_choise { sald = 1, tajin = 2, fruit = 3, oronge_juise = 4, pizza = 5, other_type = 6 };
int main()
{
	cout << "*********************************\n";
	cout << "chose your food\n";
	cout << "salat = 1\n";
	cout << "tajin = 2\n";
	cout << "fruit = 3\n";
	cout << "orange_juise = 4\n";
	cout << "pizza = 5\n";
	cout << "other type = 6\n";
	cout << "*********************************\n";

	int a;
	enfood_menu_choise food_choise;

	cin >> a;
	food_choise = (enfood_menu_choise)a;
	
	switch (food_choise)
	{
	case enfood_menu_choise::sald:// don't forget this ( : )
		cout << "your sald will come soon";
		break;

	case enfood_menu_choise::tajin:
		cout << "your tajin will come soon";
		break;
	case enfood_menu_choise::fruit:
		cout << "your fruit will come soon";
		break;
	case enfood_menu_choise::oronge_juise:
		cout << "your orage juise will come soon";
		break;
	case enfood_menu_choise::pizza:
		cout << "your pizza will come soon";
		break;
	case enfood_menu_choise::other_type:
		cout << "we will give you a nother menu";
		break;
	default:
		cout << "please try from 1 to 6\n";
	}
	cout << "\n";
	cout << "thank you" << endl;


	return 0;
}
```
## output
```cpp
*********************************
chose your food
salat = 1
tajin = 2
fruit = 3
orange_juise = 4
pizza = 5
other type = 6
*********************************
4
your orage juise will come soon
thank you
```
## Output: if I press another number.
```cpp
*********************************
chose your food
salat = 1
tajin = 2
fruit = 3
orange_juise = 4
pizza = 5
other type = 6
*********************************
8
please try from 1 to 6

thank you
```
---
# Let’s see it with [[functions & procedures]].
## Input
```cpp
#include<iostream>
using namespace std;

enum enfood { tajin = 1, salat = 2, oronage_juise = 3, ise = 4 };
void v_foodmenu()
{
	cout << "***********************\n";
	cout << "*      tajin = 1      *\n";
	cout << "*      salat = 2      *\n";
	cout << "*     oronge juise= 3 *\n";
	cout << "*         ise = 4     *\n";
	cout << "***********************\n";
	cout << "****** chose one ******\n";
	cout << "***********************\n";
}
string conversion(int a)
{
	enfood food;
	food = (enfood)a;

	switch (food) // i can't take (switch case) to an other function.
	{
	case 1:
	    return	"your tajin will come soon";
		break;
	case 2:
		return "your salat will come soon";
		break;
	case 3:
		return "your orange juise will come soon";
		break;
	case 4:
		return "your ise will come soon";
		break;
	default:
		return "we will send an other menu for you";
	}
	return "\n";
	return "thank you";
}

int main()
{
	v_foodmenu();
	int choise;
	cin >> choise;
	cout << conversion(choise) << endl;

	

	return 0;
}
```
## output
```
***********************
*      tajin = 1      *
*      salat = 2      *
*     oronge juise= 3 *
*         ise = 4     *
***********************
****** chose one ******
***********************
1
your tajin will come soon
```
## Note: why we need int a if we have input int choise.

###### ChatGPT said:

أفهم الآن سؤالك بشكل أفضل. أنت تسأل عن **لماذا نحتاج إلى `int a`** داخل دالة `conversion` في حين أننا في الأساس نمرر قيمة `choice` من النوع `int` إلى هذه الدالة.

### لماذا نحتاج إلى `int a` في دالة `conversion`؟

الفكرة هي أن **`int a`** هو **معامل** (أو **parameter**) لدالة `conversion`، حيث يستقبل **القيمة المدخلة من المستخدم** (التي تكون من النوع `int`، مثل 1 أو 2 أو 3). هذا المعامل هو مجرد اسم يُستخدم داخل الدالة لتمثيل القيمة التي تم تمريرها لها من `main`.

في `main`، أنت تحصل على **اختيار المستخدم** وتخزنه في متغير يسمى `choice`، ثم تقوم بتمريره إلى دالة `conversion`.

#### العلاقة بين `int a` في `conversion` و `choice` في `main`:

- في دالة `main`، عندما يكتب المستخدم رقمًا (مثلًا 1 أو 2 أو 3)، يتم تخزينه في المتغير `choice`.
- عند استدعاء دالة `conversion(choice)`, فإننا نمرر قيمة `choice` (التي هي من النوع `int`) إلى المعامل `a` في دالة `conversion`.

### مثال:

```cpp

Copy

`int choice; cin >> choice;  // يأخذ اختيار المستخدم (مثلاً 1 أو 2 أو 3) conversion(choice);  // يمرر قيمة choice إلى دالة conversion
```
- **داخل دالة `conversion`**: يتم استخدام **`a`** لتمثيل هذا الاختيار داخل دالة `conversion`. عند وصول المتغير `a` إلى دالة `conversion`، نريد تحويله إلى **قيمة من نوع `enum`** باستخدام `static_cast`.

### ما الهدف من `int a`؟

- المتغير **`a`** في الدالة **هو المعامل الذي يستقبل قيمة `choice`** (التي هي قيمة عددية) من دالة `main`.
- `a` هو مجرد اسم للمتغير داخل الدالة، ويمكنك أن تسميه أي شيء آخر (مثلًا `input` أو `userChoice`)، ولكن الأهم هو أن هذا المعامل يمثل الاختيار المدخل من قبل المستخدم.

### لماذا لا يمكننا فقط استخدام `choice` مباشرة في `conversion`؟

نحن لا نستطيع استخدام **`choice`** مباشرة في `conversion` لأن **دالة `conversion` لا تعرف عن المتغير `choice` في `main`**. كل دالة في C++ تعمل في سياقها الخاص وتحتاج إلى **تمرير القيم إليها** باستخدام المعاملات.

#### كيف يعمل هذا:

1. **المتغير `choice`** في `main` هو مجرد قيمة تم إدخالها من قبل المستخدم.
2. عندما نقوم بتمرير `choice` إلى دالة `conversion`, يتم **نسخ القيمة** إلى المعامل **`a`** في `conversion`.
3. بعد ذلك، يتم استخدام `a` داخل دالة `conversion` لتحويله إلى قيمة `enum` باستخدام `static_cast`، ثم يتم اتخاذ القرارات بناءً على هذه القيمة باستخدام `switch`.

### تلخيص:

- `int a` هو فقط **معامل** في دالة `conversion` يمثل القيمة المدخلة من قبل المستخدم.
- نحن نحتاجه لكي نستطيع **تمرير القيمة المدخلة (مثل 1 أو 2 أو 3)** إلى دالة `conversion` واستخدامها في العمليات داخل هذه الدالة (مثل التحويل إلى `enum`).
- في الأساس، `a` يمثل **قيمة `choice` التي نمررها من `main` إلى `conversion`**.
---
## Homework in algorithm: (36-44-45) all this with [[functions & procedures]]
# (#36)
![[2025-03-18 (1).png]]
## Input
```cpp
#include<iostream>
using namespace std;

void vread(int& num1, int& num2, char& operation_type)
{
	cout << "Please enter number 1\n";
	cin >> num1;
	cout << "And number 2\n";
	cin >> num2;
	cout << "Now enter the Operation Type\n";
	cin >> operation_type;
	cout << "\n";
}
void vprint_with_switch_statement(int num1,int num2,char operation_type)
{
	switch (operation_type) {

	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
		break;
	case '/':
		if (num1 == 0 || num2 == 0)
			cout << "Error: Division by zero is not allowed.";
		else
			cout << num1 / num2;
		break;
	}
	
}
int main()
{
	int num1, num2;
	char operation_type;
	vread(num1, num2, operation_type);
	vprint_with_switch_statement(num1, num2, operation_type);

	return 0;
}
```
## Output
```
Please enter number 1
10
And number 2
20
Now enter the Operation Type
*

200
```
---
# (#44)
![[2025-03-19 (4).png]]
##  input
```cpp
#include <iostream>  
using namespace std;

enum en_number_days {Sunday=1,Monday=2,Tuesday=3,Wednesday=4,Thursday=5,Friday=6,Saturday=7};
void vread(int &Day)
{
	cout << "Please enter a Day\n";
	cin >> Day;
	cout << "\n";
}
void vprint_Day_switch_statment(int Day)
{
	en_number_days nam_day;
	nam_day = (en_number_days)Day;

	switch (Day) {
	case en_number_days::Sunday:
		cout << "Sunday";
		break;
	case en_number_days::Monday:
		cout << "It's Monday";
		break;
	case en_number_days::Tuesday:
		cout << "It's Thusday";
		break;
	case en_number_days::Wednesday:
		cout << "It's Wednesday";
		break;
	case en_number_days::Thursday:
		cout << "It's Thursday";
		break;
	case en_number_days::Friday:
		cout << "It's Friday";
		break;
	case en_number_days::Saturday:
		cout << "It's Sturday";
		break;
	default:
		cout << "Wrong Day, Please try again";
	}

}
int main()
{
	int Day;
	vread(Day);
	vprint_Day_switch_statment(Day);
	
	return 0;
}
```
## Output
```
Please enter a Day
6

It's Friday
```
---
# (#45)
![[2025-03-19 (5).png]]
## Input
```cpp
#include <iostream>  
using namespace std;

enum en_number_days {january=1,february=2,march=3,april=4,may=5,june=6,july=7,august=8,septembre=9,october=10,november=11,december=12};
void vread(int &month)
{
	cout << "Please enter The Month\n";
	cin >> month;
	cout << "\n";
}
void vprint_Day_switch_statment(int month)
{
	en_number_days nam_day;
	nam_day = (en_number_days)month;

	switch (month) {
	case en_number_days::january:
		cout << "January";
		break;
	case en_number_days::february:
		cout << "February";
		break;
	case en_number_days::march:
		cout << "March";
		break;
	case en_number_days::april:
		cout << "April";
		break;
	case en_number_days::may:
		cout << "May";
		break;
	case en_number_days::june:
		cout << "June";
		break;
	case en_number_days::july:
		cout << "July";
		break;
	case en_number_days::august:
		cout << "August";
		break;
	case en_number_days::septembre:
		cout << "September";
		break;
	case en_number_days::october:
		cout << "October";
		break;
	case en_number_days::november:
		cout << "November";
		break;
	case en_number_days::december:
		cout << "December";
		break;
	default:
		cout << "Wrong Day, Please try again";
	}

}
int main()
{
	int month;
	vread(month);
	vprint_Day_switch_statment(month);
	
	return 0;
}
```
## Output
```
Please enter The Month
11

November
```
