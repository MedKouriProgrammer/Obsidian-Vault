---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=QNN3w7Na7HA&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=82
Author: "[[Alzero Wep School]]"
topic: "[[082 - Generators]]"
---
> [!summary]-
> 

# <font color="#646a73">082 - Generators</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ----------------
# -- Generators --
# ----------------
# [1] Generator is a Function With "yield" Keyword Instead of "return"
# [2] It Support Iteration and Return Generator Iterator By Calling "yield"
# [3] Generator Function Can Have one or More "yield"
# [4] By Using next() It Resume From Where It Called "yield" Not From Begining
# [5] When Called, Its Not Start Automatically, Its Only Give You The Control
# -----------------------------------------------------------------

def myGenerator():
  yield 1
  yield 2
  yield 3
  yield 4

myGen = myGenerator()
 
print(next(myGen), end=" ")
print("Hello From Python")
print(next(myGen), end=" ")

for number in myGen:
  print(number)
```
Output:
```
1 Hello From Python
2 3
4
```