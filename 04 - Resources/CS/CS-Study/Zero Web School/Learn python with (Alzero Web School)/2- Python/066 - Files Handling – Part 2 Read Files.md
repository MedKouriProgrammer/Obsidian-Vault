---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=9ZU9FQQbOYE&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=66
Author: "[[Alzero Wep School]]"
topic: "[](066%20-%20Files%20Handling%20–%20Part%202%20Read%20Files.md)"
---
> [!summary]-
> 

# <font color="#646a73">066 - Files Handling – Part 2 Read Files</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
### Input:
```python
# --------------------------------
# -- File Handling => Read File --
# "r" Read    [Default Value] Open File For Read and Give Error If File is Not Exists.
# --------------------------------

myFile = open("D:\Python\Files\osama.txt", "r")

print(myFile)  # File Data Object
print(myFile.name)
print(myFile.mode)
print(myFile.encoding)

print(myFile.read())
print(myFile.read(5))

print(myFile.readline(5))
print(myFile.readline())
print(myFile.readline())

print(myFile.readlines())
print(myFile.readlines(50))
print(type(myFile.readlines()))

for line in myFile:

  print(line)

  if line.startswith("07"):

    break

# Close The File

myFile.close()
```
### My Input:
```python
import os

MyFile = open("Ziko.txt")

print(MyFile.read())        # Read all wrote inside the variable file.
#print(MyFile.read(10))      # Read specific character.

print("-------------")
MyFile.seek(0)

print(MyFile.readline())    # Read all the line.
#print(MyFile.readline(10))  # Read specific character.

print("-------------")
MyFile.seek(0)

print(MyFile.readlines())  # Read all the lines.
#print(MyFile.readlines(10)) # Read specific character.

print("-------------")

MyFile.seek(0)

for file in MyFile:
    print(file)

    if file.startswith("7"):

		break
```
Output:
```
Hello bro.
I'am Ziko.
1- one.
2- two.
3- three.
4- foure.
5- five.
6- sex.
7- seven.
8- haith.
9- nine.
10 - ten.

-------------
Hello bro.

-------------
['Hello bro.\n', "I'am Ziko.\n", '1- one.\n', '2- two.\n', '3- three.\n', '4- foure.\n', '5- five.\n', '6- sex.\n', '7- seven.\n', '8- haith.\n', '9- nine.\n', '10 - ten.\n']
-------------
Hello bro.

I'am Ziko.

1- one.

2- two.

3- three.

4- foure.

5- five.

6- sex.

7- seven.
```