---
creation_date: 2025-10-16
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=m_OUIywn_XE&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=17
Author: "[[Alzero Wep School]]"
topic: "[[018 - Strings Formatting New Ways\r]]"
---
> [!summary]-
> 

# <font color="#646a73">018 - Strings Formatting New Ways</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ---------------------------------
# -- Strings Formatting New Ways --
# ---------------------------------

name = "Osama"
age = 36
rank = 10

print("My Name is: " + name)
# print("My Name is: " + name + " and My Age is: " + age)  # Type Error

print("My Name is: {}".format("Osama"))
print("My Name is: {}".format(name))
print("My Name is: {} My Age: {}".format(name, age))
print("My Name is: {:s} Age: {:d} & Rank is: {:f}".format(name, age, rank))

# {:s} => String
# {:d} => Number
# {:f} => Float

n = "Osama"
l = "Python"
y = 10

print("My Name is {} Iam {} Developer With {:d} Years Exp".format(n, l, y))

# Control Floating Point Number

myNumber = 10
print("My Number is: {:d}".format(myNumber))
print("My Number is: {:f}".format(myNumber))
print("My Number is: {:.2f}".format(myNumber))

# Truncate String

myLongString = "Hello Peoples of Elzero Web School I Love You All"
print("Message is {}".format(myLongString))
print("Message is {:.5s}".format(myLongString))
print("Message is {:.13s}".format(myLongString))

# Format Money

myMoney = 500162350198

print("My Money in Bank Is: {:d}".format(myMoney))
print("My Money in Bank Is: {:_d}".format(myMoney))
print("My Money in Bank Is: {:,d}".format(myMoney))

# ReArrange Items

a, b, c = "One", "Two", "Three"
print("Hello {} {} {}".format(a, b, c))  # Hello One Two Three
print("Hello {1} {2} {0}".format(a, b, c))  # Hello Two Three One
print("Hello {2} {0} {1}".format(a, b, c))  # Hello Three One Two

x, y, z = 10, 20, 30
print("Hello {} {} {}".format(x, y, z))
print("Hello {1:d} {2:d} {0:d}".format(x, y, z))
print("Hello {2:f} {0:f} {1:f}".format(x, y, z))
print("Hello {2:.2f} {0:.4f} {1:.5f}".format(x, y, z))

# Format in Version 3.6+

myName = "Osama"
myAge = 36

print("My Name is : {myName} and My Age is : {myAge}")
print(f"My Name is : {myName} and My Age is : {myAge}")
```
Output:
```
My Name is: Osama
My Name is: Osama
My Name is: Osama
My Name is: Osama My Age: 36
My Name is: Osama Age: 36 & Rank is: 10.000000
My Name is Osama Iam Python Developer With 10 Years Exp
My Number is: 10
My Number is: 10.000000
My Number is: 10.00
Message is Hello Peoples of Elzero Web School I Love You All
Message is Hello
Message is Hello Peoples
My Money in Bank Is: 500162350198
My Money in Bank Is: 500_162_350_198
My Money in Bank Is: 500,162,350,198
Hello One Two Three
Hello Two Three One
Hello Three One Two
Hello 10 20 30
Hello 20 30 10
Hello 30.000000 10.000000 20.000000
Hello 30.00 10.0000 20.00000
My Name is : {myName} and My Age is : {myAge}
My Name is : Osama and My Age is : 36
```