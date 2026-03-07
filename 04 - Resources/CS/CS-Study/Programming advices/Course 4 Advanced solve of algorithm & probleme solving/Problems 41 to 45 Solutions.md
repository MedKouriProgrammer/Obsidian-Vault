---
creation_date: 2025-04-29T14:41
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=r2BIY8NlzG8&list=PL3X--QIIK-OEwPmZVfltqCYy6_RuwXr4A&index=11
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#ffff00"><u>Homework: from 41 to 45 Solutions.</u></font>
---
#  <font color="#ffff00">(#41)</font>
![[2025-03-19.png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

float Read_Positive_Number(string message)
{
	float num;

	do
	{
		cout << message;
		cin >> num;

	} while (num <= 0);
	
	return num;
}
float Hours_to_Days(float number_Hours)
{
	return (float)number_Hours / 24;
}
float Days_to_Weeks(float NumberOfDays)
{
	return(float)NumberOfDays / 7;
}
int main()
{
	float NumberOfHours = Read_Positive_Number("Enter the Number of Hours: ");

	float NumbreOfDays = Hours_to_Days(NumberOfHours);
	float NumberOfWeeks = Days_to_Weeks(NumbreOfDays);
	
	cout << "\nThe Number of Weeks is = " << Days_to_Weeks(NumbreOfDays) << " Weeks";
	cout << "\nThe Number of Days is = " << Hours_to_Days(NumberOfHours) << " Days" << endl;

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter the Number of Hours: 365

The Number of Weeks is = 2.17262 Weeks
The Number of Days is = 15.2083 Days
```
---
# <font color="#ffff00">(#42)</font>
![[Screenshot (1).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

struct strTaskDuration { int days, hours, minutes, seconds; };
float Read_Positive_Number(string message)
{
	float num=0;

	do
	{
		cout << message;
		cin >> num;

	} while (num <= 0);
	
	return num;
}
strTaskDuration Read_Task_Duration()
{
	strTaskDuration TaskDuration;

	TaskDuration.days = Read_Positive_Number("Enter the Number of Days: ");
	TaskDuration.hours = Read_Positive_Number("Enter the Number of Hours: ");
	TaskDuration.minutes = Read_Positive_Number("Enter the Number of Minutes: ");
	TaskDuration.seconds = Read_Positive_Number("Enter the Number of Seconds: ");

	return TaskDuration;
}
float TaskDuration_InSeconds(strTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;

	DurationInSeconds = TaskDuration.days * 24 * 60 * 60; 
	DurationInSeconds += TaskDuration.hours * 60 * 60;  
	DurationInSeconds += TaskDuration.minutes * 60;  
	DurationInSeconds += TaskDuration.seconds;

	return DurationInSeconds;
}
int main()
{
	cout << "\nThe Task Duration In Seconds: " << TaskDuration_InSeconds(Read_Task_Duration()) << " Seconds";

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter the Number of Days: 2
Enter the Number of Hours: 5
Enter the Number of Minutes: 45
Enter the Number of Seconds: 35

The Task Duration In Seconds: 193535 Seconds
```
---
# <font color="#ffff00">(43)</font>
![[2025-03-19 (2).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

struct strTimes { int day, hours, minutes, seconds; };
int Read_Positive_Number(string message)
{
	int num = 0;

	do
	{
		cout << message;
		cin >> num;

	} while (num <= 0);

	return num;
}
strTimes Tronsfere_TotalSeconds(int TotalSeconds)
{
	strTimes TaskDuration;
	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerminutes = 60;

	int Remainder = 0;
	TaskDuration.day = floor(TotalSeconds / SecondsPerDay);
	Remainder = TotalSeconds % SecondsPerDay;

	TaskDuration.hours = floor(Remainder / SecondsPerHour);
	Remainder %= SecondsPerHour;
	
	TaskDuration.minutes = floor(Remainder / SecondsPerminutes);
	Remainder %= SecondsPerminutes;
	
	TaskDuration.seconds = Remainder;

	return TaskDuration;
}
void PrintTaskDurationDetails(strTimes TaskDuration)
{
	cout << endl << "0" << TaskDuration.day << " : " << "0" << TaskDuration.hours << " : " << TaskDuration.minutes << " : " << TaskDuration.seconds;
}
int main()
{
	int TotalTimes = Read_Positive_Number("Enter a Positive number: ");
	PrintTaskDurationDetails(Tronsfere_TotalSeconds(TotalTimes));

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter a Positive number: 193535

02 : 05 : 45 : 35
```
---
# <font color="#ffff00">(#44)</font>
![[2025-03-19 (4).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

enum endays { 
	sanday = 1,monday=2,tuesday=3,wednesday=4,thursday=5,friday=6,saturday=7 
};
int ReadNumbersInRange(string message,int from,int to)
{
	int num = 0;

	do
	{
		cout << message << "\n";
		cin >> num;

	} while (num <from || num >to);

	return num;
}
endays ReadDayOfWeek()
{
	return (endays)ReadNumbersInRange("	sanday = 1 - monday = 2 - tuesday = 3 - wednesday = 4 - thursday = 5 - friday = 6 - saturday = 7.", 1, 7);
}
string GetDayWeek(endays ndays)
{
	cout << "\n";

	switch (ndays) {
	case endays::sanday:
		return "It's Sunday";
		break;
	case endays::monday:
		return "It's Monday";
		break;
	case endays::tuesday:
		return "It's Tuesday";
		break;
	case endays::wednesday:
		return "It's Wednesday";
		break;
	case endays::thursday:
		return "It's Thursday";
		break;
	case endays::friday:
		return "It's Friday";
		break;
	case endays::saturday:
		return "It's saturday";
		break;
	default:
		return "Not a valid Day"; 
	}
}
int main()
{
	cout << GetDayWeek(ReadDayOfWeek());

	return 0;
}
```
## <font color="#92d050">Output</font>
```
        sanday = 1 - monday = 2 - tuesday = 3 - wednesday = 4 - thursday = 5 - friday = 6 - saturday = 7.
6

It's Friday
```
---
# <font color="#ffff00">(#45)</font>
![[2025-03-19 (5).png]]
## <font color="#92d050">Input</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

enum enMonth {
	January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12
};
int ReadNumbersInRange(string message,int from,int to)
{
	int num = 0;

	do
	{
		cout << message << "\n" << "\n";
		cin >> num;

	} while (num <from || num >to);

	return num;
}
enMonth ReadMonthOfWeek()
{
	return (enMonth)ReadNumbersInRange("Enter a Month [January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12]", 1, 12);
}
string GetMonthWeek(enMonth nmonth)
{
	cout << endl;

	switch (nmonth) {
	case enMonth::January:
		return "It's January";
	case enMonth::February:
		return "It's February";
	case enMonth::March:
		return "It's March";
	case enMonth::April:
		return "It's April";
	case enMonth::May:
		return "It's May";
	case enMonth::June:
		return "It's June";
	case enMonth::July:
		return "It's July";
	case enMonth::August:
		return "It's August";
	case enMonth::September:
		return "It's September";
	case enMonth::October:
		return "It's October";
	case enMonth::November:
		return "It's November";
	case enMonth::December:
		return "It's December";
	default:
		return "Not a valid Month"; 
	}
}
int main()
{
	cout << GetMonthWeek(ReadMonthOfWeek());

	return 0;
}
```
## <font color="#92d050">Output</font>
```
Enter a Month [January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12]

11

It's November
```
---
