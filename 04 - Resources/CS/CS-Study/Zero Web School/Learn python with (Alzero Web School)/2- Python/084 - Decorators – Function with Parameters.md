---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=ZVCPwfyAcBE&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=84
Author: "[[Alzero Wep School]]"
topic: "[[084 - Decorators – Function with Parameters]]"
---
> [!summary]-
> 

# <font color="#646a73">084 - Decorators – Function with Parameters</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
 # --------------------------------------------
# -- Decorators => Function With Parameters --
# --------------------------------------------

def myDecorator(func):  # Decorator

  def nestedFunc(num1, num2):  # Any Name Its Just For Decoration

    if num1 < 0 or num2 < 0:

      print("Beware One Of The Numbers Is Less Than Zero")

    func(num1, num2)  # Execute Function

  return nestedFunc  # Return All Data

def myDecoratorTwo(func):  # Decorator

  def nestedFunc(num1, num2):  # Any Name Its Just For Decoration

    print("Coming From Decorator Two")

    func(num1, num2)  # Execute Function

  return nestedFunc  # Return All Data

@myDecorator
@myDecoratorTwo

def calculate(n1, n2):

  print(n1 + n2)

calculate(-5, 90)
```
Output:
```
Beware One Of The Numbers Is Less Than Zero
Coming From Decorator Two
85
```