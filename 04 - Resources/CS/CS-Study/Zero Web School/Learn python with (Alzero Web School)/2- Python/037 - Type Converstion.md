---
creation_date: 2025-10-28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=j26DuY69HYA&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=37
Author: "[[Alzero Wep School]]"
topic: "[[037 - Type Converstion]]"
---
> [!summary]-

# <font color="#646a73">037 - Type Converstion</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ---------------------
# -- Type Conversion --
# ----------------------

# str()

a = 10
print(type(a))
print(type(str(a)))

print("#" * 50)

# tuple()

c = "Osama"  # String
d = [1, 2, 3, 4, 5]  # List
e = {"A", "B", "C"}  # Set
f = {"A": 1, "B": 2}  # Dictionary

print(tuple(c))
print(tuple(d))
print(tuple(e))
print(tuple(f))

# list()

c = "Osama"  # String
d = (1, 2, 3, 4, 5)  # Tuple
e = {"A", "B", "C"}  # Set
f = {"A": 1, "B": 2}  # Dictionary

print(list(c))
print(list(d))
print(list(e))
print(list(f))

print("#" * 50)

# set()

c = "Osama"  # String
d = (1, 2, 3, 4, 5)  # Tuple
e = ["A", "B", "C"]  # List
f = {"A": 1, "B": 2}  # Dictionary

print(set(c))
print(set(d))
print(set(e))
print(set(f))

print("#" * 50)

# dict()

d = (("A", 1), ("B", 2), ("C", 3))  # Tuple
e = [["One", 1], ["Two", 2], ["Three", 3]]  # List

print(dict(d))
print(dict(e))
```
Output:
```
<class 'int'>
<class 'str'>
##################################################
('O', 's', 'a', 'm', 'a')
(1, 2, 3, 4, 5)
('B', 'A', 'C')
('A', 'B')
['O', 's', 'a', 'm', 'a']
[1, 2, 3, 4, 5]
['B', 'A', 'C']
['A', 'B']
##################################################
{'O', 's', 'm', 'a'}
{1, 2, 3, 4, 5}
{'B', 'A', 'C'}
{'B', 'A'}
##################################################
{'A': 1, 'B': 2, 'C': 3}
{'One': 1, 'Two': 2, 'Three': 3}
```