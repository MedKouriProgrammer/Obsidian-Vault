---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=A0oBGPSUbeI&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=47
Author: "[[Alzero Wep School]]"
topic: "[[047 - Loop – While and Else]]"
---
> [!summary]-

# <font color="#646a73">047 - Loop – While and Else</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -------------------
# -- Loop => While --
# -------------------
# while condition_is_true
#   Code Will Run Until Condition Become False
# -----------------------

a = 0

while a < 15:

  print(a)

  a += 1  # a = a + 1

print("Loop is Done")  # True Become False

while False:

print("Will Not Print")
```
Output:
```
0
1
2
3
4
5
6
7
8
9
10
11
12
13
14
Loop is Done
```