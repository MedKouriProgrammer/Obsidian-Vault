---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
topic: "[[103 - OOP – Part 1 Intro]]"
---
> [!summary]-
> 

# <font color="#646a73">103 - OOP – Part 1 Intro</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ------------------------------------------
# -- Object Oriented Programming => Intro --
# ------------------------------------------
# [1] Python Support Object Oriented Programming
# [2] OOP Is A Paradigm Or Coding Style
#     OOP Paradigm =>
#       Means Structuring Program So The Methods[Functions] and Attributes[Data]
#       Are Bundled Into Objects
# [3] Methods => Act As Function That Use The Information Of The Object
# [4] Python Is Multi-Paradigm Programming Language [Procedural, OOP, Functional]
#     - Procedural => Structure App Like Recipe, Sets Of Steps To Make The Task
#     - Functional => Built On the Concept of Mathematical Functions
# [5] OOP Allow You To Organize Your Code and Make It Readable and Reusable
# [6] Everything in Python is Object
# [7] If Man Is Object
#     - Attributes => Name, Age, Address, Phone Number, Info [Can Be Differnet]
#     - Methods[Behaviors] => Walking, Eating, Singing, Playing
# [8] If Car Is Object
#     - Attributes => Model, Colour, Price
#     - Methods[Behaviors] => Walking, Stopping
# [9] Class Is The Template For Creating Objects [Object Constructor | Blueprint]
#     - Class Car Can Create Many Cars Object
# ---------------------------------------------
class NewMamber :

    def __init__(self):

        print("A New classe open!")


NewMamber()
NewMamber()
NewMamber()

MyTest = NewMamber()

print(MyTest.__class__)
```
Output:
```
A New classe open!
A New classe open!
A New classe open!
A New classe open!
<class '__main__.NewMamber'>
```