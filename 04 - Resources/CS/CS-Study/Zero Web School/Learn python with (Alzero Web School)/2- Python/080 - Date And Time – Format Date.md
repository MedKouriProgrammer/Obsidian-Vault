---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=Qa6p-eQ7k0U&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=80
Author: "[[Alzero Wep School]]"
topic: "[[080 - Date And Time – Format Date]]"
---
> [!summary]-
> 

# <font color="#646a73">080 - Date And Time – Format Date</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ----------------------------------
# -- Date and Time => Format Date --
# ----------------------------------
# https://strftime.org/
# ---------------------

import datetime

myBirthday = datetime.datetime(1982, 10, 25)

print(myBirthday)
print(myBirthday.strftime("%a"))
print(myBirthday.strftime("%A"))
print(myBirthday.strftime("%b"))
print(myBirthday.strftime("%B"))

print(myBirthday.strftime("%d %B %Y"))
print(myBirthday.strftime("%d, %B, %Y"))
print(myBirthday.strftime("%d/%B/%Y"))
print(myBirthday.strftime("%d - %B - %Y"))
print(myBirthday.strftime("%B - %Y"))
```
Output:
```
1982-10-25 00:00:00
Mon
Monday
Oct
October
25 October 1982    
25, October, 1982  
25/October/1982    
25 - October - 1982
October - 1982  
```
---
### Input: My input.
```python
# ----------------------------------

# -- Date and Time => Format Date --

# ----------------------------------

# https://strftime.org/

# ---------------------

  

import datetime

  

MyDateTime = datetime.datetime.now()

print(MyDateTime)

  

print("---------------")

  

print(MyDateTime.strftime("%a"))

print(MyDateTime.strftime("%A"))

print(MyDateTime.strftime("%b"))

print(MyDateTime.strftime("%B"))

print(MyDateTime.strftime("%y"))

print(MyDateTime.strftime("%Y"))

  

print("---------------")

  

print(f"Today is: {MyDateTime.strftime("%A, %B, %Y")}")

print(f"Today is: {MyDateTime.strftime("%d, %B, %Y")}")
```
Output:
```
2025-11-23 17:51:14.961940
---------------
Sun
Sunday
Nov
November
25
2025
---------------
Today is: Sunday, November, 2025
Today is: 23, November, 2025
```