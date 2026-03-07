---
creation_date: 2025-10-16
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=nn4qN90A7X4&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=18
Author: "[[Alzero Wep School]]"
topic: "[[019 - Numbers\r]]"
---
> [!summary]-
> 

# <font color="#646a73">019 - Numbers</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -------------
# -- Numbers --
# -------------

# Integer

print(type(1))
print(type(100))
print(type(10))
print(type(-10))
print(type(-110))

# Float

print(type(1.500))
print(type(100.99))
print(type(-10.99))
print(type(0.99))
print(type(-0.99))

# Complex

myComplexNumber = 5+6j

print(type(myComplexNumber))

print("Real Part Is: {}".format(myComplexNumber.real))
print("Imaginary Part Is: {}".format(myComplexNumber.imag))

# [1] You Can Convert From Int To Float or Complex
# [2] You Can Convert From Float To Int or Complex
# [3] You Cannot Convert Complex To Any Type

print(100)
print(float(100))
print(complex(100))

print(10.50)
print(int(10.50))
print(complex(10.50))

print(10+9j)
print(int(10+9j))
```
Output:
```
<class 'int'>
<class 'int'>
<class 'int'>
<class 'int'>
<class 'int'>
<class 'float'>
<class 'float'>
<class 'float'>
<class 'float'>
<class 'float'>
<class 'complex'>
Real Part Is: 5.0
Imaginary Part Is: 6.0
100
100.0
(100+0j)
10.5
10
(10.5+0j)
(10+9j)
Traceback (most recent call last):
  File "c:\Users\ad\Documents\Cemder\MedDir\file.py", line 43, in <module>
    print(int(10+9j))
          ~~~^^^^^^^
TypeError: int() argument must be a string, a bytes-like object or a real number, not 'complex'
```