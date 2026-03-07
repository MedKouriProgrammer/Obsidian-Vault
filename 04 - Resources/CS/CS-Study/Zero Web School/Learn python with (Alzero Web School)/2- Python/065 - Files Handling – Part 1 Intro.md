---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=6TFJs9uzEjI&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=65
Author: "[[Alzero Wep School]]"
topic: "[[065 - Files Handling – Part 1 Intro]]"
---
> [!summary]-
> 

# <font color="#646a73">065 - Files Handling – Part 1 Intro</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -------------------
# -- File Handling -- 
# -------------------
# "a" Append  Open File For Appending Values, Create File If Not Exists
# "r" Read    [Default Value] Open File For Read and Give Error If File is Not Exists
# "w" Write   Open File For Writing, Create File If Not Exists
# "x" Create  Create File, Give Error If File Exists
# --------------------------------------------------

import os

print("-------------")

print(os.getcwd()) # Corrent Working Directory, Or write on terminal explorer.

print("-------------")

print(os.path.abspath(__file__)) # Find Script File.

print("-------------")

print(os.path.dirname(os.path.abspath(__file__))) #Find The folder that before the script file.

print("-------------")

myfile = open("C:\Users\ad\Documents\Cemder\MedDir\vs.coding.c.p\Ziko.txt") # Open File.

print(myfile) # print File.>)
```
Output:
```
-------------
C:\Users\ad\Documents\Cemder\MedDir\vs.coding.c.p
-------------
c:\Users\ad\Documents\Cemder\file.py
-------------
c:\Users\ad\Documents\Cemder
-------------
<_io.TextIOWrapper name='Ziko.txt' mode='r' encoding='cp1252'>
```
---
#### Input: Change directory.
```python
import os

os.chdir(os.path.dirname(os.path.abspath(__file__)))

print(os.getcwd())

myfile = open("Zikoo.txt", "w")
print(myfile)
 ```
Output:
```
c:\Users\ad\Documents\Cemder
<_io.TextIOWrapper name='Zikoo.txt' mode='w' encoding='cp1252'>
```