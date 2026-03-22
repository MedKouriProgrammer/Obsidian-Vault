---
creation_date: 2025-05-03T14:39
tags:
  - Resources/Articles
Resource: 
Author:
---
> [!summary]- 
> 

# <font color="#ffff00"><u>Homework: from 1 to 10 Solutions.</u></font>
---
# <font color="#ffff00">(#1)</font>
![[2025-05-03.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

void PrintVerticalNumbers() {

	cout << "\n\t\t\tMultiplication Taple From 1 to 10.\n\n";
	for (int i = 1;i <= 10;i++)
	{
		cout << "\t" << i;

	}
	cout << "\n___________________________________________________________________________________\n";
}
string ColumSperator(int i) {

	if (i < 10)
	{
		return "   |";
	}
	else
	{
		return "  |";
	}

}
void PrintHorizontalNumber() {

	PrintVerticalNumbers();

	for (int i = 1;i <= 10;i++)
	{
		cout << " " << i << ColumSperator(i) << "\t";

		for (int j = 1;j <= 10;j++)
		{
			cout << i * j << "\t";
		}

		cout << endl;
	}
	
}
int main() {

	PrintHorizontalNumber();

	return 0;
}
```
## <font color="#92d050">Output</font>
![[2025-05-17 1.png]]

---
# <font color="#ffff00">(#2)</font>
![[2025-05-03 (2).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

enum enPrimeNOTPrime { Prime = 1, NotPrime = 2 };
int Read_Positive_Numbers(string message)
{
	int num;
	do
	{
		cout << message;
		cin >> num;

	} while (num <= 0);

	return num;
}
enPrimeNOTPrime CheckNumber(int num)
{
	int C = round(num / 2);
	for (int counter = 2;counter <= C;counter++)
	{
		if (num % counter == 0)
			return enPrimeNOTPrime::NotPrime;
	}
	return enPrimeNOTPrime::Prime;
}
void PrintPrimeNumber_Result(int num)
{
	cout << "_____________________________________________________";
	cout << "\nThe PrimeNumber from 1 " << " to " << num << "\n";
	cout << " are ....\n";

	for (int s = 1;s <= num;s++)
	{
		if (CheckNumber(s) == enPrimeNOTPrime::Prime)
		{
			cout << s << endl;
		}

	}

}
int main()
{
	PrintPrimeNumber_Result(Read_Positive_Numbers("Please enter a Positive number: "));

	return 0;
}
```
## <font color="#00b0f0">New Trick: </font>
```
if (CheckNumber(s) == enPrimeNOTPrime::Prime)
```
## <font color="#00b0f0">The new is if statement with the function and variable in parentheses, also the equals enum.</font>
## <font color="#92d050">Output</font>
```
Please enter a Positive number: 10
_____________________________________________________
The PrimeNumber from 1  to 10
 are ....
1
2
3
5
7
```
---
# <font color="#ffff00">(#3)</font>
![[2025-05-05.png]]
## <font color="#92d050">Input: My Code</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

enum enPrimeNumber {
	primenum = 1, notprimenum = 2
};
int ReadPositiveNumber(string message) {

	int num = 0;
	do
	{
		cout << message;
		cin >> num;

	} while (num <= 0);

	return num;
}
enPrimeNumber CheckPerfectNumber(int num) {

	int sum = 0;
	int half = round(num / 2);

	for (int a = 1;a <= half;a++)
	{
		if (num % a == 0)
		{
			sum += a;
		}

	}
	if (sum == num)
	{
		return enPrimeNumber::primenum;
	}
	else
	{
		return enPrimeNumber::notprimenum;
	}

}
void PrintPerfectNumber(int num) {

	if (CheckPerfectNumber(num)==enPrimeNumber::primenum)
	{
		cout << num << " is a Perfect Number" << endl;
	}
	else
	{
		cout << num << " is not a Perfect Numeber" << endl;
	}
}
int main() {

	PrintPerfectNumber(ReadPositiveNumber("Enter a Positive Number: ")); 

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter a positive Number: 28
28 It's Perfect Number.
```
## <font color="#92d050">Input: Abu-Hedhoud Code</font>
```cpp
#include <iostream>   
#include <string>     
using namespace std;  

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
bool isPerfectNumber(int Number)
{
    int Sum = 0; 
    
    for (int i = 1; i < Number; i++)
    {

        if (Number % i == 0)
            Sum += i; 
    }
    
    
    return Number == Sum;
}
void PrintResults(int Number)
{
    if (isPerfectNumber(Number))
        cout << Number << " Is Perfect Number.\n";
    else
        cout << Number << " Is NOT Perfect Number.\n";
}
int main()
{
    PrintResults(ReadPositiveNumber("Please enter a positive number?"));

    return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter a positive number?
28
28 Is Perfect Number.
```
---
# <font color="#ffff00">(#4)</font>
![[2025-05-05 (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>   
#include <string>     
using namespace std;

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
bool isPerfectNumber(int Number)
{
    int Sum = 0;

    for (int i = 1; i < Number; i++)
    {

        if (Number % i == 0)
            Sum += i;
    }


    return Number == Sum;
}
void PrintResults(int Number)
{
    for (int i = 1;i < Number;i++)
    {
        if (isPerfectNumber(i))
        {
            cout << i << "\n";
        }
    }
   
}
int main()
{
    PrintResults(ReadPositiveNumber("Please enter a positive number?"));

    return 0;
}
```
## <font color="#92d050">Output</font>
```
Please enter a positive number?
500
6
28
496
```
---
# <font color="#ffff00">(#5)</font>
![[2025-05-06.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>   
#include <string>     
using namespace std;

int ReadPositiveNumber(string message) {

    int num;
    do {

        cout << message;
        cin >> num;

    } while (num <= 0);

    return num;
}
void Print_ReverseNumber(int num) {

    int Reverse = 0;

    while (num > 0) {

        Reverse = num % 10;
        num = num / 10;
        cout << Reverse << endl;
    }

}
int main() {

      Print_ReverseNumber(ReadPositiveNumber("Enter a positive number: "));

    return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter a positive number: 12345
5
4
3
2
1
```
---
# <font color="#ffff00">(#6)</font>
![[2025-05-06 (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include<cmath>
#include<string>
using namespace std;

int ReadPositiveNumber(string message)
{
	int num;
	do
	{
		cout << message;
		cin >> num;
	} while (num <= 0);

	return num;
}
int PrintSumOfDigits(int num)
{
	int Reverse = 0, sum = 0;

	while (num > 0) {

		Reverse = num % 10;
		num /= 10;
		sum += Reverse;
	}
	return sum;
}
int main() {

	cout << "The Sum of Digits = " << PrintSumOfDigits(ReadPositiveNumber("Enter a Positive Number: "));

	return 0;
}

```
## <font color="#92d050">Output</font>
```
Enter a Positive Number: 1234
The Sum of Digits = 10
```
---
# <font color="#ffff00">(#7)</font>
![[2025-05-06 (2).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>   
#include <string>     
using namespace std;

int ReadPositiveNumber(string message) {

    int num;
    do {

        cout << message;
        cin >> num;

    } while (num <= 0);

    return num;
}
int Print_ReverseNumber(int num) {

    int Reverse = 0, Number2 = 0;

    while (num > 0) {

        Reverse = num % 10;
        num = num / 10;
        Number2 = Number2 * 10 + Reverse;
    }
    return Number2;
}
int main() {

    cout << "Reverse Number is = " << Print_ReverseNumber(ReadPositiveNumber("Enter a positive number: ")) << endl;

    return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter a positive number: 12345
Reverse Number is = 54321
```
---
# <font color="#ffff00">(#8)</font>
![[2025-05-06 (4).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>   
#include <string>     
using namespace std;

int ReadPositiveNumber(string message) {

    int num;
    do {

        cout << message;
        cin >> num;

    } while (num <= 0);

    return num;
}
int Print_Digitfrequency(int num,int digit_number) {

    int Remender = 0, digit_frequency = 0;

    while (num > 0) {

        Remender = num % 10;
        num = num / 10;

        if (digit_number == Remender) {
        
            digit_frequency++;
        }

    }

    return digit_frequency;
}
int main() {
    int num = ReadPositiveNumber("Enter the Numbers: ");
    short digit_number = ReadPositiveNumber("Enter a digit Number: ");
    cout << "The Degit Frequency is = " << Print_Digitfrequency(num, digit_number);

    return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter the Numbers: 1223222
Enter a digit Number: 2
The Degit Frequency is = 5
```
---
# <font color="#ffff00">(#9)</font>
![[2025-05-07.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>   
#include <string>     
using namespace std;

int ReadPositiveNumber(string message) {

    int num;
    do {

        cout << message;
        cin >> num;

    } while (num <= 0);

    return num;
}
int CountDigitFrequency(int num, short DigitToCheck) {

    int Remender = 0, Freq = 0;

    while (num > 0) {

        Remender = num % 10;
        num = num / 10;

        if (DigitToCheck == Remender) {

            Freq++;
        }

    }

    return Freq;
}
void PrintAllDigitFrequency(int num) {

    cout << "\n";

    for (int i = 0;i < 10;i++)
    {
        short DigitFrequency = 0;
        DigitFrequency = CountDigitFrequency(num, i);
        
        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequency is " << DigitFrequency << " Times(s)" << endl;
        }

    }

}
int main() {
  
    int number = ReadPositiveNumber("Enter a positive number: ");
    PrintAllDigitFrequency(number);

    return 0;
}

```
## <font color="#92d050">Output</font>
```
Enter a positive number: 1223222

Digit 1 Frequency is 1 Times(s)
Digit 2 Frequency is 5 Times(s)
Digit 3 Frequency is 1 Times(s)
```
---
# <font color="#ffff00">(#10)</font>
![[2025-05-09 (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>   
#include <string>     
using namespace std;

int ReadNumber(string message) {
    
    int num = 0;

    do
    {
        cout << message;
        cin >> num;

    } while (num < 0);

    return num;
}
int ReverseNumber(int num) {

    int Remainder = 0, Reverse = 0;

    while (num > 0)
    {
        Remainder = num % 10;
        num = num / 10;
        Reverse = Reverse * 10 + Remainder;
    }

    return Reverse;
}
void PrintReverseNumber(int num) {
    
    cout << "\n";

    int Remainder = 0;
    while (num > 0)
    {
        Remainder = num % 10;
        num = num / 10;
        cout << Remainder << endl;
    }

}
int main() {

    PrintReverseNumber(ReverseNumber(ReadNumber("Enter the positive Number: ")));

    return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter the positive Number: 1234

1
2
3
4
```
---
## <font color="#ff0000">Note: After finish those Exercise you should resolve them again to Consolidation this information, And remember you are better than many people on the world, So keep running to your goals.</font>