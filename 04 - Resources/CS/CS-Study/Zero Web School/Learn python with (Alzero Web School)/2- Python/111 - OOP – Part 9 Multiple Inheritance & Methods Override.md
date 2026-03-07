---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
topic: "[[111 - OOP – Part 9 Multiple Inheritance & Methods Override]]"
---
> [!summary]-
> 

# <font color="#646a73">111 - OOP – Part 9 Multiple Inheritance & Methods Override</font> 
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ---------------------------------------------------------
# -- Object Oriented Programming => Multiple Inheritance --
# ---------------------------------------------------------

class BaseOne:

  def __init__(self):

    print("Base One")

  def func_one(self):

    print("One")

class BaseTwo:

  def __init__(self):

    print("Base Two")

  def func_two(self):

    print("Two")

class Derived(BaseOne, BaseTwo):

  pass

my_var = Derived()

# print(Derived.mro())

print(my_var.func_one)
print(my_var.func_two)

my_var.func_one()
my_var.func_two()

class Base:

  pass

class DerivedOne(Base):

  pass

class DerivedTwo(DerivedOne):

  pass
```
Output:
```
Base One
<bound method BaseOne.func_one of <__main__.Derived object at 0x000001B143E16A50>>
<bound method BaseTwo.func_two of <__main__.Derived object at 0x000001B143E16A50>>
One
Two
```