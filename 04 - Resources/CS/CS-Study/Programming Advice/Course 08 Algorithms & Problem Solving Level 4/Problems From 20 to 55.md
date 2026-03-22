---
creation_date: 2026-02-07
tags:
  - Resources/Articles
Resource:
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Problems From 20 to 55</font>
---
### <font color="#ffff00">(20#) → (32#):</font>
![[Pasted image 20260305004439.png]]
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
sDate IncreaseDateByXDay(sDate Date, short X) {
    
    for(short i = 0; i < X; i++)
    {
        Date = IncreaseByOneDay(Date);
    }
    
 
    return Date; 
}

sDate IncreaseByOneWeek(sDate Date) {
    
    for(short i = 0; i < 7; i++) 
    {
        Date = IncreaseByOneDay(Date);
    }


    return Date;
}
sDate IncreaseDateByXWeek(sDate Date, short X) {
    
    for(short i = 0; i < X; i++)
    {
        Date = IncreaseByOneWeek(Date);
    }
    
 
    return Date; 
}

sDate IncreaseDateByOneMonth(sDate Date) {

    if(IsLastMonthInYear(Date))
    {
        Date.Month = 1;
        Date.Year++;
    }
    else
    {
        Date.Month++;
    }

    short NumberOfDaysInCurrentMonth = NumberOfDaysInMonth(Date.Year, Date.Month);
    if(Date.Day > NumberOfDaysInCurrentMonth)
    {
        Date.Day = NumberOfDaysInCurrentMonth;
    }

    return Date;
}
sDate IncreaseDateByXMonth(sDate Date, short Month) {

    for(short i = 0; i < Month; i++)
    {
        Date = IncreaseDateByOneMonth(Date);
    }

    return Date;
}

sDate IncreaseDateByOneYear(sDate Date) {

    Date.Year++;

    return Date;
}
sDate IncreaseDateByXYear(sDate Date, short Year) {

    for(short i = 0; i < Year; i++)
    {
        Date = IncreaseDateByOneYear(Date);
    }

    return Date;
}
sDate IncreaseDateByXYearFaster(sDate Date, short Year) {

    Date.Year += Year;

    return Date;
}

sDate IncreaseDateByOneDecade(sDate Date) {

    Date.Year += 10;

    return Date;
}
sDate IncreaseDateByXDecade(sDate Date, short Decade) {

    for(short i = 0; i < Decade; i++)
    {
        Date = IncreaseDateByOneDecade(Date);
    }

    return Date;
}
sDate IncreaseDateByXDecadeFaster(sDate Date, short Decade) {

    Date.Year += Decade * 10;

    return Date;
}

sDate IncreaseDateByOneCentery(sDate Date) {

    Date.Year += 100;

    return Date;
}

sDate IncreaseDateByOneMillennium(sDate Date) {

    Date.Year += 1000;

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

    cout << "\nDate After:\n";
    
    Date1 = IncreaseByOneDay(Date1);
    cout << "\n01-Adding One day is            : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByXDay(Date1, 10);
    cout << "\n02-Adding 10 days is            : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseByOneWeek(Date1);
    cout << "\n03-Adding One Week is           : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    
    Date1 = IncreaseDateByXWeek(Date1, 10);
    cout << "\n04-Adding 10 Weeks is           : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByOneMonth(Date1);
    cout << "\n05-Adding One Month is          : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByXMonth(Date1, 5);
    cout << "\n06-Adding 5 Month is            : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByOneYear(Date1);
    cout << "\n07-Adding One Year is           : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByXYear(Date1, 10);
    cout << "\n08-Adding 10 Year is            : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByXYearFaster(Date1, 10);
    cout << "\n09-Adding 10 Year (Faster) is   : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByOneDecade(Date1);
    cout << "\n10-Adding One Decade is         : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByXDecade(Date1, 10);
    cout << "\n11-Adding 10 Decades is         : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByXDecadeFaster(Date1, 10);
    cout << "\n12-Adding 10 Decades (Faster) is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByOneCentery(Date1);
    cout << "\n13-Adding One Centery is        : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByOneMillennium(Date1);
    cout << "\n13-Adding One Centery is        : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter a Day: 31
Enter a Month: 12
Please enter a Year? 2022

Date After:

01-Adding One day is            : 1/1/2023
02-Adding 10 days is            : 11/1/2023
03-Adding One Week is           : 18/1/2023
04-Adding 10 Weeks is           : 29/3/2023
05-Adding One Month is          : 29/4/2023
06-Adding 5 Month is            : 29/9/2023
07-Adding One Year is           : 29/9/2024
08-Adding 10 Year is            : 29/9/2034
09-Adding 10 Year (Faster) is   : 29/9/2044
10-Adding One Decade is         : 29/9/2054
11-Adding 10 Decades is         : 29/9/2154
12-Adding 10 Decades (Faster) is: 29/9/2254
13-Adding One Centery is        : 29/9/2354
13-Adding One Centery is        : 29/9/3354
```
---
### <font color="#ffff00">(33#) → (46#):</font>
![[Pasted image 20260305153211.png]]
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

sDate DecreaseByOneDay(sDate Date) {
    
    if(Date.Day == 1)
    {
        if(Date.Month == 1)
        {
            Date.Day = 34;
            Date.Month = 12;
            Date.Year--;
        }
        else
        {
            Date.Day = NumberOfDaysInMonth(Date.Year, Date.Month);
            Date.Month--;
        }

    }
    else
    {
        Date.Day--;
    }

    return Date;
}
sDate DecreaseDateByXDay(sDate Date, short X) {
    
    for(short i = 0; i < X; i++)
    {
        Date = DecreaseByOneDay(Date);
    }
    
 
    return Date; 
}

sDate DecreaseByOneWeek(sDate Date) {
    
    for(short i = 0; i < 7; i++) 
    {
        Date = DecreaseByOneDay(Date);
    }


    return Date;
}
sDate DecreaseDateByXWeek(sDate Date, short X) {
    
    for(short i = 0; i < X; i++)
    {
        Date = DecreaseByOneWeek(Date);
    }
    
 
    return Date; 
}

sDate DecreaseDateByOneMonth(sDate Date) {

    if(Date.Month == 1)
    {
        Date.Month = 12;
        Date.Year--;
    }
    else
    {
        Date.Month--;
    }

    short NumberOfDaysInCurrentMonth = (Date.Year, Date.Month);
    if(Date.Day > NumberOfDaysInCurrentMonth)
    {
        Date.Day = NumberOfDaysInCurrentMonth;
    }

    return Date;
}
sDate DecreaseDateByXMonth(sDate Date, short Month) {

    for(short i = 0; i < Month; i++)
    {
        Date = DecreaseDateByOneMonth(Date);
    }

    return Date;
}

sDate DecreaseDateByOneYear(sDate Date) {

    Date.Year--;

    return Date;
}
sDate DecreaseDateByXYear(sDate Date, short Year) {

    for(short i = 0; i < Year; i++)
    {
        Date = DecreaseDateByOneYear(Date);
    }

    return Date;
}
sDate DecreaseDateByXYearFaster(sDate Date, short Year) {

    Date.Year -= Year;

    return Date;
}

sDate DecreaseDateByOneDecade(sDate Date) {

    Date.Year -= 10;

    return Date;
}
sDate DecreaseDateByXDecade(sDate Date, short Decade) {

    for(short i = 0; i < Decade; i++)
    {
        Date = DecreaseDateByOneDecade(Date);
    }

    return Date;
}
sDate DecreaseDateByXDecadeFaster(sDate Date, short Decade) {

    Date.Year -= Decade * 10;

    return Date;
}

sDate DecreaseDateByOneCentery(sDate Date) {

    Date.Year -= 100;

    return Date;
}

sDate DecreaseDateByOneMillennium(sDate Date) {

    Date.Year -= 1000;

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

    cout << "\nDate After:\n";
    
    Date1 = DecreaseByOneDay(Date1);
    cout << "\n01-Subtracting One day is            : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByXDay(Date1, 10);
    cout << "\n02-Subtracting 10 days is            : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseByOneWeek(Date1);
    cout << "\n03-Subtracting One Week is           : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;
    
    Date1 = DecreaseDateByXWeek(Date1, 10);
    cout << "\n04-Subtracting 10 Weeks is           : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByOneMonth(Date1);
    cout << "\n05-Subtracting One Month is          : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByXMonth(Date1, 5);
    cout << "\n06-Subtracting 5 Month is            : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByOneYear(Date1);
    cout << "\n07-Subtracting One Year is           : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByXYear(Date1, 10);
    cout << "\n08-Subtracting 10 Year is            : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByXYearFaster(Date1, 10);
    cout << "\n09-Subtracting 10 Year (Faster) is   : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByOneDecade(Date1);
    cout << "\n10-Subtracting One Decade is         : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByXDecade(Date1, 10);
    cout << "\n11-Subtracting 10 Decades is         : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByXDecadeFaster(Date1, 10);
    cout << "\n12-Subtracting 10 Decades (Faster) is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByOneCentery(Date1);
    cout << "\n13-Subtracting One Centery is        : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByOneMillennium(Date1);
    cout << "\n13-Subtracting One Centery is        : " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter a Day: 31
Enter a Month: 12
Please enter a Year? 2022

Date After:

01-Subtracting One day is            : 30/12/2022
02-Subtracting 10 days is            : 20/12/2022
03-Subtracting One Week is           : 13/12/2022
04-Subtracting 10 Weeks is           : 4/10/2022
05-Subtracting One Month is          : 4/9/2022
06-Subtracting 5 Month is            : 4/4/2022
07-Subtracting One Year is           : 4/4/2021
08-Subtracting 10 Year is            : 4/4/2011
09-Subtracting 10 Year (Faster) is   : 4/4/2001
10-Subtracting One Decade is         : 4/4/1991
11-Subtracting 10 Decades is         : 4/4/1891
12-Subtracting 10 Decades (Faster) is: 4/4/1791
13-Subtracting One Centery is        : 4/4/1691
13-Subtracting One Centery is        : 4/4/691
```
---
### <font color="#ffff00">(47#) → (53#): </font>
![[Pasted image 20260305181157.png]]
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


short GetNumOfdayByCalculate(short Year, short Month, short Day) {

    short a = 0, y = 0, m = 0, d = 0;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + 12 * a -2;
    
	return (Day + y + (y/4) - (y/100) + (y/400) + (31 * m/12)) % 7;

}
short DayOfWeekOrder(sDate Date) {

    return GetNumOfdayByCalculate(Date.Year, Date.Month, Date.Day);
}

bool IsEndOfWeek(sDate Date) {
    
    return DayOfWeekOrder(Date) == 6;
} 
bool IsWeekEnd(sDate Date) {
    
    return (DayOfWeekOrder(Date) == 5 || DayOfWeekOrder(Date) == 0)? true: false;
}
bool IsBusinessDay(sDate Date) {
    
    return !IsWeekEnd(Date);
}

short DaysUntilTheEndOfWeek(sDate Date) {

    return 6 - DayOfWeekOrder(Date);
}
short DaysUntilTheEndOfMonth(sDate Date) {

    sDate DateOfMonth;
    DateOfMonth.Day = NumberOfDaysInMonth(Date.Year, Date.Month);
    DateOfMonth.Month = Date.Month;
    DateOfMonth.Year = Date.Year;

    return GetDifferenceInDays(Date, DateOfMonth, true);
}
short DaysUntilTheEndOfYear(sDate Date){

    sDate DateOfYear;
    DateOfYear.Day = 31;
    DateOfYear.Month = 12;
    DateOfYear.Year = Date.Year;

    return GetDifferenceInDays(Date, DateOfYear, true);
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


    cout << "\nIs it End of Week?\n";
    if(IsEndOfWeek(Date1))
        cout << "Yes, It's The End Of Week\n";
    else
        cout << "No, It's Not The End Of Week\n";
    
    cout << "\nIs it WeekEnd?\n";
    if(IsWeekEnd(Date1))
        cout << "Yes, It's A WeekEnd\n";
    else
        cout << "No, It's Not A WeekEnd\n";
    
    cout << "\nIs it Business Day?\n";
    if(IsBusinessDay(Date1))
        cout << "Yes, It's A Business Day\n";
    else
        cout << "No, It's Not A Business Day\n";
    
   
    cout << "\nDays Until End Of Week is : " << DaysUntilTheEndOfWeek(Date1);
    cout << "\nDays Until End Of Month is: " << DaysUntilTheEndOfMonth(Date1);
    cout << "\nDays Until End Of Year is : " << DaysUntilTheEndOfYear(Date1);


    return 0;
}
```
<font color="#646a73">Output:</font>
```
Enter a Day: 23
Enter a Month: 9
Please enter a Year? 2022

Is it End of Week?
No, It's Not The End Of Week

Is it WeekEnd?
Yes, It's A WeekEnd

Is it Business Day?
No, It's Not A Business Day

Days Until End Of Week is : 1
Days Until End Of Month is: 8
Days Until End Of Year is : 100
```
---
### <font color="#ffff00">(#54):</font>
![[Pasted image 20260306160847.png]]
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
short DayOfWeekOrder(sDate Date) {

    return GetNumOfdayByCalculate(Date.Year, Date.Month, Date.Day);
}
bool IsEndOfWeek(sDate Date) {
    
    return DayOfWeekOrder(Date) == 6;
} 
bool IsWeekEnd(sDate Date) {
    
    return (DayOfWeekOrder(Date) == 5 || DayOfWeekOrder(Date) == 0)? true: false;
}
bool IsBusinessDay(sDate Date) {
    
    return !IsWeekEnd(Date);
}

short DaysUntilTheEndOfWeek(sDate Date) {

    return 6 - DayOfWeekOrder(Date);
}
short DaysUntilTheEndOfMonth(sDate Date) {

    sDate DateOfMonth;
    DateOfMonth.Day = NumberOfDaysInMonth(Date.Year, Date.Month);
    DateOfMonth.Month = Date.Month;
    DateOfMonth.Year = Date.Year;

    return GetDifferenceInDays(Date, DateOfMonth, true);
}
short DaysUntilTheEndOfYear(sDate Date){

    sDate DateOfYear;
    DateOfYear.Day = 31;
    DateOfYear.Month = 12;
    DateOfYear.Year = Date.Year;

    return GetDifferenceInDays(Date, DateOfYear, true);
}
short CalculateNumOfVacation(sDate Date, sDate Date2) {

    short NumOfVacation = 0;
    
    while (IsDate1_LessThanDate2(Date, Date2))
    {
        if(IsBusinessDay(Date))
            NumOfVacation++;

            Date = IncreaseOneDay(Date);
    }
        

    return NumOfVacation;
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

    cout << "\nVacation Starts: ";
    sDate Date1 = ReadFullDate();
    
    cout << "\nVacation Ends: ";
    sDate Date2 = ReadFullDate();


    cout << "\nVacation From: " << GetShortNameOfDay(DayOfWeekOrder(Date1)) 
    << ", " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    cout << "\nVacation To: " << GetShortNameOfDay(DayOfWeekOrder(Date2)) 
    << ", " << Date2.Day << "/" << Date2.Month << "/" << Date2.Year << endl;

    cout << "\nActual Vacation Days is: " << CalculateNumOfVacation(Date1, Date2);

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Vacation Starts: 
Enter a Day: 1
Enter a Month: 9
Please enter a Year? 2022

Vacation Ends: 
Enter a Day: 5
Enter a Month: 9
Please enter a Year? 2022

Vacation From: Thu, 1/9/2022
Vacation To: Mon, 5/9/2022

Actual Vacation Days is: 2
```
---
### <font color="#ffff00">(#55):</font>
![[Pasted image 20260307135540.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
using namespace std;

struct stDate
{
    short Year;
    short Month;
    short Day;

};

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return  (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

short NumberOfDaysInAMonth(short Month, short Year)
{

    if (Month < 1 || Month>12)
        return  0;

    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];

}

bool IsLastDayInMonth(stDate Date)
{

    return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));

}

bool IsLastMonthInYear(short Month)
{
    return (Month == 12);
}

stDate IncreaseDateByOneDay(stDate Date)
{
    if (IsLastDayInMonth(Date))
    {
        if (IsLastMonthInYear(Date.Month))
        {
            Date.Month = 1;
            Date.Day = 1;
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

short DayOfWeekOrder(short Day, short Month, short Year)
{
    short a, y, m;
    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;
    // Gregorian:
    //0:sun, 1:Mon, 2:Tue...etc
    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short DayOfWeekOrder(stDate Date)
{
    return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);

}

string DayShortName(short DayOfWeekOrder)
{
    string arrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };

    return arrDayNames[DayOfWeekOrder];

}

bool IsWeekEnd(stDate Date)
{
    //Weekends are Fri and Sat
    short DayIndex = DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
    return  (DayIndex == 5 || DayIndex == 6);
}

bool IsBusinessDay(stDate Date)
{
    //Weekends are Sun,Mon,Tue,Wed and Thur

   /*
    short DayIndex = DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
    return  (DayIndex >= 5 && DayIndex <= 4);
   */

   //shorter method is to invert the IsWeekEnd: this will save updating code.
    return !IsWeekEnd(Date);

}

short ReadDay()
{
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}

short ReadMonth()
{
    short Month;
    cout << "Please enter a Month? ";
    cin >> Month;
    return Month;
}

short ReadYear()
{
    short Year;
    cout << "Please enter a Year? ";
    cin >> Year;
    return Year;
}

stDate ReadFullDate()
{
    stDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
}


stDate CalculateVacationReturnDate(stDate DateFrom, short VacationDays)
{

    short WeekEndCounter = 0;

    //in case the data  is weekend keep adding one day util you reach business day
    //we get rid of all weekends before the first business day
    while (IsWeekEnd(DateFrom))
    {
        DateFrom = IncreaseDateByOneDay(DateFrom);
    }

    //here we increase the vacation dates to add all weekends to it.
    
    for (short i = 1; i <= VacationDays+ WeekEndCounter; i++)
    {

        if (IsWeekEnd(DateFrom))
            WeekEndCounter++;

        DateFrom = IncreaseDateByOneDay(DateFrom);
    }
    
    //in case the return date is week end keep adding one day util you reach business day
    while (IsWeekEnd(DateFrom))
    {
        DateFrom = IncreaseDateByOneDay(DateFrom);
    }

    return DateFrom;
}

short ReadVacationDays()
{
    short Days;
    cout << "\nPlease enter vacation days? ";
    cin >> Days;
    return Days;
}

int main()
{
    cout << "\nVacation Starts: ";
    stDate DateFrom = ReadFullDate();

    short VacationDays = ReadVacationDays();

    stDate ReturnDate = CalculateVacationReturnDate(DateFrom, VacationDays);

    cout << "\n\nReturn Date: " << DayShortName(DayOfWeekOrder(ReturnDate)) << " , "
        << ReturnDate.Day << "/" << ReturnDate.Month << "/" << ReturnDate.Year << endl;


    return 0;
}
```
Output:
```
Vacation Starts: 
Enter a Day: 1
Enter a Month: 1
Please enter a Year? 2022

Enter Vacation Date: 23


Return Date: Wed, 2/2/2022
```
---

