---
creation_date: 2025-10-28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=bBxO141Jq6I&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=36
Author: "[[Alzero Wep School]]"
topic: "[[036 - Comparison Operators]]"
---
> [!summary]-
> 

# <font color="#646a73">036 - Comparison Operators</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# --------------------------
# -- Comparison Operators --
# --------------------------
# [ == ] Equal
# [ != ] Not Equal
# [ > ] Greater Than
# [ < ] Less Than
# [ >= ] Greater Than Or Equal
# [ <= ] Less Than Or Equal
# --------------------------

# Equal + Not Equal

print(100 == 100)
print(100 == 200)
print(100 == 100.00)

print("#" * 50)

print(100 != 100)
print(100 != 200)
print(100 != 100.00)

print("#" * 50)

# Greater Than + Less Than

print(100 > 100)
print(100 > 200)
print(100 > 100.00)
print(100 > 40)

print("#" * 50)

print(100 < 100)
print(100 < 200)
print(100 < 100.00)
print(100 < 40)

print("#" * 50)

# Greater Than Or Equal + Less Than Or Equal

print(100 >= 100)
print(100 >= 200)
print(100 >= 100.00)
print(100 >= 40)

print("#" * 50)

print(100 <= 100)
print(100 <= 200)
print(100 <= 100.00)
print(100 <= 40)

print("#" * 50)
```
Output:
```
True
False
True
##################################################
False
True
False
##################################################
False
False
False
True
##################################################
False
True
False
False
##################################################
True
False
True
True
##################################################
True
True
True
False
##################################################
```