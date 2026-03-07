---
creation_date: 2025-10-16
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=m_OUIywn_XE&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=17
Author: "[[Alzero Wep School]]"
topic: "[[017 - Strings Formatting The Old Way1]]"
---
> [!summary]-
> 

# <font color="#646a73">017 - Strings Formatting The Old Way</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ------------------------
# -- Strings Formatting --
# ------------------------

name = "Osama"
age = 36
rank = 10

print("My Name is: " + name)
# print("My Name is: " + name + " and My Age is: " + age)  # Type Error

print("My Name is: %s" % "Osama")
print("My Name is: %s" % name)
print("My Name is: %s and My Age is: %d" % (name, age))
print("My Name is: %s and My Age is: %d and My Rank is: %f" % (name, age, rank))

# %s => String
# %d => Number
# %f => Float

n = "Osama"
l = "Python"
y = 10

print("My Name is %s Iam %s Developer With %d Years Exp" % (n, l, y))

# Control Floating Point Number

myNumber = 10
print("My Number is: %d" % myNumber)
print("My Number is: %f" % myNumber)
print("My Number is: %.2f" % myNumber)

# Truncate String

myLongString = "Hello Peoples of Elzero Web School I Love You All"
print("Message is %s" % myLongString)
print("Message is %.5s" % myLongString)
```
Output:
```
My Name is: Osama
My Name is: Osama
My Name is: Osama
My Name is: Osama and My Age is: 36
My Name is: Osama and My Age is: 36 and My Rank is: 10.000000
My Name is Osama Iam Python Developer With 10 Years Exp
My Number is: 10
My Number is: 10.000000
My Number is: 10.00
Message is Hello Peoples of Elzero Web School I Love You All
Message is Hello
```