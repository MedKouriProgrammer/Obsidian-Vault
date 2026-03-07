---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
topic: "[[109 - OOP – Part 7 Class Magic Methods]]"
---
> [!summary]-
> 

# <font color="#646a73">109 - OOP – Part 7 Class Magic Methods</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# --------------------------------------------------
# -- Object Oriented Programming => Magic Methods --
# ----------------------------------- ---------------
# Everything in Python is An Object
# __init__  Called Automatically When Instantiating Class
# self.__class__ The class to which a class instance belongs
# __str__   Gives a Human-Readable Output of the Object
# __len__   Returns the Length of the Container
#           Called When We Use the Built-in len() Function on the Object
# ------------------------------------------------------

class Skill:

  def __init__(self):

    self.skills = ["Html", "Css", "Js"]

  def __str__(self):

    return f"This is My Skills => {self.skills}"

  def __len__(self):

    return len(self.skills)

profile = Skill()
print(profile) # You have not to write (.), Becouse there are __str__
print(len(profile)) # You have not to write (.), Becouse there are __len__

profile.skills.append("PHP")
profile.skills.append("MySQL")

print(len(profile))

print(profile.__class__)
my_string = "Osama"
print(type(my_string))
print(my_string.__class__)
print(dir(str))
print(str.upper(my_string))
```
Output:
```
This is My Skills => ['Html', 'Css', 'Js']
3
5
<class '__main__.Skill'>
<class 'str'>
<class 'str'>
['__add__', '__class__', '__contains__', '__delattr__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__getitem__', '__getnewargs__', '__getstate__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__iter__', '__le__', '__len__', '__lt__', '__mod__', '__mul__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__rmod__', '__rmul__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', 'capitalize', 'casefold', 'center', 'count', 'encode', 'endswith', 'expandtabs', 'find', 'format', 'format_map', 'index', 'isalnum', 'isalpha', 'isascii', 'isdecimal', 'isdigit', 'isidentifier', 'islower', 'isnumeric', 'isprintable', 'isspace', 'istitle', 'isupper', 'join', 'ljust', 'lower', 'lstrip', 'maketrans', 'partition', 'removeprefix', 'removesuffix', 'replace', 'rfind', 
'rindex', 'rjust', 'rpartition', 'rsplit', 'rstrip', 'split', 'splitlines', 'startswith', 'strip', 'swapcase', 'title', 'translate', 'upper', 'zfill']
OSAMA
```
