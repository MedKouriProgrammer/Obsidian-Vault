---
creation_date: 2025-10-14
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=HmDLsnLgt0M&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=13
Author: "[[Alzero Wep School]]"
topic: "[[013 - Strings Methods Part One]]"
---
> [!summary]-
> 

# <font color="#646a73">013 - Strings Methods Part One</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ---------------------
# -- Strings Methods --
# ---------------------

  
# strip() rstrip() lstrip()

a = "    I Love Python    "

print(a.strip())
print(a.rstrip())
print(a.lstrip(),"\n")
  

a = "#####I Love Python####"

print(a.strip("#"))
print(a.rstrip("#"))
print(a.lstrip("#"),"\n")
  

a = "@#@#@#I Love Python@#@#@#"

print(a.strip("@#"))
print(a.rstrip("@#"))
print(a.lstrip("@#"),"\n")
  

# title()

b = "I Love 2d Graphics and 3g Technology and python"
print(b.title())

  
# capitalize()

b = "I Love 2d Graphics and 3g Technology and python"
print(b.capitalize(),"\n")
  

# zfill

c, d, e, f = "1", "11", "111", "1111"

print(c)
print(d)
print(e)
print(f)
  
print(c.zfill(4))
print(d.zfill(4))
print(e.zfill(4))
print(f.zfill(4),"\n")


# upper()

g = "osama"
print(g.upper())

# lower()

h = "OSama"
print(h.lower(),"\n")
```
Output:
```
I Love Python
    I Love Python
I Love Python

I Love Python
#####I Love Python
I Love Python####

I Love Python
@#@#@#I Love Python
I Love Python@#@#@#

I Love 2D Graphics And 3G Technology And Python
I love 2d graphics and 3g technology and python

1
11
111
1111
0001
0011
0111
1111

OSAMA
osama
```
---
