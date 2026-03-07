---
creation_date: 2025-10-16
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=jbV9d9H-udY&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=16
Author: "[[Alzero Wep School]]"
topic: "[[016 - Strings Methods Part Four]]"
---
> [!summary]-
> 

# <font color="#646a73">016 - Strings Methods Part Four</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ---------------------
# -- Strings Methods --
# ---------------------

# replace(Old Value, New Value, Count)

a = "Hello One Two Three One One"
print(a.replace("One", "1"))
print(a.replace("One", "1", 1))
print(a.replace("One", "1", 2))

# join(Iterable)

myList = ["Osama", "Mohamed", "Elsayed"]
print("-".join(myList))
print(" ".join(myList))
print(", ".join(myList))
print(type(", ".join(myList)))
```
Output:
```
Hello 1 Two Three 1 1
Hello 1 Two Three One One
Hello 1 Two Three 1 One
Osama-Mohamed-Elsayed
Osama Mohamed Elsayed
Osama, Mohamed, Elsayed
<class 'str'>
```