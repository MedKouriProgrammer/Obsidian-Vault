---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=0Zmdu7OgVl0&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=73
Author: "[[Alzero Wep School]]"
topic: "[[073 - Built In Functions Part 5 – Filter]]"
---
> [!summary]-
> 

# <font color="#646a73">073 - Built In Functions Part 5 – Filter</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ----------------------------------
# -- Built In Functions => Filter --
# ----------------------------------
# [1] Filter Take A Function + Iterator
# [2] Filter Run A Function On Every Element
# [3] The Function Can Be Pre-Defined Function or Lambda Function
# [4] Filter Out All Elements For Which The Function Return True
# [5] The Function Need To Return Boolean Value
# ---------------------------------------------------------------

# Example 1

def checkNumber(num):

  return num > 10

myNumbers = [0, 0, 1, 19, 10, 20, 100, 5, 0]

myResult = filter(checkNumber, myNumbers)

for number in myResult:

  print(number)

print("#" * 50)

# Example 2

def checkName(name):

  return name.startswith("O")

myTexts = ["Osama", "Omer", "Omar", "Ahmed", "Sayed", "Othman"]

myReturnedData = filter(checkName, myTexts)

for person in myReturnedData:

  print(person)

print("#" * 50)

# Example 3

myNames = ["Osama", "Omer", "Omar", "Ahmed", "Sayed", "Othman", "Ameer"]

for p in filter(lambda name: name.startswith("A"), myNames):

  print(p)
```
Output:
```
19
20
100
##################################################
Osama
Omer
Omar
Othman
##################################################
Ahmed
Ameer
```
---
# 🎯 **ما هي filter؟**

تخيّل عندك **قائمة** فيها عناصر كثيرة، وتريد:

- تختار الأرقام الزوجية فقط
    
- أو تختار الأسماء اللي تبدأ بحرف A
    
- أو تختار القيم الأكبر من 10
    
- أو تزيل القيم الفارغة ""
    
- أو تزيل العناصر غير الصالحة

|الدالة|ماذا تفعل؟|
|---|---|
|**map**|تغيّر كل عنصر وتعيد نسخة جديدة|
|**filter**|تختار فقط العناصر التي تحقق الشرط|


---
بدل ما تكتب حلقة for طويلة:

`new_list = [] 
for x in old_list:     
	if شرط(x):        
	   new_list.append(x)`

تستعمل:

# 🔥 **filter = آلة تعمل لك عملية الفلترة آليًا**

---

# ⭐ تعريف بسيط جدًا:

### **filter() = رجّع لي فقط العناصر التي يحققها الشرط.**

---

# 🧱 صيغة filter:

`filter(function, iterable)`

- **function** → دالة ترجع True أو False
    
- **iterable** → القائمة التي تريد فلترتها
    
- filter ترجع العناصر اللي حققت الشرط (True)
    

---

# 🤖 تخيّل filter كآلة:

1. تعطيها شرط
    
2. تعطيها قائمة
    
3. وهي تعيد لك فقط العناصر المقبولة
    

---

# ⭐ لنبدأ بأوضح مثال ممكن:

## نريد الأرقام الزوجية فقط

### الطريقة العادية:

`numbers = [1, 2, 3, 4, 5, 6] new_list = []  for x in numbers:     if x % 2 == 0:   # شرط الزوجية         new_list.append(x)`

---

# ✨ نفس الشيء باستخدام filter:

`numbers = [1, 2, 3, 4, 5, 6]  result = filter(lambda x: x % 2 == 0, numbers)  print(list(result))`

النتيجة:

`[2, 4, 6]`

*_filter_ أخذت فقط القيم التي الشرط لها True.

---

# 🔥 مثال ثاني واضح جدًا:

## نريد الأسماء التي طولها أكبر من 3

`names = ["Ali", "Sara", "Omar", "Bo"]  result = filter(lambda name: len(name) > 3, names)  print(list(result))`

النتيجة:

`['Sara', 'Omar']`

لأن "Ali" و "Bo" طولهم ≤ 3.

---

# 🔥 مثال ثالث:

## نريد إزالة القيم الفارغة

`data = ["hello", "", "world", "", "Python"]  result = filter(lambda x: x != "", data)  print(list(result))`

النتيجة:

`['hello', 'world', 'Python']`

---

# ⭐ مثال عملي مهم:

## إبقاء الأرقام الأكبر من 10:

`nums = [5, 20, 3, 40, 7, 15]  result = filter(lambda x: x > 10, nums)  print(list(result))`

النتيجة:

`[20, 40, 15]`

---

# ✨ لاحظ الفرق بين map و filter:

|الدالة|ماذا تفعل؟|
|---|---|
|**map**|تغيّر كل عنصر وتعيد نسخة جديدة|
|**filter**|تختار فقط العناصر التي تحقق الشرط|

مثال شامل:

`map → تعديلات filter → حذف/اختيار`

---

# 🎯 الخلاصة الذهبية:

### **filter تستعمل عندما تريد استخراج العناصر التي تحقق شرطًا معينًا.**

وتحتاج:

✔ دالة ترجع True / False  
✔ قائمة