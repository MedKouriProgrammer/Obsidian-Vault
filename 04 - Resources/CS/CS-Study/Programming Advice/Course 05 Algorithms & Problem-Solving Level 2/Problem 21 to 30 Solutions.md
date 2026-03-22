---
creation_date: 2025-05-10T00:52
tags:
  - Resources/Articles
Resource: 
Author:
---
> [!summary]-
> 

# <font color="#ffff00"><u>Homework: from 21 to 30 Solutions.</u></font>
---
# <font color="#ffff00">(#21)</font>
![[2025-07-12.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
enum enCharType {

	SmallLetter = 1,
	CapitalLetter = 2,
	SpecialCharacter = 3,
	Digit = 4
};
char GetRandomCharacter(enCharType chartype) {

	switch (chartype) {

	case enCharType::SmallLetter:
	{

		return char(ReadRandomNumber(97, 122));
		break;
	}
	case enCharType::CapitalLetter:
	{
		return char(ReadRandomNumber(65, 90));
		break;
	}
	case enCharType::SpecialCharacter:
	{
		return char(ReadRandomNumber(33, 47));
		break;
	}
	case enCharType::Digit:
	{
		return char(ReadRandomNumber(48, 57));
		break;
	}

	}

	return '\0';
}
int ReadPositiveNumber(string message) {

	int num = 0;

	do
	{
		cout << message;
		cin >> num;

	} while (num <= 0);
	
	return num;
}
string GenerateWord(enCharType chartype, short length) {

	string word;

	for (int i = 1;i <= length;i++) 
	{
		word = word + GetRandomCharacter(chartype);
	}
	return word;
}
string GenerateKey() {

	string key = "";

	key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	key = key + GenerateWord(enCharType::CapitalLetter, 4);

	return key;
}
void GenerateKeys(short NumberOfKey) {

	cout << "\n";

	for (int i = 1; i <= NumberOfKey; i++)
	{
		cout << "Key [" << i << "]:";
		cout << GenerateKey() << endl;
	}

}
int main() {

	srand((unsigned)time(NULL));

	GenerateKeys(ReadPositiveNumber("Enter Positive Number: "));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter Positive Number: 5

Key [1]:CHMN-IPPI-NAUI-BGOA
Key [2]:ZDMI-FHVC-FDKE-XEQC
Key [3]:AMQB-LELU-QKBZ-GROT
Key [4]:QKEG-COKZ-GINU-YMMZ
Key [5]:VOUM-TPMN-RFHS-JQWV
```
---
# <font color="#ffff00">(#22)</font>
![[2025-07-14.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadPositiveNumber(string Message) {

	int Number = 0;
	
	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);
	
	return Number;
}
void ReadArray(int arr[100], int &arrlength) {

	cout << "Enter Number of Array: ";
	cin >> arrlength;

	cout << "\nEnter Array Element: \n";
	
	for (int i = 0; i < arrlength; i++)
	{
		cout << "Element [" << i + 1 << "]: ";
		cin >> arr[i];
	}
	cout << endl;
}
void PrintArray(int arr[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}
int PrintRepeatation(int arr[100], int arrlength, int Number) {

	int count = 0;

	for (int i = 0; i < arrlength - 1; i++)
	{
		if (Number == arr[i])
		{
			count++;
		}

	}

	return count;
}
int main() {

	int arr[100], arrlength, NumberToCheck;

	ReadArray(arr, arrlength);

	NumberToCheck = ReadPositiveNumber("Enter the Number to Check: ");

	cout << "\nOrigine array: ";
	PrintArray(arr, arrlength);

	cout << "\nNumber " << NumberToCheck << " Is Repeated ";
	cout << PrintRepeatation(arr, arrlength, NumberToCheck) << " Times(s)";


	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter Number of Array: 5

Enter Array Element:
Element [1]: 1
Element [2]: 1
Element [3]: 1
Element [4]: 2
Element [5]: 3

Enter the Number to Check: 1

Origine array: 1 1 1 2 3

Number 1 Is Repeated 3 Times(s)
```
---
# <font color="#ffff00">(#23)</font>
![[2025-07-18.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void MixingNumbersWithRandom(int arr1[100], int &arrlength) {

	cout << "Enter the Number Length: ";
	cin >> arrlength;

	for (int i = 0; i <= arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1, 100);
	}
	cout << "\n";
}
void PrintMixNumbers(int arr1[100], int arrlength) {

	for (int i = 0; i <= arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], length;
	
	MixingNumbersWithRandom(arr1, length);
	
	cout << "Array Elements: ";
	PrintMixNumbers(arr1, length);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter the Number Length: 10

Array Elements: 2 88 42 76 45 62 60 60 50 25 78
```
---
# <font color="#ffff00">(#24)</font>
![[2025-07-18 (5).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void MixingNumbersWithRandom(int arr1[100], int &arrlength) {

	cout << "Enter the Number Length: ";
	cin >> arrlength;

	for (int i = 0; i <= arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1, 100);
	}
	cout << "\n";
}
void PrintMixNumbers(int arr1[100], int arrlength) {

	for (int i = 0; i <= arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
int PrintMaxNumber(int arr1[100], int arrlength) {

	int Max = 0;

	for (int i = 0; i <= arrlength; i++)
	{
		if (arr1[i] > Max)
		{
			Max = arr1[i];
		}

	}
	return Max;
}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], length;
	
	MixingNumbersWithRandom(arr1, length);
	
	cout << "Array Elements: ";
	PrintMixNumbers(arr1, length);

	cout << "\nMax Number is: ";
	cout << PrintMaxNumber(arr1, length);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter the Number Length: 10

Array Elements: 50 46 76 7 32 36 28 31 65 81 78
Max Number is: 81
```
---
# <font color="#ffff00">(#25)</font>
![[2025-07-19.png]]
## <font color="#92d050">Input: My Code</font>
```cpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void MixingNumbersWithRandom(int arr1[100], int &arrlength) {

	cout << "Enter the Number Length: ";
	cin >> arrlength;

	for (int i = 0; i <= arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1, 100);
	}
	cout << "\n";
}
void PrintMixNumbers(int arr1[100], int arrlength) {

	for (int i = 0; i <= arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
int PrintMinNumber(int arr1[100], int arrlength) {

	int Min = 100;

	for (int i = 0; i <= arrlength; i++)
	{
		if (arr1[i] < Min)
		{
			Min = arr1[i];
		}

	}
	return Min;
}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], length;
	
	MixingNumbersWithRandom(arr1, length);
	
	cout << "Array Elements: ";
	PrintMixNumbers(arr1, length);

	cout << "\nMin Number is: ";
	cout << PrintMaxNumber(arr1, length);

	return 0;
}
```
## <font color="#92d050">Input: Abu-Hedhoud</font>
```cpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void MixingNumbersWithRandom(int arr1[100], int &arrlength) {

	cout << "Enter the Number Length: ";
	cin >> arrlength;

	for (int i = 0; i <= arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1, 100);
	}
	cout << "\n";
}
void PrintMixNumbers(int arr1[100], int arrlength) {

	for (int i = 0; i <= arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
int PrintMinNumber(int arr1[100], int arrlength) {

	int Min = 0;
	Min = arr1[0];

	for (int i = 0; i <= arrlength; i++)
	{
		if (arr1[i] < Min)
		{
			Min = arr1[i];
		}

	}
	return Min;
}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], length;
	
	MixingNumbersWithRandom(arr1, length);
	
	cout << "Array Elements: ";
	PrintMixNumbers(arr1, length);

	cout << "\nMin Number is: ";
	cout << PrintMaxNumber(arr1, length);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter the Number Length: 10

Array Elements: 44 88 4 60 72 36 8 13 93 12 36
Min Number is: 4
```
---
# <font color="#ffff00">(#26)</font>
![[2025-07-19 (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void MixingNumbersWithRandom(int arr1[100], int &arrlength) {

	cout << "Enter the Number Length: ";
	cin >> arrlength;

	for (int i = 0; i <= arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1, 100);
	}
	cout << "\n";
}
void PrintMixNumbers(int arr1[100], int arrlength) {

	for (int i = 0; i <= arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
int PrintSumNumber(int arr1[100], int arrlength) {

	int Sum = 0;

	for (int i = 0; i <= arrlength; i++)
	{

			Sum = Sum + arr1[i];

	}

	return Sum;
}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], length;
	
	MixingNumbersWithRandom(arr1, length);
	
	cout << "Array Elements: ";
	PrintMixNumbers(arr1, length);

	cout << "\nSum of Numbers are: ";
	cout << PrintSumNumber(arr1, length);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter the Number Length: 10

Array Elements: 32 85 79 52 20 79 35 99 96 8 75
Sum of Numbers are: 660
```
---
# <font color="#ffff00">(#27)</font>
![[2025-07-19 (2).png]]
## <font color="#92d050">Input: My Code</font>
```cpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void MixingNumbersWithRandom(int arr1[100], int &arrlength) {

	cout << "Enter the Number Length: ";
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1, 100);
	}
	cout << "\n";
}
void PrintMixNumbers(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
int PrintAverageNumber(int arr1[100], int arrlength) {

	int Sum = 0;
	int Average = 0;

	for (int i = 0; i < arrlength; i++)
	{
			Sum = Sum + arr1[i];

	}

	if (Sum > 0)
	{
		Average = Sum / arrlength;
	}

	return Average;
}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], length;
	
	MixingNumbersWithRandom(arr1, length);
	
	cout << "Array Elements: ";
	PrintMixNumbers(arr1, length);

	cout << "\nAverage of Numbers are: ";
	cout << PrintAverageNumber(arr1, length);

	return 0;
}
```
## <font color="#92d050">Input: [[abu-hedhoud]]</font>
```cpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void MixingNumbersWithRandom(int arr1[100], int &arrlength) {

	cout << "Enter the Number Length: ";
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1, 100);
	}
	cout << "\n";
}
void PrintMixNumbers(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
int PrintSumNumber(int arr1[100], int arrlength) {

	int Sum = 0;

	for (int i = 0; i < arrlength; i++)
	{

			Sum = Sum + arr1[i];

	}

	
	return Sum;
}
float PrintAverageNumber(int arr1[100], int arrlength) {

	return (float)PrintSumNumber(arr1, arrlength) / arrlength;

}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], length;
	
	MixingNumbersWithRandom(arr1, length);
	
	cout << "Array Elements: ";
	PrintMixNumbers(arr1, length);

	cout << "\n\nAverage of Numbers are: ";
	cout << PrintAverageNumber(arr1, length);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter the Number Length: 10

Array Elements: 18 92 46 21 38 80 25 68 71 54

Average of Numbers are: 51.3
```
---
# <font color="#ffff00">(#28)</font>
![[2025-07-22.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void MixingNumbersWithRandom(int arr1[100], int &arrlength) {

	cout << "Enter the Number Length: ";
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1, 100);
	}
	cout << "\n";
}
void PrintMixNumbers(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
void CopyArray(int SourceArray[100], int Destination[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
	   Destination[i] = SourceArray[i];
	}

}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], length;
	
	MixingNumbersWithRandom(arr1, length);

	int arr2[100];
	CopyArray(arr1, arr2, length);
	
	cout << "Array Elements: \n";
	PrintMixNumbers(arr1, length) ;

	cout << "\n\nArray 2 element after copy: \n";
	PrintMixNumbers(arr2, length);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter the Number Length: 10

Array Elements:
38 5 17 74 65 48 41 24 6 62

Array 2 element after copy:
38 5 17 74 65 48 41 24 6 62
```
---
# <font color="#ffff00">(#29)</font>
![[2025-07-22 (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enPrimeNOTPrime {
	
	Prime = 1, NotPrime = 2 

};
enPrimeNOTPrime CheckNumber(int num) {

	int C = round(num / 2);
	for (int counter = 2;counter <= C;counter++)
	{
		if (num % counter == 0)
			return enPrimeNOTPrime::NotPrime;
	}
	return enPrimeNOTPrime::Prime;
}
int ReadRandomNumber(int from, int to) {A

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void MixingNumbersWithRandom(int arr1[100], int &arrlength) {

	cout << "Enter the Number Length: ";
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1, 100);
	}
	cout << "\n";
}
void PrintPrimeOfArray(int SourceArray[100], int Destination[100], int arrlength, int &arrlength2) {

	int counter = 0;

	for (int i = 0; i < arrlength; i++)
	{
		if (CheckNumber(SourceArray[i]) == enPrimeNOTPrime::Prime)
		{
			Destination[counter] = SourceArray[i];
			counter++;
		}

	}
	arrlength2 = counter;
}
void PrintMixNumbers(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], length;
	
	MixingNumbersWithRandom(arr1, length);

	int arr2[100], length2 = 0;
	PrintPrimeOfArray(arr1, arr2, length, length2);
	
	cout << "Array Elements: \n";
	PrintMixNumbers(arr1, length) ;

	cout << "\nThe PrimeNumber in Array2 are: \n";
	PrintMixNumbers(arr2, length2);


	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter the Number Length: 10

Array Elements:
65 74 71 29 92 79 26 74 99 45
The PrimeNumber in Array2 are:
71 29
```
---
# <font color="#ffff00">(#30)</font>
![[2025-07-25.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
int ReadPositiveNumber(string Message)
{
	int Number = 0;  
	do
	{
		cout << Message << endl;  
		cin >> Number;            
	} while (Number <= 0);        

	return Number;  
}
void MixingNumbersWithRandom(int arr1[100], int &arrlength) {

	cout << "Enter the Number Length: ";
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1, 100);
	}
	cout << "\n";
}
void SumOfRandomNumbers(int arr1[100], int arr2[100], int sum[100], int length) {

	for (int i = 0;i < length; i++)
	{
		sum[i] = arr1[i] + arr2[i];
	}


}
void PrintMixNumbers(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
int main() {

	srand((unsigned)time(NULL));

	int arr[100], arr2[100], arrSum[100];

	int arrLength = ReadPositiveNumber("How many elements ?\n");

	MixingNumbersWithRandom(arr, arrLength);
	MixingNumbersWithRandom(arr2, arrLength);

	SumOfRandomNumbers(arr, arr2, arrSum, arrLength);

	cout << "\nArray 1 elements:\n";
	PrintMixNumbers(arr, arrLength);

	cout << "\nArray 2 elements:\n";
	PrintMixNumbers(arr2, arrLength);

	cout << "\n\nThe Sum of Arrays are: ";
	PrintMixNumbers(arrSum, arrLength);
	return 0;
}
```
## <font color="#92d050">Output</font>
```
How many elements ?

2
Enter the Number Length: 10

Enter the Number Length: 10


Array 1 elements:
32 44 73 43 40 25 64 61 45 58
Array 2 elements:
84 13 42 93 43 78 15 63 98 61

The Sum of Arrays are: 116 57 115 136 83 103 79 124 143 119
```
---
