---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=CCMKMBGUxkc&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=57
Author: "[[Alzero Wep School]]"
topic: "[](058%20-%20Function%20Packing,%20Unpacking%20Arguments.md)"
---
> [!summary]-
> 

# <font color="#646a73">058 - Function Packing, Unpacking Arguments</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -------------------------------------------------
# -- Function Packing, Unpacking Arguments *Args --
# -------------------------------------------------

print(1, 2, 3, 4)

myList = [1, 2, 3, 5]

print(myList)
print(*myList)

def say_hello(*peoples):  # n1, n2, n3, n4

  for name in peoples:

    print(f"Hello {name}")

say_hello("Osama", "Ahmed", "Sayed", "Mahmoud")

def show_details(name, *skills):

  print(f"Hello {name} Your Skills Is: ")

  for skill in skills:

    print(skill)

show_details("Osama", "Html", "CSS", "JS")
show_details("Ahmed", "Html", "CSS", "JS", "Python", "PHP", "MySQL")
```
Output:
```
1 2 3 4
[1, 2, 3, 5]
1 2 3 5
Hello Osama
Hello Ahmed
Hello Sayed
Hello Mahmoud
Hello Osama Your Skills Is: 
Html
CSS
JS
Hello Ahmed Your Skills Is: 
Html
CSS
JS
Python
PHP
MySQL
```