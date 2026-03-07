---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=9rU2fImqSR4&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=48
Author: "[[Alzero Wep School]]"
topic: "[[048 - Loop – While Training’s]]"
---
> [!summary]-
> 

# <font color="#646a73">048 - Loop – While Training’s</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ----------------------------
# -- Loop => While Training --
# ----------------------------
# while condition_is_true
#   Code Will Run Until Condition Become False
# -----------------------

myF = ["Os", "Ah", "Ga", "Al", "Ra", "Sa", "Ta", "Ma", "Mo", "Wa"]

# print(len(myF))  # List Length [10]

a = 0

while a < len(myF):  # a < 10

  print(f"#{str(a + 1).zfill(3)} {myF[a]}")

  a += 1  # a = a + 1

else:

  print("All Friends Printed To Screen.")

# print(myF[0])
# print(myF[1])
# print(myF[2])
# print(myF[3])
# print(myF[4])
# print(myF[5])
# print(myF[6])
# print(myF[7])
# print(myF[8])
# print(myF[9])
```
Output:
```
#001 Os
#002 Ah
#003 Ga
#004 Al
#005 Ra
#006 Sa
#007 Ta
#008 Ma
#009 Mo
#010 Wa
All Friends Printed To Screen.
```