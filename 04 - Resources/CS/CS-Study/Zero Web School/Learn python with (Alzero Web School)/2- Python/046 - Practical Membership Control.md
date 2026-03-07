---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=r9MaqQ0Iis0&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=46
Author: "[[Alzero Wep School]]"
topic: "[[046 - Practical Membership Control]]"
---
> [!summary]-
> 

# <font color="#646a73">046 - Practical Membership Control</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ----------------------------------
# -- Practical Membership Control --
# ----------------------------------

# List Contains Admins
admins = ["Ahmed", "Osama", "Sameh", "Manal", "Rahma", "Mahmoud", "Enas"]

# Login
name = input("Please Type Your Name ").strip().capitalize()

# If Name is In Admin
if name in admins:

  print(f"Hello {name} Welcome Back")

  option = input("Delete Or Update Your Name ?").strip().capitalize()

  # Update Option
  if option == 'Update' or option == 'U':

    theNewName = input("Your New Name Please ").strip().capitalize()

    admins[admins.index(name)] = theNewName

    print("Name Updated.")

    print(admins)

  # Delete Option
  elif option == 'Delete' or option == 'D':

    admins.remove(name)

    print("Name Deleted")

    print(admins)

  # Wrong Option
  else:

    print("Wrong Option Choosed")

else:

  status = input("Not Admin, Add You Y, N ? ").strip().capitalize()

  if status == "Yes" or status == "Y":

    print("You Have Been Added")

    admins.append(name)

    print(admins)

  else:

    print("You Are Not Added.")
```
Output:
```
Please Type Your Name Zakaria
Not Admin, Add You Y, N ? Y
You Have Been Added
["Ahmed", "Osama", "Sameh", "Manal", "Rahma", "Mahmoud", "Enas", "Zakaria"]

Please Type Your Name Zakaria
Not Admin, Add You Y, N ? n
You Are Not Added.
```