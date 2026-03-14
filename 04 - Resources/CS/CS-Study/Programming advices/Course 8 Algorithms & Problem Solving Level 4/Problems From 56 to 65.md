---
creation_date: 2026-02-07
tags:
  - Resources/Articles
Resource:
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73"> Problems From 56 to 65</font>
---
### <font color="#ffff00">(56#):</font>
![[Pasted image 20260311160422.png]]
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
bool IsDate1_EqualeDate2(sDate Date1, sDate Date2) {
    
    return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}
bool IsDate1_AfterDate2(sDate Date1, sDate Date2) {
    
    return (!IsDate1_LessThanDate2(Date1, Date2) && !IsDate1_EqualeDate2(Date1, Date2));

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

    cout << "\nEnter Date1:";
    sDate Date1 = ReadFullDate();
    
    cout << "\nEnter Date2:";
    sDate Date2 = ReadFullDate();

    if(IsDate1_AfterDate2(Date1, Date2))
        cout << "\nYes, Date1 is after Date2.\n";
    else
        cout << "\nNo, Date1 is not after Date2.\n";

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter Date1:
Enter a Day: 1
Enter a Month: 1
Please enter a Year? 2022

Enter Date2:
Enter a Day: 1
Enter a Month: 1
Please enter a Year? 2000

Yes, Date1 is after Date2.
```
---
### <font color="#ffff00">(#57):</font>
![[Pasted image 20260312050548.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
using namespace std;

enum enCompareDates {Before = -1, Equal = 0, After = 1};
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
bool IsDate1_EqualeDate2(sDate Date1, sDate Date2) {
    
    return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}
bool IsDate1_AfterDate2(sDate Date1, sDate Date2) {
    
    return (!IsDate1_LessThanDate2(Date1, Date2) && !IsDate1_EqualeDate2(Date1, Date2));

}

enCompareDates CompareDates(sDate Date1, sDate Date2) {

    if(IsDate1_LessThanDate2(Date1, Date2))
        return enCompareDates::Before;

    if(IsDate1_EqualeDate2(Date1, Date2))
        return enCompareDates::Equal;

    return enCompareDates::After;
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

    cout << "\nEnter Date1:";
    sDate Date1 = ReadFullDate();
    
    cout << "\nEnter Date2:";
    sDate Date2 = ReadFullDate();

    cout << "\nCompare Result = " << CompareDates(Date1, Date2);

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter Date1:
Enter a Day: 1
Enter a Month: 1
Please enter a Year? 2000

Enter Date2:
Enter a Day: 1
Enter a Month: 1
Please enter a Year? 2022

Compare Result = -1
```
---
### <font color="#ffff00">(#58):</font>
![[Pasted image 20260312052410.png]]
![[Pasted image 20260312054331.png]]
![[Pasted image 20260312054710.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
using namespace std;

enum enCompareDates {Before = -1, Equal = 0, After = 1};
struct sDate {

    short Day;
    short Month;
    int Year;
};
struct stPeriod {   

    sDate StartDate;
    sDate EndDate;
};

bool IsDate1_LessThanDate2(sDate Date1, sDate Date2) {

    return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
    Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
    Date2.Month ? Date1.Day < Date2.Day : false)) : false);

}
bool IsDate1_EqualeDate2(sDate Date1, sDate Date2) {
    
    return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}
bool IsDate1_AfterDate2(sDate Date1, sDate Date2) {
    
    return (!IsDate1_LessThanDate2(Date1, Date2) && !IsDate1_EqualeDate2(Date1, Date2));

}

enCompareDates CompareDates(sDate Date1, sDate Date2) {

    if(IsDate1_LessThanDate2(Date1, Date2))
        return enCompareDates::Before;

    if(IsDate1_EqualeDate2(Date1, Date2))
        return enCompareDates::Equal;

    return enCompareDates::After;
}

bool IsOverLapPeriod(stPeriod Period1, stPeriod Period2) {

    if(CompareDates(Period2.EndDate, Period1.StartDate) == enCompareDates::Before || CompareDates(Period2.StartDate, Period1.EndDate) == enCompareDates::After)
        return false;
    
    return true;
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
stPeriod ReadPeriod() {

    stPeriod Period;
    cout << "\nEnter Start Date:\n";
    Period.StartDate = ReadFullDate();
    cout << "\nEnter End Date:\n";
    Period.EndDate = ReadFullDate();
    return Period;
}

int main() {

    cout << "\nEnter Period 1:";
    stPeriod Period1 = ReadPeriod();
    cout << "\nEnter Period 2:";
    stPeriod Period2 = ReadPeriod();
    
    if (IsOverLapPeriod(Period1, Period2))
        cout << "\nYes, Periods Overlap\n";
    else
        cout << "\nNo, Periods do not Overlap\n";
    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter Period 1:
Enter Start Date:

Enter a Day: 1
Enter a Month: 2
Please enter a Year? 2022

Enter End Date:

Enter a Day: 10
Enter a Month: 2
Please enter a Year? 2022

Enter Period 2:
Enter Start Date:

Enter a Day: 5
Enter a Month: 2
Please enter a Year? 2022

Enter End Date:

Enter a Day: 15
Enter a Month: 2
Please enter a Year? 2022

Yes, Periods Overlap
```
---
### <font color="#ffff00">(#59):</font>
![[Pasted image 20260312145228.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
using namespace std;

enum enCompareDates {Before = -1, Equal = 0, After = 1};
struct sDate {

    short Day;
    short Month;
    int Year;
};
struct stPeriod {   

    sDate StartDate;
    sDate EndDate;
};

bool IsDate1_LessThanDate2(sDate Date1, sDate Date2) {

    return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
    Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
    Date2.Month ? Date1.Day < Date2.Day : false)) : false);

}
bool IsDate1_EqualeDate2(sDate Date1, sDate Date2) {
    
    return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}
bool IsDate1_AfterDate2(sDate Date1, sDate Date2) {
    
    return (!IsDate1_LessThanDate2(Date1, Date2) && !IsDate1_EqualeDate2(Date1, Date2));

}
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

sDate IncreaseByOneDay(sDate Date) {
    
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
        Dat1 = IncreaseByOneDay(Dat1);
    }

    return (Included_Day)? ++Days: Days;
}

short CalculatePeriodInDate(stPeriod Period1, bool IncludingEndDate = false) {

    return GetDifferenceInDays(Period1.StartDate, Period1.EndDate, IncludingEndDate);
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
stPeriod ReadPeriod() {

    stPeriod Period;
    cout << "\nEnter Start Date:\n";
    Period.StartDate = ReadFullDate();
    cout << "\nEnter End Date:\n";
    Period.EndDate = ReadFullDate();
    return Period;
}

int main() {

    cout << "\nEnter Period 1:";
    stPeriod Period1 = ReadPeriod();
        
    cout << "\nPeriod Date is: " << CalculatePeriodInDate(Period1);
    cout << "\nPeriod Date After Including End Date is: " << CalculatePeriodInDate(Period1, true);


    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter Period 1:
Enter Start Date:

Enter a Day: 1
Enter a Month: 1
Please enter a Year? 2022

Enter End Date:

Enter a Day: 5
Enter a Month: 1
Please enter a Year? 2022

Period Date is: 4
Period Date After Including End Date is: 5
```
---
### <font color="#ffff00">(#60):</font>
![[Pasted image 20260312152137.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
using namespace std;

enum enCompareDates {Before = -1, Equal = 0, After = 1};
struct sDate {

    short Day;
    short Month;
    int Year;
};
struct stPeriod {   

    sDate StartDate;
    sDate EndDate;
};

bool IsDate1_LessThanDate2(sDate Date1, sDate Date2) {

    return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
    Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
    Date2.Month ? Date1.Day < Date2.Day : false)) : false);

}
bool IsDate1_EqualeDate2(sDate Date1, sDate Date2) {
    
    return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}
bool IsDate1_AfterDate2(sDate Date1, sDate Date2) {
    
    return (!IsDate1_LessThanDate2(Date1, Date2) && !IsDate1_EqualeDate2(Date1, Date2));

}

enCompareDates CompareDates(sDate Date1, sDate Date2) {

    if(IsDate1_LessThanDate2(Date1, Date2))
        return enCompareDates::Before;

    if(IsDate1_EqualeDate2(Date1, Date2))
        return enCompareDates::Equal;

    return enCompareDates::After;
}

bool isDateInPeriod(stPeriod Period1, sDate Date) {

    return !(CompareDates(Date, Period1.StartDate) ==
    enCompareDates::Before
    ||
    CompareDates(Date, Period1.EndDate) ==
    enCompareDates::After);
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
stPeriod ReadPeriod() {

    stPeriod Period;
    cout << "\nEnter Start Date:\n";
    Period.StartDate = ReadFullDate();
    cout << "\nEnter End Date:\n";
    Period.EndDate = ReadFullDate();
    return Period;
}

int main() {

    cout << "\nEnter Period 1:";
    stPeriod Period1 = ReadPeriod();

    cout << "\nEnter Date to Check:";
    sDate Date1 = ReadFullDate();
    
    if (isDateInPeriod(Period1, Date1))
        cout << "\nYes, Date is within period\n";
    else
        cout << "\nNo, Date is NOT within period\n";

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter Period 1:
Enter Start Date:

Enter a Day: 1
Enter a Month: 1
Please enter a Year? 2022

Enter End Date:

Enter a Day: 10
Enter a Month: 1
Please enter a Year? 2022

Enter Date to Check:
Enter a Day: 5
Enter a Month: 1
Please enter a Year? 2022

Yes, Date is within period
```
---
### <font color="#ffff00">(#61):</font>
![[Pasted image 20260312160057.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
using namespace std;

enum enCompareDates {Before = -1, Equal = 0, After = 1};
struct sDate {

    short Day;
    short Month;
    int Year;
};
struct stPeriod {   

    sDate StartDate;
    sDate EndDate;
};

bool IsDate1_LessThanDate2(sDate Date1, sDate Date2) {

    return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
    Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
    Date2.Month ? Date1.Day < Date2.Day : false)) : false);

}
bool IsDate1_EqualeDate2(sDate Date1, sDate Date2) {
    
    return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}
bool IsDate1_AfterDate2(sDate Date1, sDate Date2) {
    
    return (!IsDate1_LessThanDate2(Date1, Date2) && !IsDate1_EqualeDate2(Date1, Date2));

}
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

sDate IncreaseByOneDay(sDate Date) {
    
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
        Dat1 = IncreaseByOneDay(Dat1);
    }

    return (Included_Day)? ++Days: Days;
}
enCompareDates CompareDates(sDate Date1, sDate Date2) {

    if(IsDate1_LessThanDate2(Date1, Date2))
        return enCompareDates::Before;

    if(IsDate1_EqualeDate2(Date1, Date2))
        return enCompareDates::Equal;

    return enCompareDates::After;
}
short PeriodLengthInDays(stPeriod Period1, bool IncludingEndDate = false) {

    return GetDifferenceInDays(Period1.StartDate, Period1.EndDate, IncludingEndDate);
}
bool IsOverLapPeriod(stPeriod Period1, stPeriod Period2) { 

    if(CompareDates(Period2.EndDate, Period1.StartDate) == enCompareDates::Before || CompareDates(Period2.StartDate, Period1.EndDate) == enCompareDates::After)
        return false;
    
    return true;
}
bool IsDateInPeriod(sDate Date, stPeriod Period) {

    return !(CompareDates(Date, Period.StartDate) ==
    enCompareDates::Before || CompareDates(Date, Period.EndDate) ==
    enCompareDates::After);
}

int CountOverlapDays(stPeriod Period1, stPeriod Period2) {

    int Period1_Lenght = PeriodLengthInDays(Period1, true);
    int Period2_Lenght = PeriodLengthInDays(Period2, true);
    int OverLap = 0;

    if(!IsOverLapPeriod(Period1, Period2))
        return 0;

    if(Period1_Lenght < Period2_Lenght)
    {
        while(IsDate1_LessThanDate2(Period1.StartDate, Period1.EndDate))
        {
            if(IsDateInPeriod(Period1.StartDate, Period2))
                OverLap++;
            
            Period1.StartDate = IncreaseByOneDay(Period1.StartDate);
        }

    }

    else
    {
        while(IsDate1_LessThanDate2(Period2.StartDate, Period2.EndDate))
        {
            if(IsDateInPeriod(Period2.StartDate, Period1))
                OverLap++;
            
            Period2.StartDate = IncreaseByOneDay(Period2.StartDate);
        }

    }

    return OverLap;
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
stPeriod ReadPeriod() {

    stPeriod Period;
    cout << "\nEnter Start Date:\n";
    Period.StartDate = ReadFullDate();
    cout << "\nEnter End Date:\n";
    Period.EndDate = ReadFullDate();
    return Period;
}

int main() {

    cout << "\nEnter Period 1:";
    stPeriod Period1 = ReadPeriod();
    cout << "\nEnter Period 2:";
    stPeriod Period2 = ReadPeriod();
    

    cout << "\nOverLap Days Count Is: " << CountOverlapDays(Period1, Period2);

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter Period 1:
Enter Start Date:

Enter a Day: 1
Enter a Month: 1
Please enter a Year? 2022

Enter End Date:

Enter a Day: 10
Enter a Month: 1
Please enter a Year? 2022

Enter Period 2:
Enter Start Date:

Enter a Day: 5
Enter a Month: 1
Please enter a Year? 2022

Enter End Date:

Enter a Day: 30
Enter a Month: 12
Please enter a Year? 2050

OverLap Days Count Is: 5
```
---
### <font color="#ffff00">(#62):</font>
![[Pasted image 20260314141342.png]]
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

bool IsValideDate(sDate Date1) {
    
    if(Date1.Day < 1 || Date1.Day > 31)
        return false;

    if(Date1.Month < 1 || Date1.Month > 12)
        return false;

    if(Date1.Month == 2)
    {
        if(Date1.Day != 29)
            return false;
    }
    else
    {
        if(Date1.Day > 28)
            return false;
    }

    if(Date1.Day > IsLastDayInMonth(Date1))
        return false;

        
    return true;
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

    if(IsValideDate(Date1))
        cout << "\nYes. It's A Valide Number.";
    else
        cout << "\nNo. It's Not A Valide Number.";
    
    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter a Day: 35
Enter a Month: 1
Please enter a Year? 2022

No. It's Not A Valide Number.
```
---
### <font color="#ffff00">(#63 ⇾ #64):</font>
![[Pasted image 20260314152406.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct sDate {

    int Day;
    int Month;
    int Year;
};
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
        ModName.push_back(Name);
    }
    
    return ModName;
}

string CounvertDateToString(sDate Date) {
 
    return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
}

sDate CounvertStringToDate(string StrDate) {

    sDate Date1;
    vector<string> vDate;
    
    vDate = SplitStrings(StrDate, "/"); 

    Date1.Day = stoi(vDate[0]);
    Date1.Month = stoi(vDate[1]);
    Date1.Year = stoi(vDate[2]);
 
    return Date1;
}

string ReadDateString(string Message) {

    string StrDate;

    cout << Message;
    cin >> StrDate;

    return StrDate;
}

int main() {

    string StrDate = ReadDateString("Enter Date dd/mm/yyyy? ");
    sDate Date1 = CounvertStringToDate(StrDate);
    
    cout << "\nDate: " << Date1.Day;
    cout << "\nMonth: " << Date1.Month;
    cout << "\nYear: " << Date1.Year;

    cout << "\n\nYou Entered: " << CounvertDateToString(Date1);

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter Date dd/mm/yyyy? 31/3/2022

Date: 31
Month: 3
Year: 2022

You Entered: 31/3/2022
```
---
### <font color="#ffff00">(#65):</font>
![[Pasted image 20260314174651.png]]
### <font color="#ffff00">Input:</font>
```cpp

```
<font color="#646a73">Output:</font>
```

```
---
