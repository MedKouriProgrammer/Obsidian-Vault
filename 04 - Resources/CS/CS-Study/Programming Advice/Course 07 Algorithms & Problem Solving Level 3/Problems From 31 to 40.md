---
creation_date: 2026-02-07
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Problems From 31 to 40</font>
---
### <font color="#ffff00">(#31):</font>
![[Pasted image 20260212074051.png]]
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
char ConvrertLetterCase(char Letter) {    

    return isupper(Letter) ? tolower(Letter) : toupper(Letter);

}

short CountLetters(string FullName, char Letter, bool MatchCase=true) {

    short Counter = 0;

    for (short i = 0; i < FullName.length(); i++)
    {
        if(MatchCase)
        {
            if (FullName[i] == Letter)
            {
                Counter++;
            }
        }
        else
        {
            if(tolower(FullName[i]) == tolower(Letter))
            {
                Counter++;
            }

        }

    }
    
    return Counter;
}

int main() {
    
    string FullName = ReadFullName();
    char Letter = ReadCharacter();

    cout << "\nLetter " << Letter << "Count  = " << CountLetters(FullName, Letter);

    cout << "\nLetter '" << Letter << "' Or '" << ConvrertLetterCase(Letter) << "' Count  = "; 
    cout << CountLetters(FullName, Letter, false);
    
    return 0;

}
```
<font color="#646a73">Output:</font>
```
Enter your FullName: 
Mohemmed Abu-Hedhoud @Programming Advice

Enter your FullName: 
m

Letter mCount  = 4
Letter 'm' Or 'M' Count  = 5
```
---
### <font color="#ffff00">(#32):</font>
![[Pasted image 20260212084601.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


char ReadCharacter() {

    char Letter;

    cout << "Enter The Character: " << "\n";
    cin >> Letter;

    return Letter;
}
bool CheckVowelLetter(char Letter) {

    return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));
}

int main() {
    
    char Letter = ReadCharacter();

    if(CheckVowelLetter(Letter))
    {
        cout << "\nYes, Letter '" << Letter << "' is vowel.\n";
    }
    else
    {
        cout << "\nNo, Letter '" << Letter << "' is not vowel.\n";
    }

    
    return 0;

}
```
<font color="#646a73">Output:</font>
```
Enter The Character: 
a

Yes, Letter 'a' is vowel.
```
---
### <font color="#ffff00">(#33):</font>
![[Pasted image 20260212085759.png]]
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

bool CheckVowelLetter(char Letter) {

    if(isupper(Letter))
    {
        Letter = tolower(Letter);
    }

    return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));
}
short CountAllVowels(string Name) {

    short Counter = 0;

    for (short i = 0; i < Name.length(); i++)
    {
        if(CheckVowelLetter(Name[i]))
        {
            Counter++;
        }

    }

    return Counter;
}
int main() {
    
    string FullName = ReadFullName();

    cout << "\nNumber of vowels is: " << CountAllVowels(FullName);

    
    return 0;

}
```
<font color="#646a73">Output:</font>
```
Enter your FullName: 
Mohammed Abu-Hadhoud @Programming Advice

Number of vowels is: 14
```
---
### <font color="#ffff00">(#34):</font>
![[Pasted image 20260212091513.png]]
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

char CheckVowelLetter(char Letter) {

    if(isupper(Letter))
    {
        Letter = tolower(Letter);
    }

    return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));
}
void CountAllVowels(string Name) {

    cout << "\nVowels in string are:  ";
    
    for (short i = 0; i < Name.length(); i++)
    {
        if(CheckVowelLetter(Name[i]))
        {
            cout << Name[i] << "  ";
        }

    }

}
int main() {
    
    string FullName = ReadFullName();

    CountAllVowels(FullName);

    
    return 0;

}
```
<font color="#646a73">Output:</font>
```
Enter your FullName: 
Mohammed Abu-Hadhoud @Programming Advice                                                        
Vowels in string are:  o  a  e  A  u  a  o  u  o  a  i  A  i  e  
```
---
### <font color="#ffff00">(#35):</font>
![[Pasted image 20260212092410.png]]
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

void CountAllVowels(string Name) {

    string delim = " "; // delimiter
    cout << "\nYour string wrords are: \n\n";
    
    short pos = 0;
    string sWord; // define a string variable
    
    // use find() function to get the position of the delimiters
    
    while ((pos = Name.find(delim)) != std::string::npos)
    {
        sWord = Name.substr(0, pos); // store the word
        if (sWord != "")
        {
            cout << sWord << endl;
        }
        Name.erase(0, pos + delim.length()); /* erase() until
        positon and move to next word. */
    }
    
    if (Name != "")
    {
        cout << Name << endl; // it print last word of the string.
    }

}
int main() {
    
    string FullName = ReadFullName();

    CountAllVowels(FullName);

    
    return 0;

}
```
<font color="#646a73">Output:</font>
```
Enter your FullName: 
Mohammed Abu-Hadhoud @Programming Advice

Your string wrords are: 

Mohammed
Abu-Hadhoud
@Programming
Advice
```
---
### <font color="#ffff00">(#36):</font>
![[Pasted image 20260212150133.png]]
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

short CountAllVowels(string Name) {

    string Delim = " ";
    short Pos = 0;
    string Word;
    short Counter = 0;

    while ((Pos = Name.find(Delim)) != std::string::npos)
    {
        Word = Name.substr(0, Pos);

        if(Word != "")
        {
            Counter++;    
        }

        Name.erase(0, Pos + Delim.length()); 
    }

    if (Name != "")
    {
        Counter++;
    }
    
    return Counter;
}
int main() {
    
    string FullName = ReadFullName();

    cout << "\nThe Number of of words on your string is: " << CountAllVowels(FullName);

    
    return 0;

}
```
<font color="#646a73">Output:</font>
```
Enter your FullName: 
Mohammed Abu-Hadhoud @Programming Advice

The Number of of words on your string is: 4
```
---
### <font color="#ffff00">(#37):</font>
![[Pasted image 20260212151643.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;


string ReadFullName() {

    string Name;

    cout << "Enter your FullName: " << "\n";
    getline(cin, Name);

    return Name;
}

vector<string> SplitStrings(string Name, string Delim) {

    short Pos = 0;
    string Word;

    vector<string> ModName;
    

    while ((Pos = Name.find(Delim)) != std::string::npos)
    {
        Word = Name.substr(0, Pos);

        if(Word != "")
        {
            ModName.push_back(Word);
        }

        Name.erase(0, Pos + Delim.length()); 
    }

    if (Name != "")
    {
        ModName.push_back(Word);
    }
    
    return ModName;
}
int main() {
    
    string FullName = ReadFullName();

    vector<string> ModifName = SplitStrings(FullName, " ");

    cout << "\nTokens = " << ModName.size() << endl;

    for (string &Name : ModifName)
    {
        cout << Name << endl;
    }


    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter your FullName: 
Mohammed Abu-Hadhoud @Programming Advice

Tokens = 4
Mohammed
Abu-Hadhoud
@Programming
@Programming
```
---
### <font color="#ffff00">(#38):</font>
![[Pasted image 20260212180345.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;


string ReadFullName() {

    string Name;

    cout << "Enter your FullName: " << "\n";
    getline(cin, Name);

    return Name;
}

string TrimLeft(string Name) {

    for (short i = 0; i < Name.length(); i++)
    {
        if (Name[i] != ' ')
        {
            return Name.substr(i, Name.length() - i);
        }

    }

    return "";
}

string TrimRight(string Name) {

    for (short i = Name.length() - 1; i >= 0; i++)
    {
        if (Name[i] != ' ')
        {
            return Name.substr(0, i + 1);
        }

    }

    return "";
}

string Trim(string Name) {
    
    return (TrimLeft(TrimRight(Name)));
}

int main() {


    string Name = ReadFullName();

    cout << "\nString = " << Name;
    cout << "\n\nTrim Left = " << TrimLeft(Name);
    cout << "\nTrim Right = " << TrimRight(Name);
    cout << "\nTrim = " << Trim(Name);

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter your FullName: 
Mohammed Abu-Hahdoud

String = Mohammed Abu-Hahdoud

Trim Left = Mohammed Abu-Hahdoud
Trim Right = Mohammed Abu-Hahdoud
Trim = Mohammed Abu-Hahdoud
```
---
### <font color="#ffff00">(#39):</font>
![[Pasted image 20260213165004.png]]
### <font color="#ffff00">My Input:</font>
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string JoinVector(vector<string> &Names, string Sep) {

    string SWord;
    
    for (int i = 0; i < Names.size(); i++)
    {
        // SWord = Names[i];
        SWord = SWord.append(Names[i]);
        SWord = SWord.append(Sep);
    }
    
    return SWord;
}

int main() {

    vector<string> Names = {"Mohammed", "Faid", "Ali", "Maher"};

    cout << "Vector after join: \n";
    cout << JoinVector(Names, " ");

    return 0;
}
```
### <font color="#ffff00">My Input:</font>
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string JoinVector(vector<string> &Names, string Delim) {

    string SWord = "";
    
    for (string &i : Names)
    {
        if(i == Names.back())
            SWord = SWord + i;
        else 
        SWord = SWord + i + Delim;    
    }
    
    return SWord;
}

int main() {

    vector<string> Names = {"Mohammed", "Faid", "Ali", "Maher"};

    cout << "Vector after join: \n";
    cout << JoinVector(Names, " ");

    return 0;
}
```
### <font color="#ffff00">abu-hedhoud Input:</font>
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string JoinVector(vector<string> &Names, string Delim) {

    string SWord = "";
    
    for (string &i : Names)
    {
        SWord = SWord + i + Delim;
    }
    
    return SWord.substr(0, SWord.length() - Delim.length());
}

int main() {

    vector<string> Names = {"Mohammed", "Faid", "Ali", "Maher"};

    cout << "Vector after join: \n";
    cout << JoinVector(Names, " ");

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Vector after join: 
Mohammed Faid Ali Maher
```
---
### <font color="#ffff00">(#40):</font>
![[Pasted image 20260213202438.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string JoinVector(vector<string> &Names, string Delim) {

    string SWord = "";
    
    for (string &i : Names)
    {
        SWord = SWord + i + Delim;
    }
    
    return SWord.substr(0, SWord.length() - Delim.length());
}

string JoinVector(string ArrNames[4], short length, string Delim) {

    string SWord = "";
    
    for (short i = 0; i < length; i++)
    {
        SWord = SWord + ArrNames[i] + Delim;
    }
    
    return SWord.substr(0, SWord.length() - Delim.length());;
}

int main() {

    vector<string> Names = {"Mohammed", "Faid", "Ali", "Maher"};
    string ArrNames[] = {"Mohammed", "Faid", "Ali", "Maher"};

    cout << "Vector after join: \n";
    cout << JoinVector(Names, " ");

    cout << "\n\nArray after join: \n";
    cout << JoinVector(ArrNames, 4, " ");

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Vector after join: 
Mohammed Faid Ali Maher

Array after join: 
Mohammed Faid Ali Maher
```
---
