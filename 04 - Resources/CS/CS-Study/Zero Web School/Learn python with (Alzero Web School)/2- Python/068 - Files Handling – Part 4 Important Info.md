---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=wwe40Ngpp3A&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=68
Author: "[[Alzero Wep School]]"
topic: "[[068 - Files Handling – Part 4 Important Info]]"
---
> [!summary]-
> 

# <font color="#646a73">068 - Files Handling – Part 4 Important Info</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -------------------------------------
# -- File Handling => Important Info --
# -------------------------------------

import os

myFile = open("D:\Python\Files\osama.txt", "a")
myFile.truncate(5) # Take specific character and shift all of not used.

myFile = open("D:\Python\Files\osama.txt", "a")
print(myFile.tell()) # Position of the mouse.[]()

myFile = open("D:\Python\Files\osama.txt", "r")
myFile.seek(11) # Control position of mouse.
print(myFile.read())

os.remove("D:\Python\Files\osama.txt")
```
