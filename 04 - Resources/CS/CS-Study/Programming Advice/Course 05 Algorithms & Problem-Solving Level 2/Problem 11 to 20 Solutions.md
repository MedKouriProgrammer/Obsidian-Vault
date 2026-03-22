---
creation_date: 2025-05-10T00:52
tags:
  - Resources/Articles
Resource: 
Author:
---
> [!summary]-
> 

# <font color="#ffff00"><u>Homework: from 11 to 20 Solutions.</u></font>
---
# <font color="#ffff00">(#11)</font>
![[2025-05-28.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>   
#include <string>     
using namespace std;

int ReadPositiveNumber(string message) {

    int num = 0;
    do
    {
        cout << message;
        cin >> num;
    } while (num <= 0);

    return num;
}
int ReverseNumber(int num) {

    int Remainder = 0, Number2 = 0;

    while(num > 0) {

        Remainder = num % 10;
        num = num / 10;
        Number2 = Number2 * 10 + Remainder;
    }
    
    return Number2;
}
bool CheckPalindromeNumber(int num) {

    return num == ReverseNumber(num);
}

int main() {

    if (CheckPalindromeNumber(ReadPositiveNumber("Enter Positive Number: ")))
        cout << "Yes,it is a Palindrome Number.";
    else
        cout << "No, it is Not a Palindrome Number.";

    return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter Positive Number: 12321
Yes,it is a Palindrome Number.
```
---
# <font color="#ffff00">(#12)</font>
![[2025-06-03.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
using namespace std;

int ReadPositiveNumber(string message) {

	int num = 0;

	do
	{
		cout << message;
		cin >> num;
	} while (num <= 0);

	return num;
}
void PrintInvestedPattern(int num) {

	cout << "\n";

	for (int i = num;i >= 1;i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}

}
int main() {
	
	PrintInvestedPattern(ReadPositiveNumber("Enter Positive Number: "));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter Positive Number: 5

55555
4444
333
22
1
```
---
# <font color="#ffff00">(#13)</font>
![[2025-06-05 1.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
using namespace std;

int ReadPositiveNumber(string message) {

	int num = 0;

	do
	{
		cout << message;
		cin >> num;
	} while (num <= 0);

	return num;
}
void PrintInvestedPattern(int num) {

	cout << "\n";

	for (int i = 1;i <= num;i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}

}
int main() {
	
	PrintInvestedPattern(ReadPositiveNumber("Enter Positive Number: "));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter Positive Number: 5

1
22
333
4444
55555
```
---
# <font color="#ffff00">(#14)</font>
![[2025-06-09.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
using namespace std;

int ReadPositiveNumber(string message) {

	int num = 0;

	do
	{
		cout << message;
		cin >> num;
	} while (num <= 0);

	return num;
}
void PrintInvestedPattern(int num) {

	cout << "\n";

	for (int i = 65 + num - 1; i >= 65; i--)
	{

		for (int j = 1; j <= num - ((65 + num - 1) - i); j++)
		{
			cout << char(i);
		}

		cout << "\n";
	}

}
int main() {
	
	PrintInvestedPattern(ReadPositiveNumber("Enter Positive Number: "));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter Positive Number: 5

EEEEE
DDDD
CCC
BB
A
```
---
# <font color="#ffff00">(#15)</font>
![[2025-06-21.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
using namespace std;

int ReadPositiveNumber(string message) {

	int num = 0;

	do
	{
		cout << message;
		cin >> num;
	} while (num <= 0);

	return num;
}
void PrintInvestedPattern(int num) {

	cout << "\n";

	for (int i = 65; i <= 65 + num - 1; i++)
	{

		for (int j = 1; j <= i - 65 + 1; j++)
		{
			cout << char(i);
		}

		cout << "\n";
	}

}
int main() {
	
	PrintInvestedPattern(ReadPositiveNumber("Enter Positive Number: "));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter Positive Number: 5

A
BB
CCC
DDDD
EEEEE
```
---
# <font color="#ffff00">(#16)</font>
![[2025-06-29.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;


void PrintWordFromAAAtoZZZ() {

	cout << "\n";
	string Word = "";

	for (int a = 65 ; a <= 90 ; a++)
	{
		for (int b = 65; b <= 90; b++)
		{
			for (int k = 65;k <= 90;k++)
			{
				Word = Word + char(b);
				Word = Word + char(k);
				cout << Word << endl;
				Word = "";
			}

		}
		cout << "\n___________________________________________________________\n";
	}

}
int main() {

	PrintWordFromAAAtoZZZ();

	return 0;
}
```
## <font color="#92d050">Output</font>
```
AAA
AAB
AAC
AAD
...
...
ZZW
ZZX
ZZY
ZZZ
```
---
# <font color="#ffff00">(#17)</font>
![[2025-06-30.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;

string ReadPassword(string message) {

	string pass;
	
		cout << message;
		cin >> pass;

	return pass;
}
bool QuessPassword(string pass) {

	cout << "\n";
	string Word = "";
	int counter = 0;
	
	for (int a = 65;a <= 99;a++)
	{
		
		for (int b = 65;b <= 99;b++)
		{
				for (int k = 65;k <= 99;k++)
				{
					Word = Word + char(a);
					Word = Word + char(b);
					Word = Word + char(k);

					counter++;

					cout << "Trial [" << counter << "]: " << Word << endl;

					if (pass == Word)
					{
						cout << "\nPassword is " << pass << "\n";
						cout << "Found after " << counter << " Trials(s)";
						return true;
					}
					

					Word = "";

					
				}

		}
			cout << "\n____________________________________________________" << endl;

	}
	return false;
}
int main() {

	QuessPassword(ReadPassword("Enter your Character Password\n"));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter your Character Password
AAF

Trial [1]: AAA
Trial [2]: AAB
Trial [3]: AAC
Trial [4]: AAD
Trial [5]: AAE
Trial [6]: AAF

Password is AAF
Found after 6 Trials(s)
```
---
# <font color="#ffff00">(#18)</font>
![[2025-07-01.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <string>
using namespace std;

string ReadName(string message) {

	string name;
	
		cout << message;
		cin >> name;

	return name;
}
string ReverseNametoCode(string name, int EncryptionKey) {

	cout << "\n";

	for (int i = 0;i <= name.length();i++)
	{
		name[i] = char((int)name[i] + EncryptionKey);
	}

	return name;
}
string ReturnCodetoName(string name, int EncryptionKey) {

	cout << "\n";

	for (int i = 0;i <= name.length(); i++)
	{
		name[i] = char((int)name[i] - EncryptionKey);
	}

	return name;
}
int main() {

	const int EncryptionKey = 2;

	string name = ReadName("Enter Your String Name: ");

	string encryptedText = ReverseNametoCode(name, EncryptionKey);
	string decryptedText = ReturnCodetoName(encryptedText, EncryptionKey);

	cout << "Text Before Encryption: " << decryptedText << "\n";
	cout << "Text After Encryption: " << encryptedText << "\n";
	cout << "Text After Decryption: " << decryptedText << endl;


	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter Your String Name: Mohammed


Text Before Encryption: Mohammed
Text After Encryption: Oqjcoogf
Text After Decryption: Mohammed
```
---
# <font color="#ffff00">(#19)</font>
![[2025-07-02 (1).png]]
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
int main() {

	srand((unsigned)time(NULL));

	cout << ReadRandomNumber(1, 10) << endl;
	cout << ReadRandomNumber(1, 10) << endl;
	cout << ReadRandomNumber(1, 10) << endl;

	return 0;
}
```
## <font color="#92d050">Output</font>
```
7
1
5
```
---
# <font color="#ffff00">(#20)</font>
![[2025-07-03.png]]
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

		return char(ReadRandomNumber(97,122));
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
int main() {

	srand((unsigned)time(NULL));

	cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
	cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
	cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
	cout << GetRandomCharacter(enCharType::Digit) << endl;
	
	return 0;
}
```
## <font color="#92d050">Output</font>
```
g
G
/
1a
```
---
## <font color="#ff0000">Note: After finish those Exercise you should resolve them again to Consolidation this information, And remember you are better than many people on the world, So keep running to your goals.</font>
