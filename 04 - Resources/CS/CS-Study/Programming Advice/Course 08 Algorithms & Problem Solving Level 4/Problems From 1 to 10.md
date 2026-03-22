---
creation_date: 2026-02-07
tags:
  - Resources/Articles
Resource:
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Problems From 1 to 10</font>
---
### <font color="#ffff00">(1#):</font>
![[Pasted image 20260223135802.png]]
### <font color="#ffff00">My Input: Not Completed</font>
```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;


bool IsTensSpecific(string Number) {

    string Box = "";

    for (int i = 0; i < Number.length(); i++)
    {
        if(Number.length() == 2 || Number.length() == 1)
        {
            Box += Number[i];        
        }

    }

    int Num = stoi(Box);

    if(!Num >= 10 && Num <= 19)
    {
        return true;
    }

    return false;
}

string NumbersOf_HighterPlaceValue(char i) {

    switch (i)
    {
    case '1':
        return "One";
        break;
    case '2':
        return "Two";
        break;
    case '3':
        return "Three";
        break;
    case '4':
        return "Four";
        break;
    case '5':
        return "Five";
        break;
    case '6':
        return "Sex";
        break;
    case '7':
        return "Seven";
        break;
    case '8':
        return "Eigth";
        break;
    case '9':
        return "Nine";
        break;
    case '10':
        return "ten";
        break;
    
        
    default:
        break;
    }

    return "";
}

string TensGeneral(char i) {

    switch (i)
    {

    case '2':
        return "Twenty ";
        break;
    case '3':
        return "Thirty ";
        break;
    case '4':
        return "Forty ";
        break;
    case '5':
        return "Fifty ";
        break;
    case '6':
        return "Sixty ";
        break;
    case '7':
        return "Seventy ";
        break;
    case '8':
        return "Eighty ";
        break;
    case '9':
        return "Ninety ";
        break;
        
    default:
        break;
    }

    return "";
}

string TensSpecific(char i) {
    
    switch (i)
    {

    case '10':
        return "Ten ";
        break;
    case '11':
        return "Eleven ";
        break;
    case '12':
        return "Twelve ";
        break;
    case '13':
        return "Thirteen ";
        break;
    case '14':
        return "Fourteen ";
        break;
    case '15':
        return "Fifteen ";
        break;
    case '16':
        return "Sixteen ";
        break;
    case '18':
        return "Eighteen ";
        break;
    case '19':
        return "Nineteen ";
        break;


    default:
        break;
    }

    return "";
}

string GetCharacterOnString(short Position, char i, bool IsTensSpecific_Response) {

    string Get;
    
    if (Position == 0 || Position == 1 || Position == 3)
    {
        Get += NumbersOf_HighterPlaceValue(i);
    }
    
    else if(Position == 2 && IsTensSpecific_Response)
    {
        Get += TensGeneral(i);
    }
    else 
    {
        Get += TensSpecific(i);
    }

    return Get;
}

void ReverseNumberTostring(string Number, bool IsTensSpecific_Response) {

    string Temp = "";
    string Temp2 = "";

    for (int i = 0; i < Number.length(); i++)
    {
        if(i == 0)
        {
            Temp += GetCharacterOnString(i, Number[i], IsTensSpecific_Response);
            Temp = Temp + " Thousen ";
            
        }
        if(i == 1)
        {   
            Temp += GetCharacterOnString(i, Number[i], IsTensSpecific_Response);
            Temp = Temp + " Handred ";
            
        }
        if(i == 2)
        {
            Temp += GetCharacterOnString(i, Number[i], IsTensSpecific_Response);
        }
        if(i == 3)
        {
            Temp += GetCharacterOnString(i, Number[i], IsTensSpecific_Response);
        }

    }

    cout << Temp;

}

int main() {

    srand((unsigned)time(NULL));

    string Number = "5698";
    
    bool IsTensSpecific_Respose = IsTensSpecific(Number);

    // ReverseNumberTostring(Number);
    
    
    return 0;
}

```
### <font color="#ffff00">Abu-Hedhoud Input:</font>
```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;


string NumberToText(int Number) {

    if (Number == 0)
    {
        return "";
    }
    
    if (Number >= 1 && Number <= 19)
    {
        string arr[] = { "",
        "One","Two","Three","Four","Five","Six","Seven",
        "Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen",
        "Fifteen","Sixteen","Seventeen","Eighteen","Nineteen" };
        return arr[Number] + " ";
    }
    
    if (Number >= 20 && Number <= 99)
    {
        string arr[] = {
        "","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty"
        ,"Ninety" };
        return arr[Number / 10] + " " + NumberToText(Number % 10);
    }
    
    if (Number >= 100 && Number <= 199)
    {
        return "One Hundred " + NumberToText(Number % 100);
    }
    
    if (Number >= 200 && Number <= 999)
    {
        return NumberToText(Number / 100) + "Hundreds " +
        NumberToText(Number % 100);
    }
    
    if (Number >= 1000 && Number <= 1999)
    {
        return "One Thousand " + NumberToText(Number % 1000);
    }

    if (Number >= 2000 && Number <= 999999)
    {
        return NumberToText(Number / 1000) + "Thousands " +
        NumberToText(Number % 1000);
    }
    
    if (Number >= 1000000 && Number <= 1999999)
    {
        return "One Million " + NumberToText(Number % 1000000);
    }
    
    if (Number >= 2000000 && Number <= 999999999)
    {
        return NumberToText(Number / 1000000) + "Millions " +
        NumberToText(Number % 1000000);
    }
    
    if (Number >= 1000000000 && Number <= 1999999999)
    {
        return "One Billion " + NumberToText(Number %
        1000000000);
    }
    
    else
    {
        return NumberToText(Number / 1000000000) + "Billions " +
        NumberToText(Number % 1000000000);
    }

}
    
int ReadNumber() {

    int Number;
    cout << "\nEnter a Number? ";
    cin >> Number;
    return Number;
}

int main() {


    int Number = ReadNumber();

    cout << NumberToText(Number);

    return 0;
}

```
<font color="#646a73">Output:</font>
```
Enter a Number: 5843
Five Thousands Eight Handreds Forty Three
```
---

### <font color="#ffff00">(#2):</font>
![[Pasted image 20260224155527.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
using namespace std;

bool IsLeapYear(int Year)
{
    // leap year if perfectly divisible by 400
    if (Year % 400 == 0) {
        return true;
    }
    // not a leap year if divisible by 100
    // but not divisible by 400
    else if (Year % 100 == 0) {
        return false;
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if (Year % 4 == 0) {
        return true;
    }
    // all other years are not leap years
    else {
        return false;
}
}
int ReadYearNumber() {
    
    int Year = 0;
    cout << "Enter the year: ";
    cin >> Year;

    return Year;
}

int main() {


    int Year = ReadYearNumber();
    
    
    if(IsLeapYear(Year))
    {
        cout << "\nYes, Year [" << Year << "] Is leap year.\n";
    }
    else
    {
        cout << "\nNo, Year [" << Year << "] It's Not a leap Year\n";
    }
    

    return 0;
}

```
<font color="#646a73">Output:</font>
```
Enter the year: 2000

Yes, Year [2000] Is leap year.
```
---

### <font color="#ffff00">(#3):</font>
![[Pasted image 20260224155527.png]]
![[Pasted image 20260225143638.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool IsLeapYear(int Year) {
    
    return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}

int ReadYearNumber() {
    
    int Year = 0;
    cout << "Enter the year: ";
    cin >> Year;

    return Year;
}

int main() {


    int Year = ReadYearNumber();
    
    
    if(IsLeapYear(Year))
    {
        cout << "\nYes, Year [" << Year << "] Is leap year.\n";
    }
    else
    {
        cout << "\nNo, Year [" << Year << "] It's Not a leap Year\n";
    }
    

    return 0;
}

```
<font color="#646a73">Output:</font>
```
Enter the year: 2000

Yes, Year [2000] Is leap year.
```
---

### <font color="#ffff00">(#4):</font>
![[Pasted image 20260225145936.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool IsLeapYear(int Year) {
    
    return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}

int NumberOfDaysInYear(int Year) {

    return (IsLeapYear(Year))? 366: 365;
}
int NumberOfHoursInYear(int Year) {

    return NumberOfDaysInYear(Year) * 24;
}
int NumberOfMinutesInYear(int Year) {

    return NumberOfHoursInYear(Year) * 60;
}
int NumOfSecoundsInYear(int Year) {

    return NumberOfMinutesInYear(Year) * 60;
}


int ReadYearNumber() {
    
    int Year = 0;
    cout << "Enter the year: ";
    cin >> Year;

    return Year;
}

int main() {

    int Year = ReadYearNumber();

    cout << "\nNumber of Days in    Year [" << Year << "] is: " << NumberOfDaysInYear(Year);
    cout << "\nNumber of Hours in   Year [" << Year << "] is: " << NumberOfHoursInYear(Year);
    cout << "\nNumber of Minutes in Year [" << Year << "] is: " << NumberOfMinutesInYear(Year);
    cout << "\nNumber of Seconds in Year [" << Year << "] is: " << NumOfSecoundsInYear(Year);


    return 0;
}

```
<font color="#646a73">Output:</font>
```
Enter the year: 1971

Number of Days in    Year [1971] is: 365
Number of Hours in   Year [1971] is: 8760
Number of Minutes in Year [1971] is: 525600
Number of Seconds in Year [1971] is: 31536000
```
---

### <font color="#ffff00">(#5):</font>
![[Pasted image 20260225153514.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool IsLeapYear(int Year) {
    
    return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}

int NumberOfDaysInMonth(int Year, short Month) {

    if(Month < 1 || Month > 12)
    {
        return 0;
    }

    if(Month == 2)
    {
        return (IsLeapYear(Year))? 29: 28; 
    }

    int Arr31Month[7] = {1, 3, 5, 7, 8, 10, 12};
    
    for(int i = 1; i <= 7; i++)
    {
        if(Arr31Month[i - 1] == Month)
            return 31; 
    }

    return 30;
}
int NumberOfHoursInMonth(int Year, short Month) {

    return NumberOfDaysInMonth(Year, Month) * 24;
}
int NumberOfMinutesInMonth(int Year, short Month) {

    return NumberOfHoursInMonth(Year, Month) * 60;
}
int NumOfSecoundsInMonth(int Year, short Month) {

    return NumberOfMinutesInMonth(Year, Month) * 60;
}


int ReadYearNumber() {
    
    int Year = 0;
    cout << "Enter the year: ";
    cin >> Year;

    return Year;
}
short ReadMonthNumber() {

    short Month = 0;
    cout << "\nEnter the month: ";
    cin >> Month;

    return Month;
}
int main() {

    int Year = ReadYearNumber();
    short Month = ReadMonthNumber();

    cout << "\nNumber of Days in    Month [" << Year << "] is: " << NumberOfDaysInMonth(Year, Month);
    cout << "\nNumber of Hours in   Month [" << Year << "] is: " << NumberOfHoursInMonth(Year, Month);
    cout << "\nNumber of Minutes in Month [" << Year << "] is: " << NumberOfMinutesInMonth(Year, Month);
    cout << "\nNumber of Seconds in Month [" << Year << "] is: " << NumOfSecoundsInMonth(Year, Month);


    return 0;
}


```
<font color="#646a73">Output:</font>
```
Enter the year: 2000

Enter the month: 2

Number of Days in    Month [2000] is: 29
Number of Hours in   Month [2000] is: 696
Number of Minutes in Month [2000] is: 41760
Number of Seconds in Month [2000] is: 2505600
```
---

### <font color="#ffff00">(#6):</font>
![[Pasted image 20260226144221.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool IsLeapYear(int Year) {
    
    return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}

int NumberOfDaysInMonth(int Year, short Month) {


    if(Month < 1 || Month > 12)
    {
        return 0;
    } 

    int Arr31Month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    return (Month == 2)? (IsLeapYear(Year)? 29: 28) :Arr31Month[Month - 1];
    
}


int ReadYearNumber() {
    
    int Year = 0;
    cout << "Enter the year: ";
    cin >> Year;

    return Year;
}
short ReadMonthNumber() {

    short Month = 0;
    cout << "\nEnter the month: ";
    cin >> Month;

    return Month;
}
int main() {

    int Year = ReadYearNumber();
    short Month = ReadMonthNumber();

    cout << "\nNumber of Days in    Month [" << Year << "] is: " << NumberOfDaysInMonth(Year, Month);

    return 0;
}


```
<font color="#646a73">Output:</font>
```
Enter the year: 2000

Enter the month: 2

Number of Days in    Month [2000] is: 29
```
---

### <font color="#ffff00">(#7):</font>
![[Pasted image 20260226152935.png]]
![[Pasted image 20260226153326.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;


short GetNumOfdayByCalculate(short Year, short Month, short Day) {

    short a = 0, y = 0, m = 0, d = 0;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + 12 * a -2;
    
	return (Day + y + (y/4) - (y/100) + (y/400) + (31 * m/12)) % 7;

}
string GetShortNameOfDay(short NumOfdayByCalculate) {

    string ArrDayNames[7] = {
        "Sun","Mon","Tue","Wed","Thu","Fri","Sat"
    };

    return ArrDayNames[NumOfdayByCalculate];
}

short ReadYearNumber() {
    
    short Year = 0;
    cout << "Enter the year: ";
    cin >> Year;

    return Year;
}
short ReadMonthNumber() {

    short Month = 0;
    cout << "\nEnter the month: ";
    cin >> Month;

    return Month;
}
short ReadDayNumber() {
    
    short Day = 0;
    cout << "\nEnter the day: ";
    cin >> Day;

    return Day;
}

int main() {

    short Year = ReadYearNumber();
    short Month = ReadMonthNumber();
    short Day = ReadDayNumber();
    
    cout << "\nDate      : " << Day << "/" << Month << "/" << Year;
    cout << "\nDay Order : " << GetNumOfdayByCalculate(Year, Month, Day);
    cout << "\nDay Names : " << GetShortNameOfDay(GetNumOfdayByCalculate(Year, Month, Day));

    return 0;
}

```
<font color="#646a73">Output:</font>
```
Enter the year: 2022

Enter the month: 9

Enter the day: 20

Date      : 20/9/2022
Day Order : 2
Day Names : Tue
```
---

### <font color="#ffff00">(#8):</font>
![[Pasted image 20260226163950.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool IsLeapYear(int Year) {
    
    return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}

short GetNumOfdayByCalculate(short Year, short Month, short Day) {

    short a = 0, y = 0, m = 0, d = 0;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + 12 * a -2;
    
	return (Day + y + (y/4) - (y/100) + (y/400) + (31 * m/12)) % 7;

}
string GetShortNameOfDay(short NumOfdayByCalculate) {

    string ArrDayNames[7] = {
        "Sun","Mon","Tue","Wed","Thu","Fri","Sat"
    };

    return ArrDayNames[NumOfdayByCalculate];
}
int NumberOfDaysInMonth(int Year, short Month) {


    if(Month < 1 || Month > 12)
    {
        return 0;
    } 

    int Arr31Month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    return (Month == 2)? (IsLeapYear(Year)? 29: 28) :Arr31Month[Month - 1];
    
}

string GetShortNameOfMonth(short Month) {

    string ArrMonth[12] = { "Jan", "Feb", "Mar",
                            "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep",
                            "Oct", "Nov", "Dec"
    };

    return ArrMonth[Month - 1];
}

void PrintCalender(short Year, short Month) {


    int Current = GetNumOfdayByCalculate(Year, Month, 1);
    int NumOfDay = NumberOfDaysInMonth(Year, Month);

    printf("\n _______________%s_________________\n\n",
    GetShortNameOfMonth(Month).c_str());

    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    int i;
    for (i = 1; i <= Current; i++)
    {
        printf("      ");
    }
                
    for (int j = 1; j <= NumOfDay; j++)
    {
        printf("%5d", j);

        if(++i == 7)
        {
            i = 0;
            printf("\n");
        }

    }
    printf("\n___________________________________\n");

}

short ReadYearNumber() {
    
    short Year = 0;
    cout << "Enter the year: ";
    cin >> Year;

    return Year;
}
short ReadMonthNumber() {

    short Month = 0;
    cout << "\nEnter the month: ";
    cin >> Month;

    return Month;
}

int main() {

    short Year = ReadYearNumber();
    short Month = ReadMonthNumber();
 
    PrintCalender(Year, Month);
    

    return 0;
}

```
<font color="#646a73">Output:</font>
```
Enter the year: 2022

Enter the month: 9

 _______________Sep__________________
 
  Sun  Mon  Tue  Wed  Thu  Fri  Sat
                             1    2
    3    4    5    6    7    8    9
   10   11   12   13   14   15   16
   17   18   19   20   21   22   23
   24   25   26   27   28   29   30
 ____________________________________
```
---

### <font color="#ffff00">(#9):</font>
![[Pasted image 20260228145210.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
using namespace std;

bool IsLeapYear(int Year) {
    
    return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}

short GetNumOfdayByCalculate(short Year, short Month, short Day) {

    short a = 0, y = 0, m = 0, d = 0;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + 12 * a -2;
    
	return (Day + y + (y/4) - (y/100) + (y/400) + (31 * m/12)) % 7;

}
string GetShortNameOfDay(short NumOfdayByCalculate) {

    string ArrDayNames[7] = {
        "Sun","Mon","Tue","Wed","Thu","Fri","Sat"
    };

    return ArrDayNames[NumOfdayByCalculate];
}

int NumberOfDaysInMonth(int Year, short Month) {


    if(Month < 1 || Month > 12)
    {
        return 0;
    } 

    int Arr31Month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    return (Month == 2)? (IsLeapYear(Year)? 29: 28) :Arr31Month[Month - 1];
    
}

string GetShortNameOfMonth(short Month) {

    string ArrMonth[12] = { "Jan", "Feb", "Mar",
                            "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep",
                            "Oct", "Nov", "Dec"
    };

    return ArrMonth[Month - 1];
}

void PrintMonthCalendar(short Month, short Year)
{
    int Current = GetNumOfdayByCalculate(Year, Month, 1);
    int NumOfDay = NumberOfDaysInMonth(Year, Month);

    printf("\n _______________%s_________________\n\n",
    GetShortNameOfMonth(Month).c_str());

    printf("  Sun Mon Tue Wed Thu Fri Sat\n");
    
    int i;
    for (i = 0; i < Current; i++)
        printf("    ");
    
        for (int j = 1; j <= NumOfDay; j++)
    {
        printf("%4d", j);
        
        if (++i == 7)
        {
            i = 0;
            printf("\n");
        }
    }
    
    printf("\n _________________________________\n");

}

void PrintYearCalendar(int Year)
{
    printf("\n _________________________________\n\n");
    printf("        Calendar - %d\n", Year);
    printf(" _________________________________\n");
    
    for (int i = 1; i <= 12; i++)
    {
        PrintMonthCalendar(i, Year);
    }
    
}

short ReadYear()
{
    short Year;
    cout << "\nPlease enter a year? ";
    cin >> Year;
    return Year;
}

int main()
{
    PrintYearCalendar(ReadYear());

    
    return 0;
}
```
<font color="#646a73">Output:</font>
```
Please enter a year? 2022

 _________________________________

        Calendar - 2022
 _________________________________

 _______________Jan_________________

  Sun Mon Tue Wed Thu Fri Sat
                           1
   2   3   4   5   6   7   8
   9  10  11  12  13  14  15
  16  17  18  19  20  21  22
  23  24  25  26  27  28  29
  30  31
 _________________________________

 _______________Feb_________________

  Sun Mon Tue Wed Thu Fri Sat
           1   2   3   4   5
   6   7   8   9  10  11  12
  13  14  15  16  17  18  19
  20  21  22  23  24  25  26
  27  28
 _________________________________

 _______________Mar_________________

  Sun Mon Tue Wed Thu Fri Sat
           1   2   3   4   5
   6   7   8   9  10  11  12
  13  14  15  16  17  18  19
  20  21  22  23  24  25  26
  27  28  29  30  31
 _________________________________

 _______________Apr_________________

  Sun Mon Tue Wed Thu Fri Sat
                       1   2
   3   4   5   6   7   8   9
  10  11  12  13  14  15  16
  17  18  19  20  21  22  23
  24  25  26  27  28  29  30

 _________________________________

 _______________May_________________

  Sun Mon Tue Wed Thu Fri Sat
   1   2   3   4   5   6   7
   8   9  10  11  12  13  14
  15  16  17  18  19  20  21
  22  23  24  25  26  27  28
  29  30  31
 _________________________________

 _______________Jun_________________

  Sun Mon Tue Wed Thu Fri Sat
               1   2   3   4
   5   6   7   8   9  10  11
  12  13  14  15  16  17  18
  19  20  21  22  23  24  25
  26  27  28  29  30
 _________________________________

 _______________Jul_________________

  Sun Mon Tue Wed Thu Fri Sat
                       1   2
   3   4   5   6   7   8   9
  10  11  12  13  14  15  16
  17  18  19  20  21  22  23
  24  25  26  27  28  29  30
  31
 _________________________________

 _______________Aug_________________

  Sun Mon Tue Wed Thu Fri Sat
       1   2   3   4   5   6
   7   8   9  10  11  12  13
  14  15  16  17  18  19  20
  21  22  23  24  25  26  27
  28  29  30  31
 _________________________________

 _______________Sep_________________

  Sun Mon Tue Wed Thu Fri Sat
                   1   2   3
   4   5   6   7   8   9  10
  11  12  13  14  15  16  17
  18  19  20  21  22  23  24
  25  26  27  28  29  30
 _________________________________

 _______________Oct_________________

  Sun Mon Tue Wed Thu Fri Sat
                           1
   2   3   4   5   6   7   8
   9  10  11  12  13  14  15
  16  17  18  19  20  21  22
  23  24  25  26  27  28  29
  30  31
 _________________________________

 _______________Nov_________________

  Sun Mon Tue Wed Thu Fri Sat
           1   2   3   4   5
   6   7   8   9  10  11  12
  13  14  15  16  17  18  19
  20  21  22  23  24  25  26
  27  28  29  30
 _________________________________

 _______________Dec_________________

  Sun Mon Tue Wed Thu Fri Sat
                   1   2   3
   4   5   6   7   8   9  10
  11  12  13  14  15  16  17
  18  19  20  21  22  23  24
  25  26  27  28  29  30  31

 _________________________________
```
---

### <font color="#ffff00">(#10):</font>
![[Pasted image 20260228165942.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
using namespace std;

bool IsLeapYear(int Year) {
    
    return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}

int NumberOfDaysInMonth(int Year, short Month) {


    if(Month < 1 || Month > 12)
    {
        return 0;
    } 

    int Arr31Month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    return (Month == 2)? (IsLeapYear(Year)? 29: 28) :Arr31Month[Month - 1];
    
}

short NumOfDayFromBeginingOfYear(int Year, short Month, short Day) {

    int TotalDays = 0;
    
    for (int i = 1; i <= Month - 1; i++)
    {
        TotalDays += NumberOfDaysInMonth(Year, i);
    }

    TotalDays += Day;

    return TotalDays;
}

short ReadDay() {

    short Day = 0;

    cout << "Enter a Day: ";
    cin >> Day;

    return Day;
}
int ReadMonth() {

    short Month = 0;

    cout << "\nEnter a Month: ";
    cin >> Month;

    return Month;
}
int ReadYear() {

    int Year;
    cout << "\nPlease enter a Year? ";
    cin >> Year;
    return Year;
}
 
int main() {

    short Day = ReadDay();
    short Month = ReadMonth();
    int Year = ReadYear();


    cout << "\nNumber of Days from the begining of the year is: " << NumOfDayFromBeginingOfYear(Year, Month, Day);

    return 0;
}

```

<font color="#646a73">Output:</font>
```
Enter a Day: 20

Enter a Month: 9

Please enter a Year? 2022

Number of Days from the begining of the year is: 263
```
---

