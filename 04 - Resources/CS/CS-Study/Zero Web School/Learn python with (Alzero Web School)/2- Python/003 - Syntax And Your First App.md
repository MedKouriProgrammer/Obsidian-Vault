---
creation_date: 2025-10-13
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=xiMHoMVWdI4&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=3
Author: "[[Alzero Wep School]]"
Topics: "[[003 - Syntax And Your First App]]"
---
> [!summary]-
> 

# <font color="#646a73">003 - Syntax And Your First App (use cmder to print anything in file on Python vs.code, the syntax of prints)</font>
---
## <font color="#ffc000">Highlight & Notes:</font>
### Cmder & Files:
- You can create a file on cmder and enter directly to vs.code python, And print anything on it, And finally you can find the print into file on cmder or python terminal.
#### Input: (cmder)
```cpp 
// Firstly we will create a file.py and open it directly on vs.code

C:\Users\ad\Documents\Cemder\MedDir
λ touch file.py

C:\Users\ad\Documents\Cemder\MedDir
λ code file.py
```
#### Input: (moving directly to python vs.code) 
```python
# Now let's print some write into the file on vs.code

print("What up Python")
print("Whatup")
```
#### Input: (back to cmder to see the prints)
```cpp 
// To show the print in the file, We should use `python ` not `cat ` like this: `python ` + filename.py 

C:\Users\ad\Documents\Cemder\MedDir
λ python file.py
What up Python
Whatup
```
---
### Basics of prints:

- Prints syntax in python has a big different than c++, But now we won’t cover many topics, We’ll only talk about the basics of printing.
#### Input: (to print one thing on python)
```python
print("What up Python")
```
 Output:
```
What up Python
```
#### Input: (to print more thing on python)
```python
print("What up Python")
print("Whatup")

# He will make new line automatically.
```
 Output
```
What up Python
Whatup
```
#### Input: (to make stream insertion operator)
```python
print("Whatup" , "Python")
```
Output
```
Whatup Python
```
---
### Indentation on python:

- Indentation it’s in short the space into the block of code, So that he can distinguish between the blocks.
#### Input: (indentation in if statement)
```python
x = 12

if x > 0:
 print("Is positive Number")

# Here i let one indentation, Whatever i let it doesn't matter.
```
Output
```
Is positive Number
```
#### Input: (indentation with many if statement)
```python
x = 12
y = 3

  
if x > 0:
 print("x is positive number")

 if y > 0:
  print("y is positive number")

  if y < x:
   print("y is smaller than x")
   
# The content into if statement is block of code, So if i have a lot of only if statement, I have to take care about indentation, To let compiler know the blocks.
```
Output
```
x is positive number
y is positive number
y is smaller than x
```
#### Input: (Indentation with if else statement)
```python
score = 85

if score >= 50:
    print("Passed")

    if score >= 90:
        print("Excellent")
    elif score >= 75:
        print("Good")
    else:
        print("Average")

else:
    print("Failed")

# Know i have if else statements, So the else is the content of if statement, That's why i don't have to take care about indentation.
```
Output
```
Passed
Good
```
---