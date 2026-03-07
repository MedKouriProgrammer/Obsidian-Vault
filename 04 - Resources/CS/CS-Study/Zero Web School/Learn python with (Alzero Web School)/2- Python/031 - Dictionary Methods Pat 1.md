---
creation_date: 2025-10-24
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
topic: "[[031 - Dictionary Methods Pat 1]]"
---
> [!summary]-
> 

# <font color="#646a73">031 - Dictionary Methods Part 1</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ------------------------
# -- Dictionary Methods --
# ------------------------

# clear()

user = {
  "name": "Osama"
}
print(user)
user.clear()
print(user)

print("=" * 50)

# update()

member = {
  "name": "Osama"
}
print(member)
member["age"] = 36
print(member)
member.update({"country": "Egypt"})
print(member)

print("=" * 50)

# copy()

main = {
  "name": "Osama"
}

b = main.copy()
print(b)
main.update({"skills": "Fighting"})
print(main)
print(b)

# keys() + values()

print(main.keys())
print(main.values())
```
Output:
```
{'name': 'Osama'}
{}
==================================================
{'name': 'Osama'}
{'name': 'Osama', 'age': 36}
{'name': 'Osama', 'age': 36, 'country': 'Egypt'}  
==================================================
{'name': 'Osama'}
{'name': 'Osama', 'skills': 'Fighting'}
{'name': 'Osama'}
dict_keys(['name', 'skills'])
dict_values(['Osama', 'Fighting'])
```