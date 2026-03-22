---
date: 2025-03-09T12:43
tags:
  - Resources/Articles
---
Resource: [Lesson #47 - For Loops - YouTube](https://www.youtube.com/watch?v=xr4NQADNbQc&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=53)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[For Loops ]]
___
# Summary 

---
# Highlights & Notes

![[2025-03-09 (8).png]]
![[2025-03-09 (9).png]]
![[2025-03-09 (10).png]]
![[2025-03-09 (11).png]]
![[2025-03-09 (12).png]]
![[2025-03-09 (14).png]]
![[2025-03-09 (13).png]]

---
# Homework in algorithm: 26-27-28-29-30-32-46
![[2025-03-16.png]]
## Input
```cpp
#include<iostream>
using namespace std;

int main()
{
	for (int a = 1;a <= 10;a++)
	{
		cout << a << endl;
	}
	
	
	return 0;
}
```
## Output
```
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

int main()
{
	for (int a = 10;a >= 1;a--)
	{
		cout << a << endl;
	}
	
	
	return 0;
}
```
## Output
```
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
## Input: with [[functions & procedures]]
```cpp
#include<iostream>
using namespace std;
void vread(int &N)
{
	cout << "Please enter number N\n";
	cin >> N;
	cout << "\n";
}
int print_forloop(int N, int sum = 0)
{
	for (int a = 1;a <= N;a += 2)
	{
		sum += a;
	}
	return sum;
}
int main()
{
	int N, sum;
	vread(N);
	cout << "The sum of N is " << print_forloop(N);

	return 0;
}
```
## Output
```
Please enter number N
10

The sum of N is 25
```
---
# (#29)
![[2025-03-16 (3).png]]
## Input: with [[functions & procedures]]
```cpp
#include<iostream>
using namespace std;

void vRead(int& N)
{
	cout << "Please enter number N\n";
	cin >> N;
	cout << "\n";
}
int vPrint_forloop(int N, int sum=0)
{
	for (int a = 0;a <= N;a += 2)
	{
		sum += a;
	}
	return sum;
}
int main()
{
	int N, sum;
	vRead(N);
	cout << "The sum of N is " << vPrint_forloop(N);

	return 0;
}
```
## output
```
Please enter number N
10

The sum of N is 30
```
---
# (#30)
![[2025-03-16 (4).png]]
## Input: [[functions & procedures]]
```cpp
#include<iostream>
using namespace std;

void vRead(int& N)
{
	cout << "Please enter number N\n";
	cin >> N;
	cout << "\n";
}
int vPrint_forloop(int N, int sum=1)
{
	for (int a = 1;a <= N;a++)
	{
		sum *= a;
	}
	return sum;
}
int main()
{
	int N, sum;
	vRead(N);
	cout << "The sum of N is " << vPrint_forloop(N);

	return 0;
}
```
## Output
```
Please enter number N
6

The sum of N is 720
```
---
# (#32)
![[2025-03-16 (10).png]]
## Input: with [[functions & procedures]]
```cpp
#include<iostream>
using namespace std;

void vRead(int& Num, int& M)
{
	cout << "Please enter a number\n";
	cin >> Num;
	cout << "And number M\n";
	cin >> M;
	cout << "\n";
}
int print_forloop(int Num, int M, int P = 1)
{
	for (int i = 0;i < M;i++)
	{
		P *= Num;
	}
	return P;
}
int main()
{
	int Num, M;
	vRead(Num, M);
	cout << print_forloop(Num, M);

	return 0;
}
```
## Output
```
Please enter a number
2
And number M
4

16
```
---
# (#42)

```cpp

```