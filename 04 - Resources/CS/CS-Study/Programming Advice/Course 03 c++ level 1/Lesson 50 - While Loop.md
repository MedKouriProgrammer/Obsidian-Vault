---
date: 2025-03-10T09:02
tags:
  - Resources/Articles
---
Resource: [Lesson #50 - While Loop - YouTube](https://www.youtube.com/watch?v=nUAUg5XIFuI&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=56)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[While Loop]]
___
# Summary 

---
# Highlights & Notes

- # Th e main difference between a `while` loop and a `for` loop is the way the repetition is controlled:

### `while` loop:

- Used when the number of iterations is not known beforehand.
- It keeps iterating as long as the condition is `true`.
- You must manually update variables within the loop to avoid an infinite loop.

**Example:**

cpp

Copy

`int i = 0; while (i < 5) {     cout << i << " ";     i++;  // Manual update }`

### `for` loop:

- Used when the number of iterations is known in advance.
- It contains three parts: initialization, condition, and update, making it more organized.
- The repetition control is handled within the loop definition itself.

**Example:**

```cpp

Copy

`for (int i = 0; i < 5; i++) {     cout << i << " "; }`
```
### When to use each:

- Use `for` when you know the number of iterations.
- Use `while` when the iterations depend on a condition that may change during executi
---
- ![[2025-03-10.png]]
![[2025-03-10 (1).png]]
---
# Let’s read a positive number with [[while loop conditin]].
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "please enter a positive number\n";
	cin >> num;

	while (num < 1)
	{
		cout << "wrong number, plz enter a positive number\n";
		cin >> num;
	}
	cout << "your positive number is " << num << endl;

	return 0;
}
```
## output
```
please enter a positive number
-2
wrong number, plz enter a positive number
10
your positive number is 10
```
---
# Read numbers in range with [[while loop conditin]].
## Input
```cpp
#include<iostream>
using namespace std;

int read_whileage(int from, int to)
{
	int num;
	cout << "please enter your age from "<< from << " to " << to << "\n";
	cin >> num;

	while (num < from || num > to)// don't forget ( || )
	{
		cout << "your age should be from " << from << " to " << to << "\n";
		cout << "try again\n";
		cin >> num;
	}
	cout << "your numbers are " << num << "\n";

	return num;
}

int main()
{
	cout << read_whileage(18, 30);

	return 0;
}
```
## output
```
please enter your age from 18 to 30
5
your age should be from 18 to 30
try again
-2
your age should be from 18 to 30
try again
19
your numbers are 19
19
```
---
الفرق الأساسي بين while loop و for loop هو طريقة التحكم في التكرار:

while loop:

تُستخدم عندما لا يكون عدد التكرارات معروفًا مسبقًا.

تستمر في التكرار طالما أن الشرط true.

يجب عليك تحديث المتغيرات يدويًا داخل الحلقة لتجنب التكرار اللانهائي.

مثال: int i = 0; while (i < 5) { cout << i << " "; i++; // التحديث يدوي } 

for loop:

تُستخدم عندما يكون عدد التكرارات معروفًا مسبقًا.

تحتوي على ثلاثة أجزاء: التعريف، الشرط، التحديث، مما يجعلها أكثر تنظيمًا.

يتم التحكم في التكرار داخل تعريف الحلقة.

مثال: for (int i = 0; i < 5; i++) { cout << i << " "; } 

متى تستخدم كل واحدة؟

استخدم for عندما تعرف عدد التكرارات.

استخدم while عندما تعتمد التكرارات على شرط قد يتغير أثناء التنفيذ.

---
# Homework in algorithm:(26-27-28-29-30-32-37-46-50), some of these exercises with [[functions & procedures]]
![[2025-03-16.png]]
## Input
```cpp
#include<iostream>
using namespace std;

void number_with_whileloop(int &N)
{
	cout << "Please enter the number N\n";
	cin >> N;
	cout << "\n";

	int i=1;
	while (i <= N)
	{
		cout << i << "\n";
		i++;
	}

}
int main()
{
	int N;
	number_with_whileloop(N);

	return 0;
}
```
## Output
```
Please enter the number N
10

1
2
3
4
5
6
7
8
9
10
```
---
# (#27)
![[2025-03-16 (1).png]]
## Input
```cpp
#include<iostream>
using namespace std;

void number_with_whileloop(int &N)
{
	cout << "Please enter the number N\n";
	cin >> N;
	cout << "\n";
	
	while (N >= 1)
	{
		cout << N << "\n";
		N--;
	}

}
int main()
{
	int N;
	number_with_whileloop(N);

	return 0;
}
```
## Output
```
Please enter the number N
10

10
9
8
7
6
5
4
3
2
1
```
---
# (#28)
![[2025-03-16 (2).png]]
## Input
```cpp
#include<iostream>
using namespace std;
void Read_number_whilellop(int& N)
{
	cout << "Please enter the number N\n";
	cin >> N;
	cout << "\n";

}
int number_with_whileloop(int N,int sum)
{
	int i=1;
	while (i <= N)
	{
		cout << i << "\n";
		sum += i;
		i += 2;
	}
	return sum;
}
int main()
{
	int N,sum=0;
	Read_number_whilellop(N);
	cout << number_with_whileloop(N,sum);

	return 0;
}
```
## Output
```
Please enter the number N
10

1
3
5
7
9
25
```
---
# (#29)
![[2025-03-16 (3).png]]
## Input
```cpp
#include<iostream>
using namespace std;
void Read_number_whilellop(int& N)
{
	cout << "Please enter the number N\n";
	cin >> N;
	cout << "\n";

}
int number_with_whileloop(int N,int sum)
{
	int i=2;
	while (i <= N)
	{
		cout << i << "\n";
		sum += i;
		i += 2;
	}
	return sum;
}
int main()
{
	int N,sum=0;
	Read_number_whilellop(N);
	cout << number_with_whileloop(N,sum);

	return 0;
}
```
## Output
```
Please enter the number N
10

2
4
6
8
10
30
```
---
# (#30)
![[2025-03-16 (4).png]]
## Input
```cpp
#include<iostream>
using namespace std;
void Read_number_whilellop(int& N)
{
	cout << "Please enter the number N\n";
	cin >> N;
	while (N < 1)
	{
		cout << "Please enter a positive number\n";
		cin >> N;
	}
	cout << "\n";

}
int number_with_whileloop(int N,int sum)
{
	int i=1;
	while (i <= N)
	{
		cout << i << "\n";
		sum *= i;
		i++;
	}
	return sum;
}
int main()
{
	int N,sum=1;
	Read_number_whilellop(N);
	cout << number_with_whileloop(N, sum);

	return 0;
}
```
## Output
```
Please enter the number N
6

1
2
3
4
5
6
720
```
---
# (#32)
![[2025-03-16 (10).png]]
## Input
```cpp
#include<iostream>
using namespace std;
void Read_number_whilellop(int& N,int &M)
{
	cout << "Please enter the number N\n";
	cin >> N;
	cout << "And number M\n";
	cin >> M;
	while (N < 1)
	{
		cout << "Please enter a positive number\n";
		cin >> N;
	}
	cout << "\n";

}
int number_with_whileloop(int N,int M,int sum)
{
	int i=0;
	while (i <= M)
	{
		sum *= N;
		i++;
	}
	return sum;
}
int main()
{
	int N,sum=1,M;
	Read_number_whilellop(N,M);
	cout << number_with_whileloop(N, sum,M);

	return 0;
}
```
## Output
```
Please enter the number N
2
And number M
4

16
```
---
# (#37)
![[2025-03-18 (3).png]]
## Input
```cpp
#include<iostream>
using namespace std;
void Read_number_whilellop(int& N,int sum)
{
	cout << "Please enter the number until (-99): ";
	cin >> N;
	
}
int number_with_whileloop(int N,int sum)
{
	while (N != -99 )
	{
		sum += N;
		cout << "An other Number until you enter (-99): ";
		cin >> N;
	}	
	return sum;
}
int main()
{
	int N, sum = 0;
	Read_number_whilellop(N,sum);
	cout << number_with_whileloop(N, sum);

	return 0;
}
```
## Output
```
Please enter the number until (-99): 10
An other Number until you enter (-99): 20
An other Number until you enter (-99): 30
An other Number until you enter (-99): 40
An other Number until you enter (-99): -99
100
```
---
# (#46)
![[2025-03-20 (2).png]]
## Input
```cpp
#include<iostream>
using namespace std;

void number_with_whileloop()
{
	int i = 65;
	while (i <= 90 )
	{
		cout << char(i) << "\n";
		i++;
	}	
	
}
int main()
{

	number_with_whileloop();

	return 0;
}
```
## Output
```
A
B
C
D
E
F
G
H
I
J
K
L
M
N
O
P
Q
R
S
T
U
V
W
X
Y
Z
```
---
# (#50)
![[2025-03-20 (6).png]]
## Input
```cpp
#include <iostream>
using namespace std;

void check_pin()
{
    int pinCode = 1234; // الرمز الصحيح
    int userPin;
    int attempts = 0; // متغير لتتبع عدد المحاولات
    const int MAX_ATTEMPTS = 3; // الحد الأقصى للمحاولات

    while (attempts < MAX_ATTEMPTS)
    {
        cout << "Enter your PIN: ";
        cin >> userPin;

        if (userPin == pinCode)
        {
            cout << "Your Balance is: 7500\n";
            return; // الخروج من الدالة إذا كان الرمز صحيحًا
        }
        else
        {
            cout << "Wrong PIN\n";
            attempts++; // زيادة عدد المحاولات
        }
    }

    // إذا استنفذت جميع المحاولات
    cout << "Card is locked!\n";
}

int main()
{
    check_pin();
    return 0;
}
```
## Output: false
```
Enter your PIN: 12345
Wrong PIN
Enter your PIN: 456
Wrong PIN
Enter your PIN: 678
Wrong PIN
Card is locked!
```
## Output: True
```
Enter your PIN: 1234
Your Balance is: 7500
```