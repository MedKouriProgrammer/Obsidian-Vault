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
```

```
<font color="#646a73">Output:</font>
```

```
---
### <font color="#ffff00">(#61):</font>

### <font color="#ffff00">Input:</font>
```

```
<font color="#646a73">Output:</font>
```

```
---
### <font color="#ffff00">(#62):</font>

### <font color="#ffff00">Input:</font>
```

```
<font color="#646a73">Output:</font>
```

```
---
### <font color="#ffff00">(#63 ⇾ #64):</font>

### <font color="#ffff00">Input:</font>
```

```
<font color="#646a73">Output:</font>
```

```
---
### <font color="#ffff00">(#65):</font>

### <font color="#ffff00">Input:</font>
```

```
<font color="#646a73">Output:</font>
```

```
---
