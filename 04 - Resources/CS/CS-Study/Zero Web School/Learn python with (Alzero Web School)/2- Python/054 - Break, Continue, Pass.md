---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=KtjJxOr5sp0&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=54
Author: "[[Alzero Wep School]]"
topic: "[](054%20-%20Break,%20Continue,%20Pass.md)"
---
> [!summary]-
> 

# <font color="#646a73">054 - Break, Continue, Pass</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ---------------------------
# -- Break, Continue, Pass --
# ---------------------------

myNumbers = [1, 2, 3, 5, 7, 10, 13, 14, 15, 19]

# Continue

for number in myNumbers:

  if number == 13:

    continue

  print(number)

print("#" * 50)

# Break

for number in myNumbers:

  if number == 13:

    break

  print(number)

print("#" * 50)

# Pass

for number in myNumbers:

  if number == 13:

    pass

  print(number)
```
Output:
```
1
2
3
5
7
10
14
15
19
##################################################    
1
2
3
5
7
10
##################################################    
1
2
3
5
7
10
13
14
15
19
```