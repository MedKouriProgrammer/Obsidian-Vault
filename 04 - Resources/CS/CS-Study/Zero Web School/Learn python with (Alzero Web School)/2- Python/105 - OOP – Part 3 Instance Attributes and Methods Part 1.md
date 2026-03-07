---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
topic: "[[105 - OOP – Part 3 Instance Attributes and Methods Part 1]]"
---
> [!summary]-
> 

# <font color="#646a73">105 - OOP – Part 3 Instance Attributes and Methods Part 1</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# --------------------------------------------------------------------
# -- Object Oriented Programming => Instance Attributes and Methods --
# --------------------------------------------------------------------
# Self: Point To Instance Created From Class
# Instance Attributes: Instance Attributes Defined Inside The Constructor
# -----------------------------------------------------------------------
# Instance Methods: Take Self Parameter Which Point To Instance Created From Class
# Instance Methods Can Have More Than One Parameter Like Any Function
# Instance Methods Can Freely Access Attributes And Methods On The Same Object
# Instance Methods Can Access The Class Itself
# -----------------------------------------------------------

class Member:
  def __init__(self, first_name, middle_name, last_name):
    self.fname = first_name
    self.mname = middle_name
    self.lname = last_name

member_one = Member("Osama", "Mohamed", "Elsayed")
member_two = Member("Ahmed", "Ali", "Mahmoud")
member_three = Member("Mona", "Ali", "Mahmoud")

# print(dir(member_one))

print(member_one.fname, member_one.mname, member_one.lname)
print(member_two.fname)
print(member_three.fname)
```
Output:
```
Osama Mohamed Elsayed
Ahmed
Mona
```
---
### Input:
```python
class Member:

    def __init__(self, F_Name, Age):

        self.name = F_Name

        self.Age = Age

  

Person_Name1 = Member("Zakaria", 22)
Person_Name2 = Member("Ali", 33)

print(Person_Name1.name, Person_Name1.Age)
print(Person_Name2.name, Person_Name2.Age)
```
Output:
```
Zakaria 22
Ali 33
```
---
### Input:
```python
class Person:

    def __init__(self, Name, Age):

        self.Name = Name

        self.Age = Age

  

    def Method(self):

        print(f"Your name is {self.Name}, And your age is {self.Age}")

  

Person1 = Person("Ziko", 23)

Person1.Method()
```
Output:
```
Your name is Ziko, And your age is 23
```