---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=-PfCcZ2Q_MI&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=69
Author: "[[Alzero Wep School]]"
topic: "[[069 - Built In Functions Part 1]]"
---
> [!summary]-
> 

# <font color="#646a73">069 - Built In Functions Part 1</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ------------------------
# -- Built In Functions --
# ------------------------
# all()
# any()
# bin()
# id()
# ------------------------

x = [1, 2, 3, 4, []]

if all(x):

  print("All Elements Is True")

else:

  print("Theres At Least One Element Is False")

x = [0, 0, []]

if any(x):

  print("There's At Least One Element is True")

else:

  print("Theres No Any True Elements")

print(bin(100))

a = 1
b = 2

print(id(a))
print(id(b))
```
Output:
```
Theres At Least One Element Is False
Theres No Any True Elements
0b1100100
140730497987496
140730497987528
```