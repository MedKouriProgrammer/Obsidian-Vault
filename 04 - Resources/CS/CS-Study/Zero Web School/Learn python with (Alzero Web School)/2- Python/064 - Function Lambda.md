---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=zFVdMyr6CIo&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=63
Author: "[[Alzero Wep School]]"
topic: "[[064 - Function Lambda]]"
---
> [!summary]-
> 

# <font color="#646a73">064 - Function Lambda</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ------------------------
# -- Function => lambda --
# -- Anonymous Function --
# ------------------------
# [1] It Has No Name
# [2] You Can Call It Inline Without Defining It
# [3] You Can Use It In Return Data From Another Function
# [4] Lambda Used For Simple Functions and Def Handle The Large Tasks
# [5] Lambda is One Single Expression not Block Of Code
# [6] Lambda Type is Function
# -------------------------------------------------------------------

def say_hello(name, age) : return f"Hello {name} your Age Is: {age}"

hello = lambda name, age : f"Hello {name} your Age Is: {age}"

def main():

  print(say_hello("Ahmed", 36))
  print(hello("Ahmed", 36))
  
  print(say_hello.__name__)
  print(hello.__name__)
  
  print(type(hello))

if __name__ == "__main__":

    main()
```
Output:
```
Hello Ahmed your Age Is: 36
Hello Ahmed your Age Is: 36
say_hello
<lambda>
<class 'function'>
```