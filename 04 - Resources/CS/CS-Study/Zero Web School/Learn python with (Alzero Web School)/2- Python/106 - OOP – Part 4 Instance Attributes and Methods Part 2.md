---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
topic: "[[106 - OOP – Part 4 Instance Attributes and Methods Part 2]]"
---
> [!summary]-
> 

# <font color="#646a73">106 - OOP – Part 4 Instance Attributes and Methods Part 2</font> 
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
  def __init__(self, first_name, middle_name, last_name, gender):
    self.fname = first_name
    self.mname = middle_name
    self.lname = last_name
    self.gender = gender

  def full_name(self):
    return f"{self.fname} {self.mname} {self.lname}"

  def name_with_title(self):
    if self.gender == "Male":
      return f"Hello Mr {self.fname}"
    elif self.gender == "Female":
      return f"Hello Miss {self.fname}"
    else:
      return f"Hello {self.fname}"

  def get_all_info(self):
    return f"{self.name_with_title()}, Your Full Name Is: {self.full_name()}"


member_one = Member("Osama", "Mohamed", "Elsayed", "Male")
member_two = Member(" Ahmed", "Ali", "Mahmoud", "Male")
member_three = Member("Mona", "Ali", "Mahmoud", "Female")

# print(dir(member_one))

# print(member_one.fname, member_one.mname, member_one.lname)
# print(member_two.fname)
# print(member_three.fname)

# print(member_two.full_name())
# print(member_two.name_with_title())

print(member_one.get_all_info())
```
Output:
```
Hello Mr Osama, Your Full Name Is: Osama Mohamed Elsayed
```
---
### Input:
```python
class Member:

    def __init__(self, F_Name, L_Name, Age, Gender):
    
        self.F_Name = F_Name
        self.L_Name = L_Name
        self.Age = Age
        self.Gender = Gender
  

    def GetFullName(self):
        return f"Your Full Name is: ({self.F_Name} {self.L_Name}), And your Age is ({self.Age})"

  

    def name_with_title(self):
    
        if self.Gender == "Male":
            return f"Hello Mr {self.F_Name}"

        elif self.Gender == "Female":
            return f"Hello Ms {self.F_Name}"

        else:
            return f"Hello {self.F_Name}"

    def get_all_info(self):
        return f"{self.name_with_title()}, {self.GetFullName()}"

  
  
Person1 = Member("Zakaria", "Medkouri", 19, "Male")
Person2 = Member("Ali", "Riayad", 23, "Female")

  
print(Person1.get_all_info())
print(Person2.get_all_info())
```
Output:
```
Hello Mr Zakaria, Your Full Name is: (Zakaria Medkouri), And your Age is (19)
Hello Ms Ali, Your Full Name is: (Ali Riayad), And your Age is (23)
```
---
### Input:
```python
class Member:

  

    def Get_FullName(self):

  

        parts = "Hi"

  

        while len(parts) != 4:

            try:

  

                Full_Name = input(f"Enter Your Full Name: ")

                parts = Full_Name.split(" ")

  

                First, Last, Age, Gender = parts

                self.F_Name = First

                self.L_Name = Last

                self.Age = Age

                self.Gender = Gender.capitalize()

            except:

                print("Your Information must be (First Name - Last Name - Age - Gender), Try again!")

                Full_Name = None

                parts = None

  

    def Name_With_Title(self):

        if self.Gender == "Male":

            return f"Hello Mr {self.F_Name}"

        elif self.Gender == "Female":

            return f"Hello Ms {self.F_Name}"

  

        else:

            return f"Hello {self.F_Name}"

    def Sort_Information(self):

        return f"Your FullName is {self.F_Name} {self.L_Name}, And your Age is: {self.Age}"

    def Get_AllInfo(self):

        return f"{self.Name_With_Title()}, {self.Sort_Information()}"

  

Person1 = Member()

  

Person1.Get_FullName()

print(Person1.Get_AllInfo())
```
Output:
```
Enter Your Full Name: Zakaria Medkouri 23 Male
Hello Mr Zakaria, Your FullName is Zakaria Medkouri, And your Age is: 23
```
---
### Input:
```python
class Person:

    def GetFirstName(self):
        self.F_Name = input("Enter your first name: ")

    def GetLastName(self):
        self.L_Name = input("Enter your last name: ")

    def GetAge(self):
        self.Age = input("Enter your age: ")

    def GetGender(self):
        self.Gender = input("Enter your gender: ")

    def ShowFullInfo(self):
        print(f"Full Name: {self.F_Name} {self.L_Name}")
        print(f"Age: {self.Age}")
        print(f"Gender: {self.Gender}")


# Test
p = Person()

p.GetFirstName()
p.GetLastName()
p.GetAge()
p.GetGender()

p.ShowFullInfo()

```
Output:
```
Enter your first name: Zakaria
Enter your last name: Medkouri
Enter your age: 23
Enter your gender: Male
Full Name: Zakaria Medkouri
Age: 23
Gender: Male
```