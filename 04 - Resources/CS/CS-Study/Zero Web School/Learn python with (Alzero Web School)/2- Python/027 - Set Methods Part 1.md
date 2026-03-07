---
creation_date: 2025-10-21
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=N06_D5wWobg&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=27
Author: "[[Alzero Wep School]]"
topic: "[](027%20-%20Set%20Methods%20Part%201.md)"
---
> [!summary]-
> 

# <font color="#646a73"># 027 - Set Methods Part 1</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -----------------
# -- Set Methods --
# -----------------

# clear()

a = {1, 2, 3}
a.clear()
print(a)

# union()

b = {"One", "Two", "Three"}
c = {"1", "2", "3"}
x = {"Zero", "Cool"}

print(b | c)
print(b.union(c, x))

# add()

d = {1, 2, 3, 4}
d.add(5)
d.add(6)
print(d)

# copy()

e = {1, 2, 3, 4}
f = e.copy()

print(e)
print(f)

e.add(6)

print(e)
print(f)

# remove()

g = {1, 2, 3, 4}
g.remove(1)
# g.remove(7)
print(g)

# discard()

h = {1, 2, 3, 4}
h.discard(1)
h.discard(7)
print(h)

# pop()

i = {"A", True, 1, 2, 3, 4, 5}
print(i.pop())

# update()

j = {1, 2, 3}
k = {1, "A", "B", 2}
j.update(['Html', "Css"])
j.update(k)

print(j)
```
Output:
```
set()
{'Three', '2', 'One', '1', '3', 'Two'}
{'Three', '2', 'Cool', 'One', 'Zero', '1', '3', 'Two'}
{1, 2, 3, 4, 5, 6}
{1, 2, 3, 4}
{1, 2, 3, 4}
{1, 2, 3, 4, 6}
{1, 2, 3, 4}
{2, 3, 4}
{2, 3, 4}
A
{'Css', 1, 2, 3, 'A', 'B', 'Html'}
```