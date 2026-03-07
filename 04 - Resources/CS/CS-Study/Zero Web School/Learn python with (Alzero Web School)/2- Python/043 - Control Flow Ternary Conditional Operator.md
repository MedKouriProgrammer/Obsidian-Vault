---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=1E7z7r61b2s&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=43
Author: "[[Alzero Wep School]]"
topic: "[[043 - Control Flow Ternary Conditional Operator]]"
---
> [!summary]-
> 

# <font color="#646a73">043 - Control Flow Ternary Conditional Operator</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ----------------------------------
# -- Ternary Conditional Operator --
# ----------------------------------

country = "A"

if country == "Egypt" : print(f"The Weather in {country} Is 15")
elif country == "KSA" : print(f"The Weather in {country} Is 30")
else : print("Country is Not in The List")

# Short If

movieRate = 18
age = 18

if age < movieRate :

  print("Movie S Not Good 4U") # Condition If True

else :

  print("Movie S Good 4U And Happy Watching") # Condition If False

print("Movie S Not Good 4U" if age < movieRate else "Movie S Good 4U And Happy Watching")

# Condition If True | If Condition | Else | Condition If False
```
Output:
```
Country is Not in The List
Movie S Good 4U And Happy Watching
Movie S Good 4U And Happy Watching
```