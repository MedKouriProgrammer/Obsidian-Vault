---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=tyOULB29Hs8&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=77
Author: "[[Alzero Wep School]]"
topic: "[[077 - Modules – Part 2 – Create Your Module]]"
---
> [!summary]-
> 

# <font color="#646a73">077 - Modules – Part 2 – Create Your Module</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -----------------------------------
# -- Modules => Create Your Module --
# -----------------------------------

import sys
sys.path.append(r"D:\Games")
print(sys.path)

import mylib

print(mylib.AdditionNumbers(20, 30))
mylib.SayHello("Ahmed")

print("----------------")


import mylib as ml

print(ml.AdditionNumbers(20, 30))
ml.SayHello("Saeed")

print("----------------")

  
from mylib import AdditionNumbers
print(AdditionNumbers(70,80))

print("----------------")

  
from mylib import SayHello as sy

sy("Medkouri")
```
Output:
```
50
Welcom Ahmed
----------------
50
Welcom Saeed
----------------
150
----------------
Welcom Medkouri
```