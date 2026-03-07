---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=MLb7pPOEJlg&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=102
Author: "[[Alzero Wep School]]"
topic: "[[102 - Regular Expressions Part 8 Group Trainings And Flags]]"
---
> [!summary]-
> 

# <font color="#646a73">102 - Regular Expressions Part 8 Group Trainings And Flags</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ------------------------------------------------------
# -- Regular Expressions => Group Trainings And Flags --
# ------------------------------------------------------

import re

my_web = "https://www.elzero.org:8080/category.php?article=105?name=how-to-do"

search = re.search(r"(https?)://(www)?\.?(\w+)\.(\w+):?(\d+)?/?(.+)", my_web)

print(search.group())
print(search.groups())

for group in search.groups():

  print(group)

print(f"Protocol: {search.group(1)}")
print(f"Sub Domain: {search.group(2)}")
print(f"Domain Name: {search.group(3)}")
print(f"Top Level Domain: {search.group(4)}")
print(f"Port: {search.group(5)}")
print(f"Query String: {search.group(6)}")
```
Output:
```
https://www.elzero.org:8080/category.php?article=105?name=how-to-do
('https', 'www', 'elzero', 'org', '8080', 'category.php?article=105?name=how-to-do')
-----------------------
https
www
elzero
org
8080
category.php?article=105?name=how-to-do
-----------------------
Protocol: https
Sub Domain: www
Domain Name: elzero
Top Level Domain: org
Port: 8080
Query String: category.php?article=105?name=how-to-do
```