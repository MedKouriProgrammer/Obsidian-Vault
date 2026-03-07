---
creation_date: 2025-10-27
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=rgOdxQa830Q&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs
Author: "[[Alzero Wep School]]"
topic: "[[033 - Boolean]]"
---
> [!summary]-
> 

# <font color="#646a73">033 - Boolean</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -------------
# -- Boolean --
# -------------
# [1] In Programming You Need to Known Your If Your Code Output is True Or False
# [2] Boolean Values Are The Two Constant Objects False + True.
# ---------------------------------------------------------------

name = " "
print(name.isspace())

print("=" * 50)

print(100 > 200)
print(100 > 100)
print(100 > 90)

print("=" * 50)

# True Values

print(bool("Osama"))
print(bool(100))
print(bool(100.95))
print(bool(True))
print(bool([1, 2, 3, 4, 5]))

print("=" * 50)

# False Values

print(bool(0))
print(bool(""))
print(bool(''))
print(bool([]))
print(bool(False))
print(bool(()))
print(bool({}))
print(bool(None))
```
Output:
```
True
==================================================
False
False
True
==================================================
True
True
True
True
True
==================================================
False
False
False
False
False
False
False
False
```