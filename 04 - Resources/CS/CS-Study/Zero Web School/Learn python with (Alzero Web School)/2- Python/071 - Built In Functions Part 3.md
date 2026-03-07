---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=XRw7mArOyok&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=71
Author: "[[Alzero Wep School]]"
topic: "[[071 - Built In Functions Part 3]]"
---
> [!summary]-
> 

# <font color="#646a73">071 - Built In Functions Part 3</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ------------------------
# -- Built In Functions --
# ------------------------
# abs()
# pow()
# min()
# max()
# slice()
# ------------------------

# abs()
print(abs(100))
print(abs(-100))
print(abs(10.19))
print(abs(-10.19))

print("#" * 50)

# pow(base, exp, mod) => Power
print(pow(2, 5))  # 2 * 2 * 2 * 2 * 2
print(pow(2, 5, 10))  # (2 * 2 * 2 * 2 * 2) % 10

print("#" * 50)

# min(item, item , item, or iterator)
myNumbers = (1, 20, -50, -100, 100)
print(min(1, 10, -50, 20, 30))
print(min("X", "Z", "Osama"))
print(min(myNumbers))

print("#" * 50)

# max(item, item , item, or iterator)
myNumbers = (1, 20, -50, -100, 100)
print(max(1, 10, -50, 20, 30))
print(max("X", "Z", "Osama"))
print(max(myNumbers))

print("#" * 50)

# slice(start, end, step)
a = ["A", "B", "C", "D", "E", "F"]
print(a[:5])
print(a[slice(5)])
print(a[slice(2, 5)])
```
Output:
```
100
100
10.19
10.19
##################################################
32
2
##################################################
-50
Osama
-100
##################################################
30
Z
100
##################################################
['A', 'B', 'C', 'D', 'E']
['A', 'B', 'C', 'D', 'E']
['C', 'D', 'E']
```