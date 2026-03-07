---
creation_date: 2025-10-14
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=7I_fUo5mO-U&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=10
Author: "[[Alzero Wep School]]"
Topics: "[](010%20-%20Concatenation%20And%20Training.md)"
---
> [!summary]-
> 

# <font color="#646a73">010 - Concatenation And Training</font> 
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -------------------
# -- Concatenation --
# -------------------

msg = "I Love"
lang = "Python"
print(msg + " " + lang)

full = msg + " " + lang
print(full)

a = "First \
Second \
Third"

b = "A \
B \
C"

print(a + "\n" + b)

print("Hello " + 1)  # Error
```
Output:
```
I Love Python
I Love Python
First Second Third
A B C
Traceback (most recent call last):
  File "c:\Users\ad\Documents\Cemder\MedDir\file.py", line 22, in <module>
    print("Hello " + 1)  # Error
          ~~~~~~~~~^~~
TypeError: can only concatenate str (not "int") to str
```
---
