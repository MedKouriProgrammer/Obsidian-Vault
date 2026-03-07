---
creation_date: 2025-10-21
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=gwKxpFG_h_8&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=24
Author: "[[Alzero Wep School]]"
topic: "[](024%20-%20Tuples%20And%20Methods%20Part%201.md)"
---
> [!summary]-
> 

# <font color="#646a73">024 - Tuples And Methods Part 1</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -----------------------------
# -- Tuple --
# -----------
# [1] Tuple Items Are Enclosed in Parentheses
# [2] You Can Remove The Parentheses If You Want
# [3] Tuple Are Ordered, To Use Index To Access Item
# [4] Tuple Are Immutable => You Cant Add or Delete
# [5] Tuple Items Is Not Unique
# [6] Tuple Can Have Different Data Types
# [7] Operators Used in Strings and Lists Available In Tuples
# -----------------------------

# Tuple Syntax & Type Test

myAwesomeTupleOne = ("Osama", "Ahmed")
myAwesomeTupleTwo = "Osama", "Ahmed"

print(myAwesomeTupleOne)
print(myAwesomeTupleTwo)

print(type(myAwesomeTupleOne))
print(type(myAwesomeTupleTwo))

# Tuple Indexing

myAwesomeTupleThree = (1, 2, 3, 4, 5)
print(myAwesomeTupleThree[0])
print(myAwesomeTupleThree[-1])
print(myAwesomeTupleThree[-3])

# Tuple Assign Values

myAwesomeTupleFour = (1, 2, 3, 4, 5)
# myAwesomeTupleFour[2] = "Three"
# print(myAwesomeTupleFour)  # 'tuple' object does not support item assignment

# Tuple Data

myAwesomeTupleFive = ("Osama", "Osama", 1, 2, 3, 100.5, True)
print(myAwesomeTupleFive[1])
print(myAwesomeTupleFive[-1])
```
Output:
```
('Osama', 'Ahmed')
('Osama', 'Ahmed')
<class 'tuple'>   
<class 'tuple'>   
1
5
3
Osama
True
```