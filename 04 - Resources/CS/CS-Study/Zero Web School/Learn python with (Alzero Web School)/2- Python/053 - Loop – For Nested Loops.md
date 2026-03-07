---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=x_GyjV2Nb6k&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=53
Author: "[[Alzero Wep School]]"
topic: "[[053 - Loop – For Nested Loops]]"
---
> [!summary]-
> 

# <font color="#646a73">053 - Loop – For Nested Loops</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -----------------
# -- Loop => For --
# -- Nested Loop --
# -----------------

peoples = ["Osama", "Ahmed", "Sayed", "Ali"]

skills = ['Html', 'Css', 'Js']

for name in peoples:  # Outer Loop

  print(f"{name} Skills Is: ")

  for skill in skills:  # Inner Loop

    print(f"- {skill}")

# Dictionary

peoples = {
  "Osama": {
    "Html": "70%",
    "Css": "80%",
    "Js": "70%"
  },
  "Ahmed": {
    "Html": "90%",
    "Css": "80%",
    "Js": "90%"
  },
  "Sayed": {
    "Html": "70%",
    "Css": "60%",
    "Js": "90%"
  }
}

print(peoples["Osama"])
print(peoples["Ahmed"])
print(peoples["Sayed"])

print(peoples["Osama"]['Css'])
print(peoples["Ahmed"]['Css'])
print(peoples["Sayed"]['Css'])

for name in peoples:

  print(f"Skills and Progress For {name} Is: ")

  for skill in peoples[name]:

    print(f"{skill.upper()} => {peoples[name][skill]}")
```
Output:
```
{'Html': '70%', 'Css': '80%', 'Js': '70%'}
{'Html': '90%', 'Css': '80%', 'Js': '90%'}
{'Html': '70%', 'Css': '60%', 'Js': '90%'}
80%
80%
60%
Skills and Progress For Osama Is:
HTML => 70%
CSS => 80%
JS => 70%
Skills and Progress For Ahmed Is:
HTML => 90%
CSS => 80%
JS => 90%
Skills and Progress For Sayed Is:
HTML => 70%
CSS => 60%
JS => 90%
```