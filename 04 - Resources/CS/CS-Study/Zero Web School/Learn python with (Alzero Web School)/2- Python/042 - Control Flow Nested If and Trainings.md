---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=W6KsrqVvg2E&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=42
Author: "[[Alzero Wep School]]"
topic: "[[039 - Practical Email Slice]]"
---
> [!summary]-
> 

# <font color="#646a73">042 - Control Flow Nested If and Trainings</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ---------------
# -- Nested If --
# ---------------

uName = "Osama"
isStudent = "Yes"
uCountry = "Egypt"
cName = "Python Course"
cPrice = 100

if uCountry == "Egypt" or uCountry == "KSA" or uCountry == "Qatar":

  if isStudent == "Yes":

    print(f"Hi {uName} Because U R From {uCountry} And Student")
    print(f"The Course \"{cName}\" Price Is: ${cPrice - 90}")

  else:

    print(f"Hi {uName} Because U R From {uCountry}")
    print(f"The Course \"{cName}\" Price Is: ${cPrice - 80}")


elif uCountry == "Kuwait" or uCountry == "Bahrain":

  print(f"Hi {uName} Because U R From {uCountry}")
  print(f"The Course \"{cName}\" Price Is: ${cPrice - 50}")

else:

  print(f"Hi {uName} Because U R From {uCountry}")
  print(f"The Course \"{cName}\" Price Is: ${cPrice - 30}")
```
Output:
```
Hi Osama Because U R From Egypt And Student
The Course "Python Course" Price Is: $10
```