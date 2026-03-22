---
creation_date: 2026-02-07
tags:
  - Resources/Articles
Resource:
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Problems From 11 to 19</font>
---
### <font color="#ffff00">(11#):</font>
![[Pasted image 20260301203118.png]]
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
struct sDate {

    int Year;
    short Month;
    short Day;
};

sDate ConvertTotalBackToDate(int Year, short Month, short Day, int TotalDaysNumber) {

    sDate Date;
    
    short RemainingDays = TotalDaysNumber;
    short MonthDays = 0;

    Date.Year = Year;
    Date.Month = 1;

    while (true) {

        MonthDays = NumberOfDaysInMonth(Year, Date.Month);

        if(RemainingDays > MonthDays)
        {
            RemainingDays -= MonthDays;
            Date.Month++;
        }
        else
        {
            Date.Day = RemainingDays;
            break;
        }
        
    }
    
    return Date;
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

    int TotalDaysNumber = NumOfDayFromBeginingOfYear(Year, Month, Day);

    sDate Date = ConvertTotalBackToDate(Year, Month, Day, TotalDaysNumber);

    cout << "\nNumber of Days from the begining of the year is: " << TotalDaysNumber << endl;
    cout << "\nDate for [" << TotalDaysNumber << "] is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;  

    return 0;
}

```
<font color="#646a73">Output:</font>
```
Enter a Day: 20

Enter a Month: 9

Please enter a Year? 2022

Number of Days from the begining of the year is: 263

Date for [2022] is: 20/9/2022
```
---
### <font color="#ffff00">(#12):</font>
![[Pasted image 20260302153104.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
using namespace std;

struct sDate {

    short Day;
    short Month;
    int Year;
};

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

sDate DateAddDays(int Days, sDate Date) {

    int RemainingDays = Days + NumOfDayFromBeginingOfYear(Date.Year, Date.Month, Date.Day);
    short MonthDays = 0;
    
    Date.Month = 1;

    while(true) {

        MonthDays = NumberOfDaysInMonth(Date.Year, Date.Month);
        
        if(RemainingDays > MonthDays)
        {
            RemainingDays -= MonthDays;
            Date.Month++;
            
            if(Date.Month > 12)
            {
                Date.Month = 1;
                Date.Year++;
            }

        }
        else
        {
            Date.Day = RemainingDays;
            break;
        }

    }

    return Date;
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

sDate ReadFullDate() {

    sDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
};

int ReadDaysAdd() {
    
    int Number = 0;

    cout << "\nHow many days to add: ";
    cin >> Number;
    
    return Number;
}
 
int main() {

    sDate Date = ReadFullDate();
    int DaysNumber = ReadDaysAdd();
    
    Date = DateAddDays(DaysNumber, Date);

    cout << "\n\n   Date after adding [" << DaysNumber << "] days is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;


    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter a Day: 10

Enter a Month: 10

Please enter a Year? 2022

How many days to add: 2500


Date after adding [2500] days is: 14/8/2029
```
---
### <font color="#ffff00">(#13):</font>
![[Pasted image 20260303134331.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
using namespace std;

struct sDate {

    short Day;
    short Month;
    int Year;
};

bool IsDate1_LessThanDate2(sDate Date1, sDate Date2) {

    return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
    Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
    Date2.Month ? Date1.Day < Date2.Day : false)) : false);

}


short ReadDay() {

    short Day = 0;

    cout << "\nEnter a Day: ";
    cin >> Day;

    return Day;
}
int ReadMonth() {

    short Month = 0;

    cout << "Enter a Month: ";
    cin >> Month;

    return Month;
}
int ReadYear() {

    int Year;
    cout << "Please enter a Year? ";
    cin >> Year;

    return Year;
}

sDate ReadFullDate() {

    sDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
};

int main() {

    sDate Date1 = ReadFullDate();
    sDate Date2 = ReadFullDate();

    if(IsDate1_LessThanDate2(Date1, Date2))
    {
        cout << "\nYes, Date1 is Less than Date2.\n";
    }
    else
    {
        cout << "\nNo, Date1 is Bigger than Date." << endl;
    }

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter a Day: 12
Enter a Month: 2
Please enter a Year? 2023

Enter a Day: 12
Enter a Month: 3
Please enter a Year? 2023

Yes, Date1 is Less than Date2.
```
---
### <font color="#ffff00">(#14):</font>
![[Pasted image 20260303143505.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
using namespace std;

struct sDate {

    short Day;
    short Month;
    int Year;
};

bool IsDate1_EqualeDate2(sDate Date1, sDate Date2) {
    
    return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}


short ReadDay() {

    short Day = 0;

    cout << "\nEnter a Day: ";
    cin >> Day;

    return Day;
}
int ReadMonth() {

    short Month = 0;

    cout << "Enter a Month: ";
    cin >> Month;

    return Month;
}
int ReadYear() {

    int Year;
    cout << "Please enter a Year? ";
    cin >> Year;

    return Year;
}

sDate ReadFullDate() {

    sDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
};

int main() {

    sDate Date1 = ReadFullDate();
    sDate Date2 = ReadFullDate();

    if(IsDate1_EqualeDate2(Date1, Date2))
    {
        cout << "\nYes, Date1 Is Equal Date2.\n";
    }
    else
    {
        cout << "\nNo, Date1 Is Not Equal Date." << endl;
    }

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter a Day: 1
Enter a Month: 1
Please enter a Year? 2000

Enter a Day: 1
Enter a Month: 1
Please enter a Year? 2000

Yes, Date1 Is Equal Date2.
```
---
### <font color="#ffff00">(#15):</font>
![[Pasted image 20260303210451.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
using namespace std;

struct sDate {

    short Day;
    short Month;
    int Year;
};
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

bool IsLastDayInMonth(sDate Date1) {

    return (Date1.Day == NumberOfDaysInMonth(Date1.Year, Date1.Month));
}

bool IsLastMonthInYear(sDate Date) {

    return (Date.Month == 12);
}


short ReadDay() {

    short Day = 0;

    cout << "\nEnter a Day: ";
    cin >> Day;

    return Day;
}
int ReadMonth() {

    short Month = 0;

    cout << "Enter a Month: ";
    cin >> Month;

    return Month;
}
int ReadYear() {

    int Year;
    cout << "Please enter a Year? ";
    cin >> Year;

    return Year;
}

sDate ReadFullDate() {

    sDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
};

int main() {

    sDate Date1 = ReadFullDate();
    

    if(IsLastDayInMonth(Date1))
        cout << "\nYes, Day Is The Last Day In Month.";
    else
        cout << "\nNo, Day Is Not The Last Day In Month.";


    if (IsLastMonthInYear(Date1))
        cout << "\nYes, Month is Last Month in Year.";
    else
        cout << "\nNo, Month is Not Last Month in Year.";


    return 0;
}

```
<font color="#646a73">Output:</font>
```
Enter a Day: 31
Enter a Month: 12
Please enter a Year? 2022

Yes, Day Is The Last Day In Month.
Yes, Month is Last Month in Year.
```
---
### <font color="#ffff00">(#16):</font>
![[Pasted image 20260303215057.png]]
### <font color="#ffff00">My Input:</font>
```cpp
#include <iostream>
using namespace std;

struct sDate {

    short Day;
    short Month;
    int Year;
};
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

bool IsLastDayInMonth(sDate Date1) {

    return (Date1.Day == NumberOfDaysInMonth(Date1.Year, Date1.Month));
}

bool IsLastMonthInYear(sDate Date) {

    return (Date.Month == 12);
}

sDate IncreaseOneDay(sDate Date) {
    
    if(!IsLastDayInMonth(Date))
    {
        Date.Day++;
    }
    else
    {
        Date.Day = 1;

        if(!IsLastMonthInYear(Date))
        {
            Date.Month++;
        }
        else
        {
            Date.Month = 1;
            Date.Year++;
        }

    }

    return Date;
}

short ReadDay() {

    short Day = 0;

    cout << "\nEnter a Day: ";
    cin >> Day;

    return Day;
}
int ReadMonth() {

    short Month = 0;

    cout << "Enter a Month: ";
    cin >> Month;

    return Month;
}
int ReadYear() {

    int Year;
    cout << "Please enter a Year? ";
    cin >> Year;

    return Year;
}

sDate ReadFullDate() {

    sDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
};

int main() {

    sDate Date1 = ReadFullDate();
    Date1 = IncreaseOneDay(Date1);
    
    cout << "\nDate after adding one day is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    return 0;
}
```
### <font color="#ffff00">abu-hedhoud Input:</font>
```cpp
#include <iostream>
using namespace std;

struct sDate {

    short Day;
    short Month;
    int Year;
};
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

bool IsLastDayInMonth(sDate Date1) {

    return (Date1.Day == NumberOfDaysInMonth(Date1.Year, Date1.Month));
}

bool IsLastMonthInYear(sDate Date) {

    return (Date.Month == 12);
}

sDate IncreaseOneDay(sDate Date) {
    
    if(IsLastDayInMonth(Date))
    {
    
        if(IsLastMonthInYear(Date))
        {
            Date.Day = 1;
            Date.Month = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }

    }
    else
    {
        Date.Day++;
    }
    

    return Date;
}

short ReadDay() {

    short Day = 0;

    cout << "\nEnter a Day: ";
    cin >> Day;

    return Day;
}
int ReadMonth() {

    short Month = 0;

    cout << "Enter a Month: ";
    cin >> Month;

    return Month;
}
int ReadYear() {

    int Year;
    cout << "Please enter a Year? ";
    cin >> Year;

    return Year;
}

sDate ReadFullDate() {

    sDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
};

int main() {

    sDate Date1 = ReadFullDate();
    Date1 = IncreaseOneDay(Date1);
    
    cout << "\nDate after adding one day is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter a Day: 31
Enter a Month: 12
Please enter a Year? 2022

Date after adding one day is: 1/1/2023
```
---
### <font color="#ffff00">(#17):</font>
![[Pasted image 20260304125622.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
using namespace std;

struct sDate {

    short Day;
    short Month;
    int Year;
};
bool IsLeapYear(int Year) {
    
    return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}
bool IsDate1_LessThanDate2(sDate Date1, sDate Date2) {

    return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
    Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
    Date2.Month ? Date1.Day < Date2.Day : false)) : false);

}
int NumberOfDaysInMonth(int Year, short Month) {


    if(Month < 1 || Month > 12)
    {
        return 0;
    } 

    int Arr31Month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    return (Month == 2)? (IsLeapYear(Year)? 29: 28) :Arr31Month[Month - 1];
    
}

bool IsLastDayInMonth(sDate Date1) {

    return (Date1.Day == NumberOfDaysInMonth(Date1.Year, Date1.Month));
}

bool IsLastMonthInYear(sDate Date) {

    return (Date.Month == 12);
}

sDate IncreaseOneDay(sDate Date) {
    
    if(IsLastDayInMonth(Date))
    {
    
        if(IsLastMonthInYear(Date))
        {
            Date.Day = 1;
            Date.Month = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }

    }
    else
    {
        Date.Day++;
    }
    

    return Date;
}
int GetDifferenceInDays(sDate Dat1, sDate Dat2, bool Included_Day = false) {

    int Days = 0;
    while(IsDate1_LessThanDate2(Dat1, Dat2))
    {
        Days++;
        Dat1 = IncreaseOneDay(Dat1);
    }

    return (Included_Day)? ++Days: Days;
}


short ReadDay() {

    short Day = 0;

    cout << "\nEnter a Day: ";
    cin >> Day;

    return Day;
}
int ReadMonth() {

    short Month = 0;

    cout << "Enter a Month: ";
    cin >> Month;

    return Month;
}
int ReadYear() {

    int Year;
    cout << "Please enter a Year? ";
    cin >> Year;

    return Year;
}

sDate ReadFullDate() {

    sDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
};

int main() {

    sDate Date1 = ReadFullDate();
    sDate Date2 = ReadFullDate();


    cout << "\nDifferent is: "
    << GetDifferenceInDays(Date1, Date2) << " Day(s)."; 
    
    cout << "\nDiffrence (Including End Day) is: "
    << GetDifferenceInDays(Date1, Date2, true) << " Day(s)." << endl;  

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter a Day: 1
Enter a Month: 1
Please enter a Year? 2022

Enter a Day: 25
Enter a Month: 3
Please enter a Year? 2022

Different is: 83 Day(s).
Diffrence (Including End Day) is: 84 Day(s).
```
---
### <font color="#ffff00">(#18):</font>
![[Pasted image 20260304144205.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
using namespace std;

struct sDate {

    short Day;
    short Month;
    int Year;
};
bool IsLeapYear(int Year) {
    
    return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}
bool IsDate1_LessThanDate2(sDate Date1, sDate Date2) {

    return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
    Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
    Date2.Month ? Date1.Day < Date2.Day : false)) : false);

}
int NumberOfDaysInMonth(int Year, short Month) {


    if(Month < 1 || Month > 12)
    {
        return 0;
    } 

    int Arr31Month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    return (Month == 2)? (IsLeapYear(Year)? 29: 28) :Arr31Month[Month - 1];
    
}

bool IsLastDayInMonth(sDate Date1) {

    return (Date1.Day == NumberOfDaysInMonth(Date1.Year, Date1.Month));
}

bool IsLastMonthInYear(sDate Date) {

    return (Date.Month == 12);
}

sDate IncreaseOneDay(sDate Date) {
    
    if(IsLastDayInMonth(Date))
    {
    
        if(IsLastMonthInYear(Date))
        {
            Date.Day = 1;
            Date.Month = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }

    }
    else
    {
        Date.Day++;
    }
    

    return Date;
}
int GetDifferenceInDays(sDate Dat1, sDate Dat2, bool Included_Day = false) {

    int Days = 0;
    while(IsDate1_LessThanDate2(Dat1, Dat2))
    {
        Days++;
        Dat1 = IncreaseOneDay(Dat1);
    }

    return (Included_Day)? ++Days: Days;
}


short ReadDay() {

    short Day = 0;

    cout << "\nEnter a Day: ";
    cin >> Day;

    return Day;
}
int ReadMonth() {

    short Month = 0;

    cout << "Enter a Month: ";
    cin >> Month;

    return Month;
}
int ReadYear() {

    int Year;
    cout << "Please enter a Year? ";
    cin >> Year;

    return Year;
}

sDate ReadFullDate() {

    sDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
};

sDate GetSystemDate() {

    sDate Date;

    time_t t = time(0);
    tm* now = localtime(&t);
    Date.Year = now->tm_year + 1900;
    Date.Month = now->tm_mon + 1;
    Date.Day = now->tm_mday;

    return Date;
}

int main() {

    cout << "\nEnter Your Date Of Birthday: \n";

    sDate Date1 = ReadFullDate();
    sDate Date2 = GetSystemDate();

    cout << "\nYour Age Is: " << GetDifferenceInDays(Date1, Date2, true) << endl;

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter Your Date Of Birthday: 

Enter a Day: 6
Enter a Month: 11
Please enter a Year? 1977

Your Age Is: 17651
```
---
### <font color="#ffff00">(#19):</font>
![[Pasted image 20260304150459.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
using namespace std;

struct sDate {

    short Day;
    short Month;
    int Year;
};
bool IsLeapYear(int Year) {
    
    return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}
bool IsDate1_LessThanDate2(sDate Date1, sDate Date2) {

    return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
    Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
    Date2.Month ? Date1.Day < Date2.Day : false)) : false);

}
int NumberOfDaysInMonth(int Year, short Month) {


    if(Month < 1 || Month > 12)
    {
        return 0;
    } 

    int Arr31Month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    return (Month == 2)? (IsLeapYear(Year)? 29: 28) :Arr31Month[Month - 1];
    
}

bool IsLastDayInMonth(sDate Date1) {

    return (Date1.Day == NumberOfDaysInMonth(Date1.Year, Date1.Month));
}

bool IsLastMonthInYear(sDate Date) {

    return (Date.Month == 12);
}

sDate IncreaseOneDay(sDate Date) {
    
    if(IsLastDayInMonth(Date))
    {
    
        if(IsLastMonthInYear(Date))
        {
            Date.Day = 1;
            Date.Month = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }

    }
    else
    {
        Date.Day++;
    }
    

    return Date;
}

void SwapDates(sDate &Date1, sDate &Date2) {

    sDate Template;

    Template.Day = Date1.Day;
    Template.Month = Date1.Month;
    Template.Year = Date1.Year;
    
    Date1.Day = Date2.Day;
    Date1.Month = Date2.Month;
    Date1.Year = Date2.Year;

    Date2.Day = Template.Day;
    Date2.Month = Template.Month;
    Date2.Year = Template.Year;

}

int GetDifferenceInDays(sDate Date1, sDate Date2, bool Included_Day = false) {

    int Days = 0;
    short SwapFlagValue = 1;    

    if(!IsDate1_LessThanDate2(Date1, Date2))
    {
        SwapDates(Date1, Date2);
        SwapFlagValue = -1;
    }

    while (IsDate1_LessThanDate2(Date1, Date2))
    {
        Days++;
        Date1 = IncreaseOneDay(Date1);
    }

    return (Included_Day) ? ++Days * SwapFlagValue: Days * SwapFlagValue;  
}


short ReadDay() {

    short Day = 0;

    cout << "\nEnter a Day: ";
    cin >> Day;

    return Day;
}
int ReadMonth() {

    short Month = 0;

    cout << "Enter a Month: ";
    cin >> Month;

    return Month;
}
int ReadYear() {

    int Year;
    cout << "Please enter a Year? ";
    cin >> Year;

    return Year;
}

sDate ReadFullDate() {

    sDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
};

int main() {

    sDate Date1 = ReadFullDate();
    sDate Date2 = ReadFullDate();


    cout << "\nDifferent is: "
    << GetDifferenceInDays(Date1, Date2) << " Day(s)."; 
    
    cout << "\nDiffrence (Including End Day) is: "
    << GetDifferenceInDays(Date1, Date2, true) << " Day(s)." << endl;  

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter a Day: 1
Enter a Month: 1
Please enter a Year? 2022

Enter a Day: 1
Enter a Month: 1
Please enter a Year? 2000

Different is: -8036 Day(s).
Diffrence (Including End Day) is: -8037 Day(s).
```
---
