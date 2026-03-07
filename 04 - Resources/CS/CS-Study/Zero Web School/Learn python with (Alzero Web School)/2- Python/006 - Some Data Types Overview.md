---
creation_date: 2025-10-13
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=43lT7k0Zws0&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=6
Author: "[[Alzero Wep School]]"
Topics: "[[006 - Some Data Types Overview]]"
---
> [!summary]-
> 

# <font color="#646a73">006 - Some Data Types Overview</font>
---
## <font color="#ffc000">Data Types:</font>
### Integrals, float, complex:
- Those data types are for numbers, And each one of them has it used, The best thing in python you don’t have to definite it like c++, We will see that.

#### Input: `int `
```python
age = 12

print ("His age is",age)
print (type(age))
```
Output:
```
His age is 12
<class 'int'> 
```
`-------------------`
#### Input: `float `
```python
grade = 50.77

print ("His grade is",grade)
print (type(grade))
```
Output:
```
His grade is 50.77
<class 'float'> 
```
---
###  string:
- It’s a lot of words that’s we need to print or write some things.
#### Input: `string `
```python
name = "Zakaria"

print("his name is", name)
print(type(name))
```
Output:
```
his name is Zakaria
<class 'str'>
```
#### Input: (you can blend the strings)
```python
print("his name is " + "" + "zakaria")
print(type(name))
```
Output:
```
his name is  Zakaria
<class 'str'>
```
#### Input: (and you can reprint)
```python
name = "Zakaria"

print("i hate this", "life " * 3 )
print(type(name))
```
Output:
```
i hate this life life life 
<class 'str'>
```
---
### boolean:
- logical values, It used for logic & Comparison.
#### Input: `Bool `:
```python
print(5 > 3)  # True
print(10 == 2)  # False

print (type(5 > 7))
```
Output:
```
True
False
<class 'bool'>
```
---
### list:
- List is like array, But it’s more evolution, List it’s not confined on integrals & float, It’s on many types like string & boolean, And you can mix it in one variable.

#### Input: `list`:
```python
numbers = [1, 2, 3, 4]
names = ["Ali", "Sara", "Omar"]
mixed = [1, "Ali", True, 3.14]

print(numbers)
print(names)
print(mixed)
```
Output:
```
[1, 2, 3, 4]
['Ali', 'Sara', 'Omar']
[1, 'Ali', True, 3.14]
```
---
### tuple:
- It’s like a list, But it’s constant, You can’t adjust it.
#### Input: `tuple `:
```python
Rooms = (5,10,50)

print("His Rooms is", Rooms)
print(type(Rooms))
```
Output:
```
His Rooms is (5, 10, 50)
<class 'tuple'>
```
---
### set:
- A set is a collection of unique (no duplicates) and unordered elements.
#### Input: `set `:
```python
UniqueNumbers = {1,1,2,3,3,4,5}

print("The unique number are:",UniqueNumbers)
print(type(UniqueNumbers))
```
Output:
```
The unique number are: {1, 2, 3, 4, 5}
<class 'set'>
```
---
### dict:
- dict is short word from dictionary, Is like structure in c++.
#### Input: `dict `:
```python
person = {

    "name" : "Mohemmed",
    "age" : 22,
    "country" : "Europe",
    "salery" : 25000
}


print("His name is", person["name"], "And His age is", person["age"], "Finally his Salery is", person["salery"])

print(type(person))
```
Output:
```
His name is Mohemmed And His age is 22 Finally his Salery is 25000
<class 'dict'>
```
---
