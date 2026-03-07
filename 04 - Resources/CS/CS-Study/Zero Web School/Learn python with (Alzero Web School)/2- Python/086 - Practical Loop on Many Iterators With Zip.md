---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=Z1gwFze9e94&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=86
Author: "[[Alzero Wep School]]"
topic: "[[086 - Practical Loop on Many Iterators With Zip]]"
---
> [!summary]-
> 

# <font color="#646a73">086 - Practical Loop on Many Iterators With Zip</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ----------------------------------------------------
# -- Practical => Loop on Many Iterators With Zip() --
# ----------------------------------------------------
# zip() Return A Zip Object Contains All Objects
# zip() Length Is The Length of Lowest Object
# ------------------------------------------------

list1 = [1, 2, 3, 4, 5]
list2 = ["A", "B", "C", "D"]
tuple1 = ("Man", "Woman", "Girl", "Boy")
dict1 = {"Name": "Osama", "Age": 36, "Country": "Egypt", "Skill": "Python"}

for item1, item2, item3, item4 in zip(list1, list2, tuple1, dict1):

  print("List 1 Item =>", item1)
  print("List 2 Item =>", item2)
  print("Tuple 1 Item =>", item3)
  print("Dict 1 Key =>", item4, "Value =>", dict1[item4])

ultimateList = zip(list1, list2)
print(ultimateList)
for item in ultimateList:
  print(item)
```
Output:
```
List 1 Item => 1
List 2 Item => A
Tuple 1 Item => Man
Dict 1 Key => Name Value => Osama
List 1 Item => 2
List 2 Item => B
Tuple 1 Item => Woman
Dict 1 Key => Age Value => 36
List 1 Item => 3
List 2 Item => C
Tuple 1 Item => Girl
Dict 1 Key => Country Value => Egypt
List 1 Item => 4
List 2 Item => D
Tuple 1 Item => Boy
Dict 1 Key => Skill Value => Python
<zip object at 0x000001ABAD0DDA40>
(1, 'A')
(2, 'B')
(3, 'C')
(4, 'D')
```
---
### Input: My code:
```python
list1 = ["Ahmed", "saeid", "Ziko", "Radi"]
list2 = [22, 32, 19]
list3 = ["Egypt", "Pacistan", "Morroco"]
  

for Name, Age, Country in zip(list1, list2, list3):

    print(f"{Name} has {Age} years old, He lived in {Country}")
```
Output:
```
Ahmed has 22 years old, He lived in Egypt
saeid has 32 years old, He lived in Pacistan
Ziko has 19 years old, He lived in Morroco
```
### Input: 
```python
products = ["Apple", "Banana", "Orange"]
prices = [1.2, 0.5, 0.8]
quantities = [10, 20, 15]

for product, price, qty in zip(products, prices, quantities):

    total = price * qty
	print(f"{product}: ${total}")
```
Output:
```
Apple: $12.0
Banana: $10.0
Orange: $12.0
```