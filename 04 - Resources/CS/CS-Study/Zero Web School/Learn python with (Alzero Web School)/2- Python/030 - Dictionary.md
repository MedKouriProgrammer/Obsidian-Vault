---
creation_date: 2025-10-25
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=BQ7jFrysbQU&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs
Author: "[[Alzero Wep School]]"
topic: "[[030 - Dictionary]]"
---
> [!summary]-
> 

# <font color="#646a73"> 030 - Dictionary</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ---------------------------
# -- Dictionary --
# ----------------
# [1] Dict Items Are Enclosed in Curly Braces
# [2] Dict Items Are Contains Key : Value
# [3] Dict Key Need To Be Immutable => (Number, String, Tuple) List Not Allowed
# [4] Dict Value Can Have Any Data Types
# [5] Dict Key Need To Be Unique
# [6] Dict Is Not Ordered You Access Its Element With Key
# ----------------------------

# Dictionary

user = {
  "name": "Osama",
  "age": 36,
  "country": "Egypt",
  "skills": ["Html", "Css", "JS"],
  "rating": 10.5
}

print(user)
print(user['country'])
print(user.get("country"))

print(user.keys())
print(user.values())

# Two-Dimensional Dictionary

languages = {
  "One": {
    "name": "Html",
    "progress": "80%"
  },
  "Two": {
    "name": "Css",
    "progress": "90%"
  },
  "Three": {
    "name": "Js",
    "progress": "90%"
  }
}

print(languages)
print(languages['One'])
print(languages['Three']['name'])

# Dictionary Length

print(len(languages))
print(len(languages["Two"]))

# Create Dictionary From Variables

frameworkOne = {
  "name": "Vuejs",
  "progress": "80%"
}

frameworkTwo = {
  "name": "ReactJs",
  "progress": "80%"
}

frameworkThree = {
  "name": "Angular",
  "progress": "80%"
}

allFramework = {
  "one": frameworkOne,
  "two": frameworkTwo,
  "three": frameworkThree
}

print(allFramework)
```
Output:
```
{'name': 'Osama', 'age': 36, 'country': 'Egypt', 'skills': ['Html', 'Css', 'JS'], 'rating': 10.5}
Egypt
Egypt
dict_keys(['name', 'age', 'country', 'skills', 'rating'])
dict_values(['Osama', 36, 'Egypt', ['Html', 'Css', 'JS'], 10.5])
{'One': {'name': 'Html', 'progress': '80%'}, 'Two': {'name': 'Css', 'progress': '90%'}, 'Three': {'name': 'Js', 'progress': '90%'}}
{'name': 'Html', 'progress': '80%'}
Js
3
2
{'one': {'name': 'Vuejs', 'progress': '80%'}, 'two': {'name': 'ReactJs', 'progress': '80%'}, 'three': {'name': 'Angular', 'progress': '80%'}}
```