---
creation_date: 2025-10-30
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=2EY1CCnByK4&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=38
Author: "[[Alzero Wep School]]"
topic: "[[038 - User Input]]"
---
> [!summary]-
> 

# <font color="#646a73">038 - User Input</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ----------------
# -- User Input --
# ----------------

fName = input('What\'s Is Your First Name?')
mName = input('What\'s Is Your Middle Name?')
lName = input('What\'s Is Your Last Name?')

fName = fName.strip().capitalize()
mName = mName.strip().capitalize()
lName = lName.strip().capitalize()

print(f"Hello {fName} {mName:.1s} {lName} Happy To See You.")
```
Output:
```
What's Is Your First Name? Zakaria
What's Is Your Middle Name? medkouri
What's Is Your Last Name?3
Hello Zakaria M 3 Happy To See You.
```