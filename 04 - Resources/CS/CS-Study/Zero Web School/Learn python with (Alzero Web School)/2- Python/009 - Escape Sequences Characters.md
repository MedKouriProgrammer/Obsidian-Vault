---
creation_date: 2025-10-14
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=U0307lBCiDk&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=8
Author: "[[Alzero Wep School]]"
Topics:
---
> [!summary]-
> 

# <font color="#646a73">009 - Escape Sequences Characters</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ----------------------------
# Escape Sequences Characters
# \b => Back Space
# \newline => Escape New Line + \
# \\ => Escape Back Slash
# \' => Escape Single Quotes
# \" => Escape Double Quotes
# \n => Line Feed, Newline.
# \r => Carriage Return
# \t => Horizontal Tab
# \xhh => Character Hex Value
# ----------------------------

# Back Space
print("Hello\bWorld")  # Will Remove o

# Escape New Line + Back Slash
print("Hello \
I Love \
Python")

# Escape Back Slash
print("I Love Back Slash \\")

# Escape Single Quote
print('I Love Single Quote \'Test\' ') # Or make different Quate 

# Escape Double Quotes
print("I Love Double Quotes \"Test\" ") # Or make different Quate

# Line Feed
print("Hello World\nSecond Line")

# Carriage Return
print("123456\rAbcde")

# Horizontal Tab
print("Hello\tPython")

# Character Hex Value
print("\x4F\x73")
```
Output:
```
HellWorld
Hello I Love Python
I Love Back Slash \
I Love Single Quote 'Test'
I Love Double Quotes "Test"
Hello World
Second Line
Abcde6
Hello   Python
Os
```