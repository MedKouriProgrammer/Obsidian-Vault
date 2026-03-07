---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
topic: "[[088 - Doc String & Commenting vs Documenting]]"
---
> [!summary]-
> 

# <font color="#646a73">088 - Doc String & Commenting vs Documenting</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# --------------------------------------------
# -- Doc String & Commenting vs Documenting --
# --------------------------------------------
# [1] Documentation String For Class, Module or Function
# [2] Can Be Accessed From The Help and Doc Attributes
# [3] Made For Understanding The Functionality of The Complex Code
# [4] Theres One Line and Multiple Line Doc Strings
# -------------------------------------------------

def elzero_function(name):
  """
  Elzero Function
    It Say Hello From Elzero
  Parameter:
    name => Person Name That Use Function
  Return:
    Return Hello Message To The Person
  """
  print(f"Hello {name} From Elzero")

elzero_function("Ahmed")

print(dir(elzero_function))

print(elzero_function.__doc__)

help(elzero_function)
```
Output:
```
ello Ahmed From Elzero
['__annotations__', '__builtins__', '__call__', '__class__', '__closure__', '__code__', '__defaults__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__get__', '__getattribute__', '__getstate__', '__globals__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__kwdefaults__', 
'__le__', '__lt__', '__module__', '__name__', 
'__ne__', '__new__', '__qualname__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__type_params__']

Elzero Function
  It Say Hello From Elzero
Parameter:
  name => Person Name That Use Function       
Return:
  Return Hello Message To The Person

Help on function elzero_function in module __main__:

elzero_function(name)
    Elzero Function
      It Say Hello From Elzero
    Parameter:
      name => Person Name That Use Function   
    Return:
      Return Hello Message To The Person 
```