---
date: 2025-03-09T17:22
tags:
  - Resources/Articles
---
Resource: [Lesson 49 - Nested For Loops. - YouTube](https://www.youtube.com/watch?v=if9Iq4WTkVU&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=55&pp=iAQB)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Nested For Loops.]]
___
# Summary 

---
# Highlights & Notes

- # Nested For Loops.
- ## Let’s see how to make a multiplication table.
- ## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	for (int a = 1;a <= 10;a++)
	{
		cout << "a = " << a << "\n";// here will print a = 1 after output the second loops will comeback again and increase 1, total a = 2.
		
		for (int f = 1;f <= 10;f++)
		{
			cout << a << " * " << f << " = " << a * f << endl;
		}// a will be 1 after secand loop 2 and 3 and...
		cout << endl;
	}



	return 0;
}
```
## output
```cpp
a = 1
1 * 1 = 1
1 * 2 = 2
1 * 3 = 3
1 * 4 = 4
1 * 5 = 5
1 * 6 = 6
1 * 7 = 7
1 * 8 = 8
1 * 9 = 9
1 * 10 = 10

a = 2
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
2 * 10 = 20

a = 3
3 * 1 = 3
3 * 2 = 6
3 * 3 = 9
3 * 4 = 12
3 * 5 = 15
3 * 6 = 18
3 * 7 = 21
3 * 8 = 24
3 * 9 = 27
3 * 10 = 30

a = 4
4 * 1 = 4
4 * 2 = 8
4 * 3 = 12
4 * 4 = 16
4 * 5 = 20
4 * 6 = 24
4 * 7 = 28
4 * 8 = 32
4 * 9 = 36
4 * 10 = 40

a = 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50

a = 6
6 * 1 = 6
6 * 2 = 12
6 * 3 = 18
6 * 4 = 24
6 * 5 = 30
6 * 6 = 36
6 * 7 = 42
6 * 8 = 48
6 * 9 = 54
6 * 10 = 60

a = 7
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70

a = 8
8 * 1 = 8
8 * 2 = 16
8 * 3 = 24
8 * 4 = 32
8 * 5 = 40
8 * 6 = 48
8 * 7 = 56
8 * 8 = 64
8 * 9 = 72
8 * 10 = 80

a = 9
9 * 1 = 9
9 * 2 = 18
9 * 3 = 27
9 * 4 = 36
9 * 5 = 45
9 * 6 = 54
9 * 7 = 63
9 * 8 = 72
9 * 9 = 81
9 * 10 = 90

a = 10
10 * 1 = 10
10 * 2 = 20
10 * 3 = 30
10 * 4 = 40
10 * 5 = 50
10 * 6 = 60
10 * 7 = 70
10 * 8 = 80
10 * 9 = 90
10 * 10 = 100
```
---
## input
```cpp
#include<iostream>
using namespace std;

int main()
{
	for (int a = 1;a <= 10;a++)
	{
		
		for (int f = 1;f <= 10;f++)
		{
			cout << "*";
		}
		cout << endl;
	}



	return 0;
}
```
## Note: the out loop represented in the outer part, I mean lines.
## Output
```
**********
**********
**********
**********
**********
**********
**********
**********
**********
**********
```
---
# What if I write `for(int f=1;f <= a; f++)` let’s find out.
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	for (int a = 1;a <= 10;a++)
	{
		
		for (int f = 1;f <= a;f++)
		{
			cout << "*";
		}
		cout << endl;
	}



	return 0;
}
```
## Note: a take 1 and f take 1 and both has ++, that’s mean a + f = * then a + f = ** to the 10 of *
## output
```
*
**
***
****
*****
******
*******
********
*********
**********
```