---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=NH7Qd1_IGqM&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=79
Author: "[[Alzero Wep School]]"
topic: "[[079 - Date And Time – Introduction]]"
---
> [!summary]-
> 

# <font color="#646a73">079 - Date And Time – Introduction</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -----------------------------------
# -- Date and Time => Introduction --
# -----------------------------------

import datetime

# print(dir(datetime))
# print(dir(datetime.datetime))

# Print The Current Date and Time
print(datetime.datetime.now())

print("#" * 40)

# Print The Current Year
print(datetime.datetime.now().year)

# Print The Current Month
print(datetime.datetime.now().month)

# Print The Current Day
print(datetime.datetime.now().day)

print("#" * 40)

# Print Start and End Of Date
print(datetime.datetime.min)
print(datetime.datetime.max)

print("#" * 40)

# print(dir(datetime.datetime.now()))

# Print The Current Time
print(datetime.datetime.now().time())

print("#" * 40)

# Print The Current Time Hour
print(datetime.datetime.now().time().hour)

# Print The Current Time Minute
print(datetime.datetime.now().time().minute)

# Print The Current Time Second
print(datetime.datetime.now().time().second)

print("#" * 40)

# Print Start and End Of Time
print(datetime.time.min)
print(datetime.time.max)

print("#" * 40)

# Print Specific Date
print(datetime.datetime(1982, 10, 25))
print(datetime.datetime(1982, 10, 25, 10, 45, 55, 150364))

print("#" * 40)

myBirthDay = datetime.datetime(1982, 10, 25)
dateNow = datetime.datetime.now()

print(f"My Birthday is {myBirthDay} And ", end="")
print(f"Date Now Is {dateNow}")

print(f" I Lived For {dateNow - myBirthDay}")
print(f" I Lived For {(dateNow - myBirthDay).days} Days.")
```
### Input: My input
```python
import datetime

print("The date now is:",datetime.datetime.now())

print("---------------")


print("The day is:",datetime.datetime.now().day,"D")
print("The Mmonth is:",datetime.datetime.now().month,"M")
print("The year is:",datetime.datetime.now().year,"Y")

print("---------------")

print("The minumum datetime is:",datetime.datetime.min)
print("The muxumuim datetime is:",datetime.datetime.max)

print("---------------")

print("the time now without date is:",datetime.datetime.now().time())

print("---------------")

print("The hour now is:",datetime.datetime.now().time().hour)
print("The Minutes now is:",datetime.datetime.now().time().min)
print("The Seconds now is:",datetime.datetime.now().time().second)

print("---------------")

print("The minimum time is:",datetime.time.min)
print("The maximum time is:",datetime.time.max)

print("---------------")

print(datetime.datetime(2007,2,19))

print("---------------")


MyBirthDay = datetime.datetime(2007,2,19)
DateNow = datetime.datetime.now()

print(f"My BirthDay is: ({MyBirthDay}).")
print(f"My Date now is: ({DateNow}).")


print(f"\nYou lived for {DateNow - MyBirthDay}.")
print(f"You lived for {(DateNow - MyBirthDay).days} Days.")
```
### Output:
```
The date now is: 2025-11-23 16:20:26.437817
---------------
The day is: 23 D
The Mmonth is: 11 M
The year is: 2025 Y
---------------
The minumum datetime is: 0001-01-01 00:00:00
The muxumuim datetime is: 9999-12-31 23:59:59.9999
---------------
the time now without date is: 16:20:26.440668
---------------
The hour now is: 16
The Minutes now is: 00:00:00
The Seconds now is: 26
---------------
The minimum time is: 00:00:00
The maximum time is: 23:59:59.999999
---------------
2007-02-19 00:00:00
---------------
My BirthDay is: (2007-02-19 00:00:00).
My Date now is: (2025-11-23 16:20:26.442059).        

You lived for 6852 days, 16:20:26.442059.
You lived for 6852 Days.
```