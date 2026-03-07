---
creation_date: 2025-10-20
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=pP0QJbJalik&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=23
Author: "[[Alzero Wep School]]"
topic: "[](023%20-%20Lists%20Methods%20Part%202.md)"
---
> [!summary]-
> 

# <font color="#646a73">023 - Lists Methods Part 2</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -------------------
# -- Lists Methods --i
# -------------------

# clear()

a = [1, 2, 3, 4]
a.clear()
print(a)

# copy()

b = [1, 2, 3, 4]
c = b.copy()

print(b)  # Main List
print(c)  # Copied List

b.append(5)
  
print(b)  # Main List
print(c)  # Copied List

# count()

d = [1, 2, 3, 4, 3, 9, 10, 1, 2, 1]
print(d.count(1))

# index()

e = ["Osama", "Ahmed", "Sayed", "Ramy", "Ahmed", "Ramy"]
print(e.index("Ramy"))

# insert()

f = [1, 2, 3, 4, 5, "A", "B"]
f.insert(0, "Test")
f.insert(-1, "Test")

print(f)

# pop()

g = [1, 2, 3, 4, 5, "A", "B"]
print(g.pop(-3))
```
Output:
```
[]
[1, 2, 3, 4]
[1, 2, 3, 4]
[1, 2, 3, 4, 5]
[1, 2, 3, 4]
3
3
['Test', 1, 2, 3, 4, 5, 'A', 'Test', 'B']
5
```