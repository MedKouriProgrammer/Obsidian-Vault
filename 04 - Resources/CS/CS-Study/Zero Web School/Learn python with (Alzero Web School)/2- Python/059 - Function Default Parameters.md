---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
topic: "[](059%20-%20Function%20Default%20Parameters.md)"
---
> [!summary]-
> 

# <font color="#646a73">059 - Function Default Parameters</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ---------------------------------
# -- Function Default Parameters --
# ---------------------------------

def say_hello(name="Unknown", age="Unknown", country="Unknown"):

  print(f"Hello {name} Your Age is {age} and Your Country Is {country}")

say_hello("Osama", 36, "Egypt")
say_hello("Mahmoud", 28, "KSA")
say_hello("Sameh", 38)
say_hello("Ramy")
say_hello()
```
Output:
```
Hello Osama Your Age is 36 and Your Country Is Egypt
Hello Mahmoud Your Age is 28 and Your Country Is KSA
Hello Sameh Your Age is 38 and Your Country Is Unknown       
Hello Ramy Your Age is Unknown and Your Country Is Unknown   
Hello Unknown Your Age is Unknown and Your Country Is Unknown
```