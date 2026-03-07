---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=S6dhvob-4DM&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=40
Author: "[[Alzero Wep School]]"
topic: "[[040 - Practical Your Age Full Details]]"
---
> [!summary]-
> 

# <font color="#646a73">040 - Practical Your Age Full Details</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -------------------------------------
# -- Practical Your Age Full Details --
# -------------------------------------

# Input Age
age = int(input('What\'s Your Age ? ').strip())

# Get Age in All Time Units
months = age * 12
weeks = months * 4
days = age * 365
hours = days * 24
minutes = hours * 60
seconds = minutes * 60

print('You Lived For:')
print(f"{months} Months.")
print(f"{weeks:,} Weeks.")
print(f"{days:,} Days.")
print(f"{hours:,} Hours.")
print(f"{minutes:,} Minutes.")
print(f"{seconds:,} Seconds.")
```
Output:
```
What's Your Age ? 19
You Lived For:
228 Months.
912 Weeks.
6,935 Days.
166,440 Hours.
9,986,400 Minutes.
599,184,000 Seconds.
```
