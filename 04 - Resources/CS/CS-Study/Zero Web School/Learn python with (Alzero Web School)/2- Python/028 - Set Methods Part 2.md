---
creation_date: 2025-10-22
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=o8pr--y5vuU&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=28
Author: "[[Alzero Wep School]]"
topic: "[[028 - Set Methods Part 2]]"
---
> [!summary]-
> 

# <font color="#646a73">028 - Set Methods Part 2</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -----------------
# -- Set Methods --
# -----------------

# difference()

a = {1, 2, 3, 4}
b = {1, 2, 3, "Osama", "Ahmed"}
print(a)
print(a.difference(b))  # a - b
print(a)

print("=" * 40)  # Separator

# difference_update()

c = {1, 2, 3, 4}
d = {1, 2, "Osama", "Ahmed"}
print(c)
c.difference_update(d)  # c - d
print(c)

print("=" * 40)  # Separator

# intersection()

e = {1, 2, 3, 4, "X", "Osama"}
f = {"Osama", "X", 2}
print(e)
print(e.intersection(f))  # e & f
print(e)

print("=" * 40)  # Separator

# intersection_update()

g = {1, 2, 3, 4, "X", "Osama"}
h = {"Osama", "X", 2}
print(g)
g.intersection_update(h)  # g & h
print(g)

print("=" * 40)  # Separator

# symmetric_difference()

i = {1, 2, 3, 4, 5, "X"}
j = {"Osama", "Zero", 1, 2, 4, "X"}
print(i)
print(i.symmetric_difference(j))  # i ^ j
print(i)

print("=" * 40)  # Separator

# symmetric_difference_update()

k = {1, 2, 3, 4, 5, "X"}
l = {"Osama", "Zero", 1, 2, 4, "X"}
print(k)
k.symmetric_difference_update(l)  # k ^ l
print(k)
```
Output:
```
{1, 2, 3, 4}
{4}
{1, 2, 3, 4}
========================================
{1, 2, 3, 4}
{3, 4}
========================================
{1, 2, 3, 4, 'X', 'Osama'}
{'Osama', 2, 'X'}
{1, 2, 3, 4, 'X', 'Osama'}
========================================
{1, 2, 3, 4, 'X', 'Osama'}
{'Osama', 2, 'X'}
========================================
{1, 2, 3, 4, 5, 'X'}
{3, 5, 'Osama', 'Zero'}
{1, 2, 3, 4, 5, 'X'}
========================================
{1, 2, 3, 4, 5, 'X'}
{3, 5, 'Osama', 'Zero'}
```