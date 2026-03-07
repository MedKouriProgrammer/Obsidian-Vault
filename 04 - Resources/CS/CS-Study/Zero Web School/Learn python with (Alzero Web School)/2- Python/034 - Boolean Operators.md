---
creation_date: 2025-10-27
tags:
  - Resources/Articles
Resource: https://chatgpt.com/share/68de5bd4-d884-8003-96b1-16ce5f8dc4e4
Author: "[[Alzero Wep School]]"
topic: "[](034%20-%20Boolean%20Operators.md)"
---
> [!summary]-
> 

# <font color="#646a73">034 - Boolean Operators</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -----------------------
# -- Boolean Operators --
# -----------------------
# and
# or
# not
# -----------------------

age = 36
country = "Egypt"
rank = 10 

print(age > 16 and country == "Egypt" and rank > 0)  # True
print(age > 16 and country == "KSA" and rank > 0)  # False

print(age > 40 or country == "KSA" or rank > 20)  # False
print(age > 40 or country == "Egypt" or rank > 20)  # True

print(age > 16)  # True
print(not age > 16)  # Not True = False
```
Output:
```
True
False
False
True
True
False
```

