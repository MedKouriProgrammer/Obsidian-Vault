---
creation_date: 2025-10-25
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=rgOdxQa830Q&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=32
Author: "[[Alzero Wep School]]"
topic: "[[032 - Dictionary Methods Part 2]]"
---
> [!summary]-
> 

# <font color="#646a73">032 - Dictionary Methods Part 2</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ------------------------
# -- Dictionary Methods --
# ------------------------

# setdefault()

user = {
  "name": "Osama"
}
print(user)
print(user.setdefault("age", 36))
print(user)

print("=" * 40)

# popitem()

member = {
  "name": "Osama",
  "skill": "PS4"
}
print(member)
member.update({"age": 36})
print(member.popitem())

print("=" * 40)

# items()

view = {
  "name": "Osama",
  "skill": "XBox"
}

allItems = view.items()
print(view)
view["age"] = 36

print(allItems)

print("=" * 40)

# fromkeys()

a = ('MyKeyOne', 'MyKeyTwo', 'MyKeyThree')
b = "X"

print(dict.fromkeys(a, b))
```
Output:
```
{'name': 'Osama'}
36
{'name': 'Osama', 'age': 36}
========================================
{'name': 'Osama', 'skill': 'PS4'}
('age', 36)
========================================
{'name': 'Osama', 'skill': 'XBox'}
dict_items([('name', 'Osama'), ('skill', 'XBox'), ('age', 36)])
========================================
{'MyKeyOne': 'X', 'MyKeyTwo': 'X', 'MyKeyThree': 'X'}
```