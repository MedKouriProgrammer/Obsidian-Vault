---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=7NIcsmfHIrg&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=50
Author: "[[Alzero Wep School]]"
topic: "[[050 - Loop – While Training’s Password Guess]]"
---
> [!summary]-
> 

# <font color="#646a73">050 - Loop – While Training’s Password Guess</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ----------------------------
# -- Loop => While Training --
# -- Simple Password Guess --
# ----------------------------

tries = 4

mainPassword = "Osama@123"

inputPassword = input("Write Your Password: ")

while inputPassword != mainPassword:  # True

  tries -= 1  # tries = tries - 1

  print(f"Wrong Password, { 'Last' if tries == 0 else tries } Chance Left")

  inputPassword = input("Write Your Password: ")

  if tries == 0:

    print("All Tries Is Finished.")

    break

    print("Will Not Print")

else:

  print("Correct Password")
```
Output: True
```
Write Your Password: Osama@123
Correct Password
```
Output: False
```
Write Your Password: ggd
Wrong Password, 3 Chance Left
Write Your Password: cdc
Wrong Password, 2 Chance Left
Write Your Password: dcmkk
Wrong Password, 1 Chance Left
Write Your Password: dkm
Wrong Password, Last Chance Left
Write Your Password: msm
All Tries Is Finished.
```