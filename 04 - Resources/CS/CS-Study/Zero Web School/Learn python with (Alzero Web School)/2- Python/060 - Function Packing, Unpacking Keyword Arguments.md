---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=pMeKs94OrxQ&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=60
Author: "[[Alzero Wep School]]"
topic: "[](060%20-%20Function%20Packing,%20Unpacking%20Keyword%20Arguments.md)"
---
> [!summary]-
> 

# <font color="#646a73">060 - Function Packing, Unpacking Keyword Arguments</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ----------------------------------------------------
# -- Function Packing, Unpacking Arguments **KWArgs --
# ----------------------------------------------------

def show_skills(*skills):

  print(type(skills))

  for skill in skills:

    print(f"{skill}")

show_skills("Html", "CSS", "JS")

mySkills = {
  'Html': "80%",
  'Css': "70%",
  'Js': "50%",
  'Python': "80%",
  "Go": "40%"
}

def show_skills(**skills):

  print(type(skills))

  for skill, value in skills.items():

    print(f"{skill} => {value}")

show_skills(**mySkills)
```
Output:
```
<class 'tuple'>
Html
CSS
JS
<class 'dict'>
Html => 80%
Css => 70%
Js => 50%
Python => 80%
Go => 40%
```