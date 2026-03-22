---
creation_date: 2026-02-07
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Problems From 01 to 10</font>
---
### <font color="#ffff00">(#21):</font>
![[Pasted image 20260209215118.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void PrintFibonacciSeries(short Range) {

    short FebNumber = 0;
    short Prev2 = 0, Prev1 = 1;
    
    cout << "1 ";
    for(int i = 2; i <= 10; i++)
    {
        FebNumber = Prev1 + Prev2;
        cout << FebNumber << " ";
        Prev2 = Prev1;
        Prev1 = FebNumber;
    }
    

}

int main() {
    
    
    PrintFibonacciSeries(10);

  
    return 0;

}
```
<font color="#646a73">Output:</font>
```
1 1 2 3 5 8 13 21 34 55 
```
---
### <font color="#ffff00">(#22):</font>
![[Pasted image 20260209215118.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void PrintFibonacciSeries_Recursion(short Range, short Prev2, short Prev1) {


    if (Range > 0)
    {
        short FebNumber = Prev1 + Prev2;
        cout << FebNumber << " ";
        Prev2 = Prev1;
        Prev1 = FebNumber;
        PrintFibonacciSeries_Recursion(Range - 1, Prev2, Prev1);
    }
    

}

int main() {
    
    short i = 2;

    cout << "1 ";
    PrintFibonacciSeries_Recursion(10, 0, 1);

  
    return 0;

}
```
<font color="#646a73">Output:</font>
```
1 1 2 3 5 8 13 21 34 55 89 
```
---
### <font color="#ffff00">(#23):</font>
![[Pasted image 20260211084609.png]]
![[Pasted image 20260211084716.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


string ReadFullName() {

    string Name;

    cout << "Enter your FullName: ";
    getline(cin, Name);

    return Name;
}

void PrintFirstCharOfString(string FullName) {

    bool IsFirstLetter = true;

    for (int i = 0; i < FullName.length(); i++)
    {
        if (FullName[i] != ' ' && IsFirstLetter)
        {
            cout << FullName[i] << endl;

        }
        IsFirstLetter = (FullName[i] == ' ' ? true: false);

    }


}
int main() {
    
    string FullName = ReadFullName();
    PrintFirstCharOfString(FullName);
  
    return 0;

}
```
<font color="#646a73">Output:</font>
```
Enter your FullName: Mohamed Saqer Abu-Hedhoud @Programing Advice
M
S
A
@
A
```
---
### <font color="#ffff00">(#24):</font>
![[Pasted image 20260211094905.png]]
![[Pasted image 20260211094927.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


string ReadFullName() {

    string Name;

    cout << "Enter your FullName: ";
    getline(cin, Name);

    return Name;
}

string PrintFirstCharOfString(string FullName) {

    bool IsFirstLetter = true;

    for (int i = 0; i < FullName.length(); i++)
    {
        if (FullName[i] != ' ' && IsFirstLetter)
        {
            FullName[i] = toupper(FullName[i]);
        }
        IsFirstLetter = (FullName[i] == ' ' ? true: false);

    }

    return FullName; 
}
int main() {
    
    string FullName = ReadFullName();

    cout << "\nString after conversion:\n";

    cout << PrintFirstCharOfString(FullName);
  
    return 0;

}
```
<font color="#646a73">Output:</font>
```
Enter your FullName: mohemed saqer abu-hedhoud                      

String after conversion:
Mohemed Saqer Abu-hedhoud
```
---
### <font color="#ffff00">(#25):</font>
![[Pasted image 20260211101523.png]]
![[Pasted image 20260211101543.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


string ReadFullName() {

    string Name;

    cout << "Enter your FullName: ";
    getline(cin, Name);

    return Name;
}

string PrintFirstCharOfString(string FullName) {

    bool IsFirstLetter = true;

    for (int i = 0; i < FullName.length(); i++)
    {
        if (FullName[i] != ' ' && IsFirstLetter)
        {
            FullName[i] = tolower(FullName[i]);
        }
        IsFirstLetter = (FullName[i] == ' ' ? true: false);

    }

    return FullName; 
}
int main() {
    
    string FullName = ReadFullName();

    cout << "\nString after conversion:\n";

    cout << PrintFirstCharOfString(FullName);
  
    return 0;

}
```
<font color="#646a73">Output:</font>
```
Enter your FullName: Mohemed Saqer Abu-hedhoud

String after conversion:
mohemed saqer abu-hedhoud
```
---
### <font color="#ffff00">(#26):</font>
![[Pasted image 20260211161516.png]]
![[Pasted image 20260211161534.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


string ReadFullName() {

    string Name;

    cout << "Enter your FullName: " << "\n";
    getline(cin, Name);

    return Name;
}

string GetUpperOfString(string FullName) {


    for (short i = 0; i < FullName.length(); i++)
    {
        FullName[i] = toupper(FullName[i]);
    }

    return FullName; 
}

string GetLowerOfString(string FullName) {


    for (short i = 0; i < FullName.length(); i++)
    {
        FullName[i] = tolower(FullName[i]);
    }

    return FullName; 
}

int main() {
    
    string FullName = ReadFullName();

    cout << "\nString after Upper:\n";
    cout << GetUpperOfString(FullName) << endl;
    
    cout << "\nString after Lower:\n";
    cout << GetLowerOfString(FullName);

    return 0;

}
```
<font color="#646a73">Output:</font>
```
Enter your FullName: 
mohemed saqer abu-hedhoud

String after Upper:
MOHEMED SAQER ABU-HEDHOUD

String after Lower:
mohemed saqer abu-hedhoud
```
---
### <font color="#ffff00">(#27):</font>
![[Pasted image 20260211164249.png]]
![[Pasted image 20260211164333.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


char ReadLetter() {

    char Letter;

    cout << "Enter a Character? : " << "\n";
    cin >> Letter;

    return Letter;
}

char GetInvertingCase(char Letter) {

    return (isupper(Letter) ? tolower(Letter) : toupper(Letter));
}

int main() {
    
    char Letter = ReadLetter();

    cout << "\nChar after inverting case: " << endl;
    cout << GetInvertingCase(Letter);  

    return 0;

}
```
<font color="#646a73">Output:</font>
```
Enter a Character? : 
a

Char after inverting case: 
A
```
---
### <font color="#ffff00">(#28):</font>
![[Pasted image 20260211170207.png]]
![[Pasted image 20260211170123.png]]
### <font color="#ffff00">My Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


string ReadFullName() {

    string Name;

    cout << "Enter your FullName: " << "\n";
    getline(cin, Name);

    return Name;
}

string GetInvertAllLetter(string FullName) {


    for (short i = 0; i < FullName.length(); i++)
    {
        (isupper(FullName[i]) ? FullName[i] = tolower(FullName[i]) : FullName[i] = toupper(FullName[i]));
    }

    return FullName;
}


int main() {
    
    string FullName = ReadFullName();

    cout << "\nString after Upper:\n";
    cout << GetInvertAllLetter(FullName);
    
    return 0;

}
```
### <font color="#ffff00">abu-hedhoud Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


string ReadFullName() {

    string Name;

    cout << "Enter your FullName: " << "\n";
    getline(cin, Name);

    return Name;
}

char GetInvertingCase(char Letter) {

    return (isupper(Letter) ? tolower(Letter) : toupper(Letter));
}

string GetInvertAllLetter(string FullName) {


    for (short i = 0; i < FullName.length(); i++)
    {
        FullName[i] = GetInvertingCase(FullName[i]);
    }

    return FullName;
}


int main() {
    
    string FullName = ReadFullName();

    cout << "\nString after Upper:\n";
    cout << GetInvertAllLetter(FullName);
    
    return 0;

}
```
<font color="#646a73">Output:</font>
```
Enter your FullName: 
mohemmed ABU-HADHOUD

String after Upper:
MOHEMMED abu-hadhoud
```
---
### <font color="#ffff00">(#29):</font>
![[Pasted image 20260211172807.png]]
![[Pasted image 20260211172926.png]]
### <font color="#ffff00">My Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


string ReadFullName() {

    string Name;

    cout << "Enter your FullName: " << "\n";
    getline(cin, Name);

    return Name;
}
short GetLenghtLetter(string FullName) {

    return FullName.length();

}
short GetUpperCont(string FullName) {

    short UpperCounter = 0;

    for (short i = 0; i < FullName.length(); i++)
    {
        if (isupper(FullName[i]))
        {
            UpperCounter++;
        }
    }

    return UpperCounter;
}
short GetLowerCont(string FullName) {

    short LowerCount = 0;

    for (short i = 0; i < FullName.length(); i++)
    {
        if (islower(FullName[i]))
        {
            LowerCount++;
        }
    }

    return LowerCount;
}

int main() {
    
    string FullName = ReadFullName();

    cout << "String Count: " << GetLenghtLetter(FullName) << endl;
    cout << "Capital Letters Count: " << GetUpperCont(FullName) << endl;
    cout << "Small Letters Count: " << GetLowerCont(FullName) << endl;
    
    return 0;

}
```
### <font color="#ffff00">Abu-Hedhoud Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


string ReadFullName() {

    string Name;

    cout << "Enter your FullName: " << "\n";
    getline(cin, Name);

    return Name;
}

enum enWhatToCount { SmallLetters=0, CapitalLetters=1,All=3};

short CountLetters(string S1, enWhatToCount WhatToCount=enWhatToCount::All)
{
    if (WhatToCount == enWhatToCount::All)
    {
        return S1.length();
    }

    short Counter = 0;
    
    for (short i = 0; i < S1.length(); i++)
    {
        if (WhatToCount==enWhatToCount::CapitalLetters && isupper(S1[i]))

        Counter++;

        if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
        Counter++;
    }

    return Counter;
}

int main() {
    
    string FullName = ReadFullName();

    cout << "String Count: " << FullName.length() << endl;
    cout << "Capital Letters Count: " << CountLetters(FullName, enWhatToCount::CapitalLetters) << endl;
    cout << "Small Letters Count: " << CountLetters(FullName , enWhatToCount::CapitalLetters) << endl;
    
    return 0;

}
```
<font color="#646a73">Output:</font>
```
Enter your FullName: 
Mohemmed Abu-Hedhoud 
String Count: 20
Capital Letters Count: 3
Small Letters Count: 15
```
---
### <font color="#ffff00">(#30):</font>
![[Pasted image 20260211193654.png]]
![[Pasted image 20260211193624.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


string ReadFullName() {

    string Name;

    cout << "Enter your FullName: " << "\n";
    getline(cin, Name);

    return Name;
}

char ReadCharacter() {

    char Letter;

    cout << "Enter your FullName: " << "\n";
    cin >> Letter;

    return Letter;
}
bool CheckLetter(string FullName, char Letter, short i) {

    return (FullName[i] == Letter);
}
short CountLetters(string FullName, char Letter) {

    short Counter = 0;

    for (short i = 0; i < FullName.length(); i++)
    {
        if (CheckLetter(FullName, Letter, i))
        {
            Counter++;
        }

    }
    
    return Counter;
}

int main() {
    
    string FullName = ReadFullName();
    char Letter = ReadCharacter();

    cout << "\nLetter " << Letter << "Count  = " << CountLetters(FullName, Letter);
    
    return 0;

}
```
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


string ReadFullName() {

    string Name;

    cout << "Enter your FullName: " << "\n";
    getline(cin, Name);

    return Name;
}

char ReadCharacter() {

    char Letter;

    cout << "\nEnter your FullName: " << "\n";
    cin >> Letter;

    return Letter;
}

short CountLetters(string FullName, char Letter) {

    short Counter = 0;

    for (short i = 0; i < FullName.length(); i++)
    {
        if (FullName[i] == Letter)
        {
            Counter++;
        }

    }
    
    return Counter;
}

int main() {
    
    string FullName = ReadFullName();
    char Letter = ReadCharacter();

    cout << "\nLetter " << Letter << "Count  = " << CountLetters(FullName, Letter);
    
    return 0;

}
```
<font color="#646a73">Output:</font>
```
Enter your FullName: 
Mohemmed Abu-Hedhoud 

Enter your FullName: 
m

Letter mCount  = 2
```
---
