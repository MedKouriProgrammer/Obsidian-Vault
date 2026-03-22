---
creation_date: 2025-05-10T00:52
tags:
  - Resources/Articles
Resource: 
Author:
---
> [!summary]-
> 

# <font color="#ffff00"><u>Homework: from 31 to 40 Solutions.</u></font>
---
# <font color="#ffff00">(#31)</font>
![[2025-07-26.png]]
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
int Swap(int& A, int& B) {

	int Temp = A;
	A = B;
	B = Temp;

	return Temp;
}
void FillArrayfor1toN(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		 arr1[i] = i + 1;
	}

}
void ArrayAfterShuffle(int arr1[100], int arrlength) {

	for (int i = 1; i < arrlength; i++)
	{
		int Shuffle1 = ReadRandomNumber(1, arrlength) - 1;
		int Shuffle2 = ReadRandomNumber(1, arrlength) - 1;

		Swap(arr1[Shuffle1], arr1[Shuffle2]);
	}

}
void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";  
}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100];
	int arrlength = ReadPositiveNumber("Enter Positive Number: ");

	FillArrayfor1toN(arr1, arrlength);

	cout << "\nArray 1 elements:\n";
	PrintArray(arr1, arrlength);

	ArrayAfterShuffle(arr1, arrlength);

	cout << "\nArray element after shuffle: \n";
	PrintArray(arr1, arrlength);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter Positive Number:
10

Array 1 elements:
1 2 3 4 5 6 7 8 9 10

Array element after shuffle:
1 5 7 2 8 3 10 6 9 4
```
---
# <font color="#ffff00">(#32)</font>
![[2025-07-28.png]]
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
void FillNumbersWithRandom(int arr1[100], int& arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1, 100);
	}
	cout << "\n";
}
void Copy_ReverseArray(int Sourse[100], int Destination[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{

		Destination[i] = Sourse[arrlength - 1 - i];

	}

}
void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";  
}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100],arr2[100];
	int arrlength = ReadPositiveNumber("Enter Positive Number: ");

	FillNumbersWithRandom(arr1, arrlength);

	cout << "\nArray 1 elements:\n";
	PrintArray(arr1, arrlength);

	Copy_ReverseArray(arr1, arr2, arrlength);

	cout << "\nArray 2 elemnets after copying arry 1 in reversed order: \n";
	PrintArray(arr2, arrlength);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter Positive Number:
10


Array 1 elements:
82 61 4 6 40 69 94 3 5 48

Array 2 elemnets after copying arry 1 in reversed order:
48 5 3 94 69 40 6 4 61 82
```
---
# <font color="#ffff00">(#33)</font>
![[2025-07-28 (2).png]]
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
void PrintStringArray(string Arr1[100], int arrlength) {

	cout << "\nArray Elements: \n";

	for (int i = 0; i < arrlength; i++)
	{
		cout << "Array[" << i << "]: ";
		cout << Arr1[i] << endl;
	}

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
void FillArraywithKeys(string Arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		Arr1[i] = GenerateKey();
	}
}
int main() {

	srand((unsigned)time(NULL));

	string arr1[100];
	int arrlength = ReadPositiveNumber("Enter a Positive Number: ");

	FillArraywithKeys(arr1, arrlength);

	PrintStringArray(arr1, arrlength);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter a Positive Number: 5

Array Elements:
Array[0]: GIIM-NLLA-OFJK-RIHX
Array[1]: BZEN-SKYI-USLU-LBOK
Array[2]: SXBY-GPRV-JKGG-NPOI
Array[3]: BGRG-VTPM-EJHB-VBUD
Array[4]: NQNN-WFZF-LUKR-PTMI
```
---
# <font color="#ffff00">(#34)</font>
![[2025-07-30.png]]
## <font color="#92d050">Input: My Code</font>
```cpp
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
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
void FillNumbersWithRandom(int arr1[100], int& arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1, 100);
	}
	cout << "\n";
}
void PrintArray(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
void Print_FindArrayNumberAndArray(int arr1[100], int arrlength, int ChoiseUser) {

	cout << "\n\nEnter a number to searche for ?: ";
	cin >> ChoiseUser;

	cout << "\nNumber you are Looking for is: " << ChoiseUser;

	bool Found = false;

	for (int i = 0; i < arrlength; i++)
	{

		if (ChoiseUser == arr1[i])
		{
			cout << "\nThe Number Found at Position: " << i;
			cout << "\nThe Number Found it's order: " << i + 1;
			Found = true;
		}

	}

	if (!Found)
		cout << "\nThe Number is Not Found :-(" << endl;
}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], ChoiseUser = 0;
	int arrlength = ReadPositiveNumber("Enter a Positive Number: ");

	FillNumbersWithRandom(arr1, arrlength);

	cout << "Arary 1 element: \n";
	PrintArray(arr1, arrlength);

	Print_FindArrayNumberAndArray(arr1, arrlength, ChoiseUser);

	return 0;
}
```
## <font color="#92d050">Input: [[abu-hedhoud]]</font>
```cpp
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void FillNumbersWithRandom(int arr1[100], int& arrlength) {

	cout << "\nEnter number of elements:\n";
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)
	
		arr1[i] = ReadRandomNumber(1, 100);
	
	cout << "\n";
}
void PrintArray(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
short Print_FindArrayNumberAndArray(int arr1[100], int arrlength, int ChoiseUser) {

	for (int i = 0; i < arrlength; i++)
	{
		if (arr1[i] == ChoiseUser)
			return i; 
	}

	return -1;
	
}
int ReadNumber()
{
	int Number;
	cout << "\nPlease enter a number to search for?\n";
	cin >> Number;
	return Number;
}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], ChoiseUser = 0;
	int arrlength;

	FillNumbersWithRandom(arr1, arrlength);

	cout << "Arary 1 element: \n";
	PrintArray(arr1, arrlength);

	ChoiseUser = ReadNumber();
	cout << "\nNumber you are looking for is: " << ChoiseUser << endl;

	short NumberPosition = Print_FindArrayNumberAndArray(arr1, arrlength, ChoiseUser);

	if (NumberPosition == -1)
		cout << "The number is not found :-(\n";
	else
	{
		cout << "The number found at position: " << NumberPosition << endl;
		cout << "The number found its order  : " << NumberPosition + 1 << endl;
	}

	return 0;
}
```
## <font color="#92d050">Output: True</font>
```
Enter a Positive Number: 10

Arary 1 element:
89 83 26 59 95 76 20 85 7 37

Enter a number to searche for ?: 7

Number you are Looking for is: 7
The Number Found at Position: 8
The Number Found it's order: 9
```
## <font color="#92d050">Output: Fulse</font>
```cpp
Enter a Positive Number: 10

Arary 1 element:
75 50 75 12 1 23 90 71 64 78

Enter a number to searche for ?: 55

Number you are Looking for is: 55
The Number is Not Found :-(
```
---
# <font color="#ffff00">(#35)</font>
![[2025-07-31.png]]
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
void FillNumbersWithRandom(int arr1[100], int& arrlength) {

	cout << "\nEnter number of elements:\n";
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)

		arr1[i] = ReadRandomNumber(1, 100);

	cout << "\n";
}
void PrintArray(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
short Print_FindArrayNumberAndArray(int arr1[100], int arrlength, int ChoiseUser) {

	for (int i = 0; i < arrlength; i++)
	{
		if (arr1[i] == ChoiseUser)
			return i;
	}

	return -1;

}
bool CheckArrayNumber(int arr1[100], int arrlength, int ChoiseUser) {

	return Print_FindArrayNumberAndArray(arr1, arrlength, ChoiseUser) != -1;

}
int ReadNumber()
{
	int Number;
	cout << "\nPlease enter a number to search for?\n";
	cin >> Number;
	return Number;
}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], ChoiseUser = 0;
	int arrlength;

	FillNumbersWithRandom(arr1, arrlength);

	cout << "Arary 1 element: \n";
	PrintArray(arr1, arrlength);

	ChoiseUser = ReadNumber();
	cout << "\nNumber you are looking for is: " << ChoiseUser << endl;

	short NumberPosition = Print_FindArrayNumberAndArray(arr1, arrlength, ChoiseUser);

	if (!CheckArrayNumber(arr1, arrlength, ChoiseUser))
		cout << "The number is not found :-(\n";
	else
		cout << "Yes, The number is found :-)" << endl;

	return 0;
}
```
## <font color="#92d050">Output:  True</font>
```
Enter number of elements:
10

Arary 1 element:
55 84 77 57 76 56 86 18 98 18
Please enter a number to search for?
55

Number you are looking for is: 55
Yes, The number is found :-)
```
## <font color="#92d050">Output: False</font>
```
Enter number of elements:
10

Arary 1 element:
54 77 80 59 5 10 37 94 65 34
Please enter a number to search for?
55

Number you are looking for is: 55
The number is not found :-(
```
---
# <font color="#ffff00">(#36)</font>
![[2025-07-31 (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int ReadNumber() {

	int Number;
	cout << "\nPlease enter a number ?\n";
	cin >> Number;
	return Number;
}
void AddElementToArray(int Number, int arr1[100], int &arrlength) {

	arrlength++;
	arr1[arrlength - 1] = Number;
}
void AskUser(int arr1[100], int &arrlength) {

	int UserChoise;

	do
	{
		AddElementToArray(ReadNumber(), arr1, arrlength);
		cout << "Do you want to add more Number? ( [0]=No , [1]=Yes ):\n";
		cin >> UserChoise;

	} while (UserChoise == 1);

}
void PrintArray(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], arrlength = 0;

	AskUser(arr1, arrlength);

	cout << "\nArray Length: " << arrlength;
	cout << "\nArray Element: ";
	PrintArray(arr1, arrlength);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter a number ?
10
Do you want to add more Number? ( [0]=No , [1]=Yes ):
1

Please enter a number ?
20
Do you want to add more Number? ( [0]=No , [1]=Yes ):
1

Please enter a number ?
30
Do you want to add more Number? ( [0]=No , [1]=Yes ):
0

Array Length: 3
Array Element: 10 20 30
```
---
# <font color="#ffff00">(#37)</font>
![[2025-08-05.png]]
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
void FillNumbersWithRandom(int arr1[100], int& arrlength) {

	cout << "Enter the Number Length: ";
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1, 100);
	}
	cout << "\n";
}
void PrintArray(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
void AddElementToArray(int Number, int arr1[100], int &arrlength) {

	arrlength++;
	arr1[arrlength - 1] = Number;
}
void CopyArray(int SourceArray[100], int arrDestination[100], int arrlength, int &arrDestinationLength) {

	for (int i = 0; i < arrlength; i++)
	{
		AddElementToArray(SourceArray[i], arrDestination, arrDestinationLength);
	}

}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], arrlength1 = 0;

	FillNumbersWithRandom(arr1, arrlength1);

	int arr2[100], arrlength2 = 0;
	CopyArray(arr1, arr2, arrlength1, arrlength2);

	cout << "Array Elements: \n";
	PrintArray(arr1, arrlength1);

	cout << "\n\nArray 2 element after copy: \n";
	PrintArray(arr2, arrlength2);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter the Number Length: 10

Array Elements:
36 74 4 23 32 11 62 56 4 50

Array 2 element after copy:
36 74 4 23 32 11 62 56 4 50
```
---
# <font color="#ffff00">(#38)</font>
![[2025-08-05 (1).png]] 
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
void FillNumbersWithRandom(int arr1[100], int& arrlength) {

	cout << "Enter the Number Length: ";
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1, 100);
	}
	cout << "\n";
}
void PrintArray(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
void AddElementToArray(int Number, int arr1[100], int &arrlength) {

	arrlength++;
	arr1[arrlength - 1] = Number;
}
void CopyOddArray(int arr1[100], int arr2[100], int arrlength, int &arrLengthOdd) {

	 arrLengthOdd = 0;

	for (int i = 0; i < arrlength; i++)
	{
		if (arr1[i] % 2 != 0)
		{
			arr2[arrLengthOdd] = arr1[i];
			arrLengthOdd++;
		}

	}

}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], arrlength = 0;

	FillNumbersWithRandom(arr1, arrlength);

	cout << "Array Elements: \n";
	PrintArray(arr1, arrlength);

	int arr2[100], arrLengthOdd = 0;

	CopyOddArray(arr1, arr2, arrlength, arrLengthOdd);

	cout << "\n\nArray 2 Odd Number: \n";
	PrintArray(arr2, arrLengthOdd);
	
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
void FillNumbersWithRandom(int arr1[100], int& arrlength) {

	cout << "Enter the Number Length: ";
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1, 100);
	}
	cout << "\n";
}
void PrintArray(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
void AddElementToArray(int Number, int arr1[100], int &arrlength) {

	arrlength++;
	arr1[arrlength - 1] = Number;
}
void CopyArray(int SourceArray[100], int arrDestination[100], int arrlength, int& arrDestinationLength) {

	for (int i = 0; i < arrlength; i++)
	{
		if (SourceArray[i] % 2 != 0)
		AddElementToArray(SourceArray[i], arrDestination, arrDestinationLength);
	
	}

}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], arrlength = 0;

	FillNumbersWithRandom(arr1, arrlength);

	cout << "Array Elements: \n";
	PrintArray(arr1, arrlength);

	int arr2[100], arrLengthOdd = 0;

	CopyArray(arr1, arr2, arrlength, arrLengthOdd);

	cout << "\n\nArray 2 Odd Number: \n";
	PrintArray(arr2, arrLengthOdd);
	
	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter the Number Length: 10

Array Elements:
8 40 47 5 85 44 2 53 63 44

Array 2 Odd Number:
47 5 85 53 63
```
---
# <font color="#ffff00">(#39)</font>
![[2025-08-07.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enPrime_NotPrime {

	Prime = 1, Notprime = 2
};

enPrime_NotPrime CheckPrimeNumber(int Number) {

	int M = round(Number / 2);

	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrime_NotPrime::Notprime;
	}
	return enPrime_NotPrime::Prime;
}
int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void FillNumbersWithRandom(int arr1[100], int& arrlength) {

	cout << "Enter the Number Length: ";
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)
	{
		arr1[i] = ReadRandomNumber(1, 100);
	}
	cout << "\n";
}
void PrintArray(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
void AddElementToArray(int Number, int arr1[100], int &arrlength) {

	arrlength++;
	arr1[arrlength - 1] = Number;
}
void CopyArray(int SourceArray[100], int arrDestination[100], int arrlength, int& arrDestinationLength) {

	for (int i = 0; i < arrlength; i++)
	{
		if (CheckPrimeNumber(SourceArray[i]) == enPrime_NotPrime::Prime)
		{
			AddElementToArray(SourceArray[i], arrDestination, arrDestinationLength);
		}

	}

}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], arrlength = 0;

	FillNumbersWithRandom(arr1, arrlength);

	cout << "Array Elements: \n";
	PrintArray(arr1, arrlength);

	int arr2[100], arrLengthOdd = 0;

	CopyArray(arr1, arr2, arrlength, arrLengthOdd);

	cout << "\n\nArray 2 Odd Number: \n";
	PrintArray(arr2, arrLengthOdd);
	
	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter the Number Length: 10

Array Elements:
22 81 57 24 79 67 76 42 49 5

Array 2 Odd Number:
79 67 5
```
---
# <font color="#ffff00">(#40)</font>
![[2025-08-09.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void FillArray(int arr1[100], int &arrlength) {

    arrlength = 10;

	arr1[0] = 10;
	arr1[1] = 10;
	arr1[2] = 10;
	arr1[3] = 20;
	arr1[4] = 20;
	arr1[5] = 40;
	arr1[6] = 40;
	arr1[7] = 40;
	arr1[8] = 90;
	arr1[9] = 90;

}
void PrintArray(int arr1[100], int arrlength) {

	cout << "\n";

	for (int i = 0; i < arrlength; i++)
	{
		cout << arr1[i] << " ";
	}

}
short FindArrayNumberAndArray(int arr1[100], int arrlength, int ChoiseUser) {

	for (int i = 0; i < arrlength; i++)
	{
		if (arr1[i] == ChoiseUser)
			return i;
	}

	return -1;

}
bool CheckArrayNumber(int arr1[100], int arrlength, int ChoiseUser) {

	return FindArrayNumberAndArray(arr1, arrlength, ChoiseUser) != -1;

}
void AddElementToArray(int Number, int arr1[100], int& arrlength) {

	arrlength++;
	arr1[arrlength - 1] = Number;
}
void CopyArray(int SourceArray[100], int arrDestination[100], int arrlength, int& arrDestinationLength) {

	for (int i = 0; i < arrlength; i++)
	{
		if (!CheckArrayNumber(arrDestination, arrDestinationLength, SourceArray[i]))
		{
			AddElementToArray(SourceArray[i], arrDestination, arrDestinationLength);
		}
	}
}
int main() {
	
	int SourceArray[100], arrlength, arrDestination[100], arrDestinationLength = 0;
	
	FillArray(SourceArray, arrlength);
	PrintArray(SourceArray, arrlength);

	CopyArray(SourceArray, arrDestination, arrlength, arrDestinationLength);

	PrintArray(arrDestination, arrDestinationLength);

	return 0;
}
```
## <font color="#92d050">Output</font>
```
10 10 10 20 20 40 40 40 90 90
10 20 40 90
```
---
