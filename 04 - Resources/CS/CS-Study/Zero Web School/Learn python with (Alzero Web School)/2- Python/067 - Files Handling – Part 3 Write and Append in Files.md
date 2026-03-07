---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=FBcElrNaiZQ&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=67
Author: "[[Alzero Wep School]]"
topic: "[[067 - Files Handling – Part 3 Write and Append in Files]]"
---
> [!summary]-
> 

# <font color="#646a73">067 - Files Handling – Part 3 Write and Append in Files</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
### Alzero Input:
```python
# -----------------------------------------------
# -- File Handling => Write and Append In File --
# -----------------------------------------------
# "a" Append  Open File For Appending Values, Create File If Not Exists.
# "w" Write   Open File For Writing, Create File If Not Exists.
# -----------------------------------------------
# -----------------------------------------------

myFile = open("D:\Python\Files\osama.txt", "w")
myFile.write("Hello\n")
myFile.write("Third Line")

myFile = open(r"D:\Python\Files\fun.txt", "w")
myFile.write("Elzero Web School\n" * 1000)

myList = ["Oasma\n", "Ahmed\n", "Sayed\n"]

myFile = open("D:\Python\Files\osama.txt", "w")
myFile.writelines(myList)

myFile = open("D:\Python\Files\osama.txt", "a")
myFile.write("Elzero")
```
### My Input:
```python
# -----------------------------------------------------------------------
# "a" Append  Open File For Appending Values, Create File If Not Exists.
# "w" Write   Open File For Writing, Create File If Not Exists.
# -----------------------------------------------------------------------
MyFile = open("Ziko.txt", 'w')


MyFile.write("Welcom\n") # Now anythink i write it, It will wiping the old wrote and past the new wrote.
MyFile.write("I'ma a software anginyeer")


print("-------------")

  
mylist = ["Ahmed\n", "Fohros\n", "Kratos"]

MyFile.writelines(mylist) # I should call 'writelines' Not 'write' to print the list insert MyFile function.

```
