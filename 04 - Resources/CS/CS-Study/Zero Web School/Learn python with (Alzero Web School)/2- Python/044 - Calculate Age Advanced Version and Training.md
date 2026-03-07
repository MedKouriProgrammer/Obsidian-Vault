---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=MpO84gVARdE&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=44
Author: "[[Alzero Wep School]]"
topic: "[[044 - Calculate Age Advanced Version and Training]]"
---
> [!summary]-
> 

# <font color="#646a73">044 - Calculate Age Advanced Version and Training</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -------------------------------------------------
# -- Calculate Age Advanced Version and Training --
# -------------------------------------------------

# Write A Very Beautiful Note
print("#" * 80)
print(" You Can Write The First Letter Or Full Name of The Time Unit ".center(80, '#'))
print("#" * 80)

# Collect Age Data
age = input("Please Write Your Age").strip()

# Collect Time Unit Data
unit = input("Please Choose Time Unit: Months, Weeks, Days ").strip().lower()

# Get Time Units
months = int(age) * 12
weeks = months * 4
days = int(age) * 365

if unit == 'months' or unit == 'm':

  print("You Choosed The Unit Months")
  print(f"You Lived For {months:,} Months.")

elif unit == 'weeks' or unit == 'w':

  print("You Choosed The Unit Weeks")
  print(f"You Lived For {weeks:,} Weeks.")

elif unit == 'days' or unit == 'd':

  print("You Choosed The Unit Days")
  print(f"You Lived For {days:,} Days.")
```
Output:
```
################################################################################
######### You Can Write The First Letter Or Full Name of The Time Unit #########
################################################################################
Please Write Your Age 22
Please Choose Time Unit: Months, Weeks, Days Months
You Choosed The Unit Months
You Lived For 264 Months. 
```