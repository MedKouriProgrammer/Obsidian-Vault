---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=VQHLn1wuDBw&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=62
Author: "[[Alzero Wep School]]"
topic: "[[062 - Function Scope]]"
---
> [!summary]-
> 

# <font color="#646a73">062 - Function Scope</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# --------------------
# -- Function Scope --
# --------------------

x = 1  # Global Scope

def one():

  global x

  x = 2

  print(f"Print Variable From Function Scope {x}")

def two():

  x = 10

  print(f"Print Variable From Function Scope {x}")

one()
print(f"Print Variable From Global Scope {x}")
two()
print(f"Print Variable From Global Scope After One Function Is Called {x}")
```
Output:
```
Print Variable From Function Scope 2
Print Variable From Global Scope 2
Print Variable From Function Scope 10
Print Variable From Global Scope After One Function Is Called 2
```