---
creation_date: 2025-05-10T00:52
tags:
  - Resources/Articles
Resource: 
Author:
---
> [!summary]-
> 

# <font color="#ffff00"><u>Homework: from 41 to 50 Solutions.</u></font>
---
# <font color="#ffff00">(#41)</font>
![[2025-08-13 (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
void ReadArrayNumbers(int arr1[100], int &arrlength) {

	arrlength = 5;

	arr1[0] = 10;
	arr1[1] = 20;
	arr1[2] = 30;
	arr1[3] = 20;
	arr1[4] = 10;
}
void PrintArray(int arr[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}
bool IsPalindromeNumber(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength / 2; i++)
	{
		if (arr1[i] != arr1[arrlength - 1 - i])
		{
			return false;
		}

	}

	return true;
}
int main() {
	
	int arr1[100], arrlength;

	ReadArrayNumbers(arr1, arrlength);
	cout << "Array Element: ";
	PrintArray(arr1, arrlength);

	if (IsPalindromeNumber(arr1, arrlength))
	{
		cout << "\nYes array is Palindrom.";
	}
	else
	{
		cout << "\nNo the array it's Not a Palindrome.";
	}

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Array Element: 10 20 30 20 10

Yes array is Palindrom.
```
---
# <font color="#ffff00">(#42)</font>
![[2025-08-14.png]]
## <font color="#92d050">Input: My Code</font>
```cpp
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void FillArrayfor1toN(int arr1[100], int &arrlength,int from, int to) {

	for (int i = 0; i < arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(from,to);
	}

}
void PrintArray(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
		cout << arr1[i] << " ";

	cout << "\n";
}
int CheckOddInArray(int arr1[100], int arrlength, int arr2[100]) {

	int OddNumber = 0;

	for (int i = 0; i < arrlength; i++)
	{
		if (arr1[i] % 2 != 0)
		{
			arr2[OddNumber] = arr1[i];
			OddNumber++;
		}

	}
	return OddNumber;
}
int main() {
	
	srand((unsigned)time(NULL));

	int arr1[100], arrlength = 10;
	int arr2[100];

	FillArrayfor1toN(arr1, arrlength,1,100);
	cout << "Original Array: ";
	PrintArray(arr1, arrlength);

	int CheckOdd = CheckOddInArray(arr1, arrlength, arr2);
	cout << "\nThe Odd Number Is : ";
	PrintArray(arr2, CheckOdd);

	return 0;
}
```
## <font color="#92d050">Input: [[abu-hedhoud]]</font>
```cpp
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void FillArrayfor1toN(int arr1[100], int &arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1,100);
	}

}
void PrintArray(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
		cout << arr1[i] << " ";

	cout << "\n";
}
int CheckOddInArray(int arr1[100], int arrlength) {

	int OddNumber = 0;

	for (int i = 0; i < arrlength; i++)
	{
		if (arr1[i] % 2 != 0)
		{
			OddNumber++;
		}

	}
	return OddNumber;
}
int main() {
	
	srand((unsigned)time(NULL));

	int arr1[100], arrlength = 10;

	FillArrayfor1toN(arr1, arrlength);
	cout << "Original Array: ";
	PrintArray(arr1, arrlength);

	cout << "\nThe Odd Number Is : " << CheckOddInArray(arr1, arrlength);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Original Array: 5 25 40 97 78 61 49 24 97 24

The Odd Number Is : 5 25 97 61 49 97
```
---
# <font color="#ffff00">(#43)</font>
![[2025-08-14 (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void FillArrayfor1toN(int arr1[100], int &arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1,100);
	}

}
void PrintArray(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
		cout << arr1[i] << " ";

	cout << "\n";
}
int CheckEvenInArray(int arr1[100], int arrlength) {

	int EvenNumber = 0;

	for (int i = 0; i < arrlength; i++)
	{
		if (arr1[i] % 2 == 0)
		{
			EvenNumber++;
		}

	}
	return EvenNumber;
}
int main() {
	
	srand((unsigned)time(NULL));

	int arr1[100], arrlength = 10;

	FillArrayfor1toN(arr1, arrlength);
	cout << "Original Array: ";
	PrintArray(arr1, arrlength);

	cout << "\nThe Even Number Is : " << CheckEvenInArray(arr1, arrlength);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Original Array: 65 21 89 24 75 40 6 96 19 22

The Even Number Is : 5
```
---
# <font color="#ffff00">(#44)</font>
![[2025-08-15.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void FillArrayfor1toN(int arr1[100], int &arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(-100,100);
	}

}
void PrintArray(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
		cout << arr1[i] << " ";

	cout << "\n";
}
int CheckPositiveNumberInArray(int arr1[100], int arrlength) {

	int PositiveNumber = 0;

	for (int i = 0; i < arrlength; i++)
	{
		if (arr1[i] >= 0)
		{
			PositiveNumber++;
		}

	}
	return PositiveNumber;
}
int main() {
	
	srand((unsigned)time(NULL));

	int arr1[100], arrlength = 10;

	FillArrayfor1toN(arr1, arrlength);
	cout << "Original Array: ";
	PrintArray(arr1, arrlength);

	cout << "The Positive Numbers are: " << CheckPositiveNumberInArray(arr1, arrlength);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Original Array: -56 -48 50 -83 -76 -51 42 25 -14 -16

The Positive Numbers are: 3
```
---
# <font color="#ffff00">(#45)</font>
![[2025-08-15 (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void FillArrayfor1toN(int arr1[100], int &arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(-100,100);
	}

}
void PrintArray(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
		cout << arr1[i] << " ";

	cout << "\n";
}
int CheckNegativeNumberInArray(int arr1[100], int arrlength) {

	int NegativeNumber = 0;

	for (int i = 0; i < arrlength; i++)
	{
		if (arr1[i] < 0)
		{
			NegativeNumber++;
		}

	}
	return NegativeNumber;
}
int main() {
	
	srand((unsigned)time(NULL));

	int arr1[100], arrlength = 10;

	FillArrayfor1toN(arr1, arrlength);
	cout << "Original Array: ";
	PrintArray(arr1, arrlength);

	cout << "\nThe Negative Numbers are: " << CheckNegativeNumberInArray(arr1, arrlength);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Original Array: -93 33 64 31 1 21 54 24 -56 -77

The Negative Numbers are: 3
```
---
# <font color="#ffff00">(#46)</font>
![[2025-08-15 (2).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNegativeNumber(string message) {

	int num;

	do
	{
		cout << message;
		cin >> num;
	} while (num > 0);

	return num;
}
float MyAbs(int num) {

	if (num > 0)
		return num;
	else
		return num * -1;

}
int main() {
		
	float Number = ReadNegativeNumber("Enter a Negative Number: ");

	cout << "\nMy abs Result : " << MyAbs(Number);
	cout << "\nC++ abs Result : " << abs(Number);
	
	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter a Negative Number: -10

My abs Result : 10
C++ abs Result : 10
```
---
# <font color="#ffff00">(#47)</font>
![[2025-08-18 (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNumber(string message) {

	float num;

	cout << message;
	cin >> num;

	return num;
}

float GetFractionPart(float Number) {

	return Number - int(Number);
}

int MyRoundResult(float Number) {

	int IntPart;
	IntPart = int(Number);

	float FractionPart = GetFractionPart(Number);

	if (abs(FractionPart) >= 0.5)
	{
		if (Number > 0)
		{
			return ++IntPart;
		}
		else
		{
			return --IntPart;
		}

	}
	else
	{
		return IntPart;
	}

}
int main() {
		
	float Number = ReadNumber("Enter a Number: ");

	cout << "\nMy Round Result : " << MyRoundResult(Number);
	cout << "\nC++ Round Result : " << round(Number);
	
	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter a Number: 10.7

My Round Result : 11
C++ Round Result : 11
```
---
# <font color="#ffff00">(#48)</font>
![[2025-08-19 (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNumber(string message) {

	float num;

	cout << message;
	cin >> num;

	return num;
}

float GetFloorOfNumber(float Number) {

	if (Number > 0)
	{
		return int(Number);
	}
	else
	{
		return int(Number) - 1;
	}
}
int main() {
		
	float Number = ReadNumber("Enter a Number: ");

	cout << "\nMy MyFloor Result: " << GetFloorOfNumber(Number);
	cout << "\nC++ Floor Result: " << floor(Number);
	
	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter a Number: -10.4

My MyFloor Result: -11
C++ Floor Result: -11
```
---
# <font color="#ffff00">(#49)</font>
![[2025-08-23.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNumber(string message) {

	float num;

	cout << message;
	cin >> num;
			
	return num;
}
float GetFractionPart(float Number) {

	return Number - int(Number);
}
int GetCeilOfNumber(float Number) {

	if (abs(GetFractionPart(Number) > 0))
	{

		if (Number > 0)
		{
			return int(Number) + 1;
		}
		else
		{
			return int(Number);
		}

	}
	else
	{
		return Number;
	}
}
int main() {
		
	float Number = ReadNumber("Enter a Number: ");

	cout << "\nMy Ceil Result: " << GetCeilOfNumber(Number);
	cout << "\nC++ Ceil Result: " << ceil(Number);
	
	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter a Number: -10.7

My Ceil Result: -10
C++ Ceil Result: -10
```
---
# <font color="#ffff00">(#50)</font>
![[2025-08-23 (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNumber(string message) {

	float num;

	cout << message;
	cin >> num;
			
	return num;
}
float GetSquarRootOfNumber(float Number) {

	return pow(Number, 0.5);
}
int main() {
		
	float Number = ReadNumber("Enter a Number: ");

	cout << "\nMy Ceil Result: " << GetSquarRootOfNumber(Number);
	cout << "\nC++ Ceil Result: " << sqrt(Number);
	
	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter a Number: 25

My Ceil Result: 5
C++ Ceil Result: 5
```
---
