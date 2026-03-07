---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
topic: "[[090 - Errors And Exceptions Raising]]"
---
> [!summary]-
> 

# <font color="#646a73">090 - Errors And Exceptions Raising</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -----------------------------------
# -- Errors And Exceptions Raising --
# -----------------------------------
# [1] Exceptions Is A Runtime Error Reporting Mechanism
# [2] Exception Gives You The Message To Understand The Problem
# [3] Traceback Gives You The Line To Look For The Code in This Line
# [4] Exceptions Have Types (SyntaxError, IndexError, KeyError, Etc...)
# [5] Exceptions List https://docs.python.org/3/library/exceptions.html
# [6] raise Keyword Used To Raise Your Own Exceptions
# -----------------------------------------------------------------

x = -10

if x < 0:

  raise Exception(f"The Number {x} Is Less Than Zero")

  print("This Will Not Print Because The Error")

else:

  print(f"{x} Is Good Number and Ok")

print('Print Message After If Condition')

y = 10

if type(y) != int:

  raise ValueError("Only Numbers Allowed")

print('Print Message After If Condition')
```
Output:
```
Traceback (most recent call last):
  File "c:\Users\ad\Documents\Cemder\MedDir\file.py", line 16, in <module>
    raise Exception(f"The Number {x} Is Less Than Zero")
Exception: The Number -10 Is Less Than Zero 
```