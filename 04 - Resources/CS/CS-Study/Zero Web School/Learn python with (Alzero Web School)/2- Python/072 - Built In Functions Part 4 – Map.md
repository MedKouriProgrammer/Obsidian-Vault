---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=JvbLI0z8t8c&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=72
Author: "[[Alzero Wep School]]"
topic: "[[072 - Built In Functions Part 4 – Map]]"
---
> [!summary]-
> 

# <font color="#646a73">072 - Built In Functions Part 4 – Map</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -------------------------------
# -- Built In Functions => Map --
# -------------------------------
# [1] Map Take A Function + Iterator
# [2] Map Called Map Because It Map The Function On Every Element
# [3] The Function Can Be Pre-Defined Function or Lambda Function
# ---------------------------------------------------------------

# Use Map With Predefined Function

def formatText(text):

  return f"- {text.strip().capitalize()} -"

myTexts = [" OSama ", "AHMED", "  sAYed  "]

myFormatedData = map(formatText, myTexts)

print(myFormatedData)

for name in list(map(formatText, myTexts)):

  print(name)

print("#" * 50)

# Use Map With Lambda Function

def formatText(text):

  return f"- {text.strip().capitalize()} -"

myTexts = [" OSama ", "AHMED", "  sAYed  "]

for name in list(map((lambda text: f"- {text.strip().capitalize()} -"), myTexts)):

  print(name)
```
Output:
```
<map object at 0x0000017AF9CAC3D0>
- Osama -
- Ahmed -
- Sayed -
##################################################
- Osama -
- Ahmed -
- Sayed -
```
---
# 📌 إذًا ما الاستخدامات الحقيقية لـ map؟

### ✔ عندما تريد “تحويل” كل عنصر في القائمة

- تحويل النصوص إلى أرقام → `map(int, ...)`
    
- تحويل الحروف إلى uppercase → `map(str.upper, ...)`
    
- ضرب الأرقام × 2 → `map(lambda x: x*2, ...)`
    
- جمع قائمتين → `map(lambda a,b: a+b, list1, list2)`
    
- حذف مسافات من كل سطر → `map(str.strip, ...)`
---
- ادا تريد عملها على شكل “ليست” خزنها في متغير.
```python
numbers = [1, 2, 3, 4]

MyResult = map(lambda MyNum : MyNum * 2, numbers)

print(list(MyResult))
```

```
[2, 4, 6, 8]
```
---
- ادا اردت طبعها بشكل متساوي اطبعها في لوب مع lambda function .
- او اعمل دالة فوق ثم اعمل متغير فيه map وجمع داخله الدالة مع متغير اللي فيه العناصر وبعدها حطها في لوب. 
```python
numbers = [1, 2, 3, 4]

for num in map(lambda number : number * 2, numbers):
    print(num)

------------------------------------------------------------------------------

def Defision_Numbers(num):
 return num * 2

numbers = [1, 2, 3, 4]

MyResult = map(Defision_Numbers,numbers)

for num in MyResult:

 print(num)
```

```
2
4
6
8
```