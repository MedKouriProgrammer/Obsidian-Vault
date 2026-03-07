---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=v8ZehXS3XF0&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=41
Author: "[[Alzero Wep School]]"
topic: "[[041 - Control Flow If, Elif, Else]]"
---
> [!summary]-
> 

# <font color="#646a73">041 - Control Flow If, Elif, Else</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# --------------------
# --  Control Flow  --
# -- If, Elif, Else --
# -- Make Decisions --
# --------------------

uName = "Osama"
uCountry = "Kuwait"
cName = "Python Course"
cPrice = 100

if uCountry == "Egypt":

  print(f"Hello {uName} Because You Are From {uCountry}")
  print(f"The Course \"{cName}\" Price Is: ${cPrice - 80}")

elif uCountry == "KSA":

  print(f"Hello {uName} Because You Are From {uCountry}")
  print(f"The Course \"{cName}\" Price Is: ${cPrice - 60}")

elif uCountry == "Kuwait":

  print(f"Hello {uName} Because You Are From {uCountry}")
  print(f"The Course \"{cName}\" Price Is: ${cPrice - 50}")

else:

  print(f"Hello {uName} Because You Are From {uCountry}")
  print(f"The Course \"{cName}\" Price Is: ${cPrice - 30}")
```
Output:
```
Hello Osama Because You Are From Kuwait
The Course "Python Course" Price Is: $50
```