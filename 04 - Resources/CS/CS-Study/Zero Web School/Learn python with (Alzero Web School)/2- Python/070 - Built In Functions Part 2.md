---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=2ed3aomFliA&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=70
Author: "[[Alzero Wep School]]"
topic: "[[070 - Built In Functions Part 2]]"
---
> [!summary]-
> 

# <font color="#646a73">070 - Built In Functions Part 2</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ------------------------
# -- Built In Functions --
# ------------------------
# sum()
# round()
# range()
# print()
# ------------------------

# sum(iterable, start)
a = [1, 10, 19, 40]
print(sum(a))
print(sum(a, 40))

# round(number, numofdigits)
print(round(150.501))
print(round(150.554, 2))

# range(start, end, step)
print(list(range(0)))
print(list(range(10)))
print(list(range(0, 20, 2)))

# print()
print("Hello @ Osama @ How @ Are @ You")
print("Hello", "Osama", "How", "Are", "You", sep=" | ")

print("First Line", end=" ")
print("Second Line")
print("Third Line")
```
Output:
```
70
110
151
150.55
[]
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]     
[0, 2, 4, 6, 8, 10, 12, 14, 16, 18]
Hello @ Osama @ How @ Are @ You
Hello | Osama | How | Are | You
First Line Second Line
Third Line
```