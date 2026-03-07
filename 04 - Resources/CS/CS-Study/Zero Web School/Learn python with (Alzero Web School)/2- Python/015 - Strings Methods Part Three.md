---
creation_date: 2025-10-16
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=kgb96E9ogUw&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=15
Author: "[[Alzero Wep School]]"
---
> [!summary]-
> 

# <font color="#646a73">015 - Strings Methods Part Three</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ---------------------
# -- Strings Methods --
# ---------------------

# index(SubString, Start, End)

a = "I Love Python"
# print(a.index("P"))  # Index Number 7
# print(a.index("P", 0, 10))  # Index Number 7
# print(a.index("P", 0, 5))  # Through Error

# find(SubString, Start, End)

b = "I Love Python"
print(b.find("P"))  # Index Number 7
print(b.find("P", 0, 10))  # Index Number 7
print(b.find("P", 0, 5))  # -1

# rjust(Width, Fill Char) ljust(Width, Fill Char)

c = "Osama"
print(c.rjust(10))
print(c.rjust(10, "#"))

d = "Osama"
print(d.ljust(10))
print(d.ljust(10, "#"))

# splitlines()

e = """First Line
Second Line
Third Line"""

print(e.splitlines())

f = "First Line\nSecond Line\nThird Line"

print(f.splitlines())

# expandtabs()

g = "Hello\tWorld\tI\tLove\tPython"
print(g.expandtabs(2))

one = "I Love Python And 3G"
two = "I Love Python And 3g"
print(one.istitle())
print(two.istitle())

three = " "
four = ""
print(three.isspace())
print(four.isspace())

five = 'i love python'
six = 'I Love Python'
print(five.islower())
print(six.islower())

seven = "osama_elzero"
eight = "OsamaElzero100"
nine = "Osama--Elzero100"

print(seven.isidentifier())
print(eight.isidentifier())
print(nine.isidentifier())

x = "AaaaaBbbbbb"
y = "AaaaaBbbbbb111"
print(x.isalpha())
print(y.isalpha())

u = "AaaaaBbbbbb"
z = "AaaaaBbbbbb111"
print(u.isalnum())
print(z.isalnum())
```
Output:
```
7
7
-1
     Osama
#####Osama
Osama
Osama#####
['First Line', 'Second Line', 'Third Line']
['First Line', 'Second Line', 'Third Line']
Hello World I Love  Python
True
False
True
False
True
False
True
True
False
True
False
True
True
```