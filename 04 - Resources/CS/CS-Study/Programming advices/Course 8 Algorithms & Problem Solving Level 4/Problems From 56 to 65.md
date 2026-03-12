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
### <font color="#ffff00">Input:</font>
```

```
<font color="#646a73">Output:</font>
```

```
---
### <font color="#ffff00">(#59):</font>

### <font color="#ffff00">Input:</font>
```

```
<font color="#646a73">Output:</font>
```

```
---
### <font color="#ffff00">(#60):</font>

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
