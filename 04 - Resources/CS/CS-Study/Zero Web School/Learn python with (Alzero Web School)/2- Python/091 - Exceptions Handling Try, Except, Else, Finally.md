---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=LBf_8txij3I&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=92
Author: "[[Alzero Wep School]]"
topic: "[[091 - Exceptions Handling Try, Except, Else, Finally]]"
---
> [!summary]-
> 

# <font color="#646a73">091 - Exceptions Handling Try, Except, Else, Finally</font>
 ---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -----------------------------------
# --      Exceptions Handling      --
# -- Try | Except | Else | Finally --
# -----------------------------------
# Try     => Test The Code For Errors
# Except  => Handle The Errors
# ----------------------------
# Else    => If No Errors
# Finally => Run The Code
# ------------------------

number = int(input("Write Your Age: "))

print(number)
print(type(number))

try:  # Try The Code and Test Errors

  number = int(input("Write Your Age: "))

  print("Good, This Is Integer From Try")

except:  # Handle The Errors If Its Found

  print("Bad, This is Not Integer")

else:  # If Theres No Errors

  print("Good, This Is Integer From Else")

finally:

  print("Print From Finally Whatever Happens")


try:

  # print(10 / 0)
  # print(x)
  print(int("Hello"))

except ZeroDivisionError:

  print("Cant Divide")

except NameError:

  print("Identifier Not Found")

except ValueError:

  print("Value Error Elzero")

except:

  print("Error Happens")
```
Output:
```
Write Your Age: 33
33
<class 'int'>   
Write Your Age: 33
Good, This Is Integer From Try
Good, This Is Integer From Else
Print From Finally Whatever Happens     
Value Error Elzero
```