---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=nS-uled9biI&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=75
Author: "[[Alzero Wep School]]"
topic: "[[075 - Built In Functions Part 7]]"
---
> [!summary]-
> 

# <font color="#646a73">075 - Built In Functions Part 7</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ------------------------
# -- Built In Functions --
# ------------------------
# enumerate()
# help()
# reversed()
# ------------------------

# enumerate(iterable, start=0)

mySkills = ["Html", "Css", "Js", "PHP"]

mySkillsWithCounter = enumerate(mySkills, 20)

print(type(mySkillsWithCounter))
 
for counter, skill in mySkillsWithCounter:

  print(f"{counter} - {skill}")

print("#" * 50)

# help()

print(help(print))

print("#" * 50)

# reversed(iterable)

myString = "Elzero"

print(reversed(myString))

for letter in reversed(myString):

  print(letter)

for s in reversed(mySkills):

  print(s)
```
Output:
```
<class 'enumerate'>
20 - Html
21 - Css
22 - Js
23 - PHP
##################################################
##################################################
<reversed object at 0x00000224F0B3BE80>
o
r
e
z
l
E
PHP
Js
Css
Html
```
---
# 🔵 خلاصة enumerate()

| الخاصية     | الشرح                                      |
| ----------- | ------------------------------------------ |
| نوعها       | دالة built-in                              |
| ماذا تفعل؟  | تعطيك index + value معًا أثناء اللوب       |
| لماذا مهمة؟ | لأن حساب الفهرس يدويًا مزعج وقد يسبب أخطاء |
| أين تستخدم؟ | عند الحاجة للـ index أثناء تكرار القائمة   |