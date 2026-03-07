---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
topic: "[[110 - OOP – Part 8 Inheritance]]"
---
> [!summary]-
> 

# <font color="#646a73">110 - OOP – Part 8 Inheritance</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ------------------------------------------------
# -- Object Oriented Programming => Inheritance --
# ------------------------------------------------

class Food:  # Base Class

  def __init__(self, name, price):

    self.name = name

    self.price = price

    print(f"{self.name} Is Created From Base Class")

  def eat(self):

    print("Eat Method From Base Class")

class Apple(Food):  # Derived Class

  def __init__(self, name, price, amount):

    # Food.__init__(self, name)  # Create Instance From Base Class

    super().__init__(name, price)

    self.amount = amount

    print(f"{self.name} Is Created From Derived Class And Price Is {self.price} And Amount Is {self.amount}")

  def get_from_tree(self):

      print("Get From Tree From Derived Class")

# food_one = Food("Pizza")
food_two = Apple("Pizza", 150, 500)
food_two.eat()
food_two.get_from_tree()
```
Output:
```
Pizza Is Created From Base Class
Pizza Is Created From Derived Class And Price Is 150 And Amount Is 500
Eat Method From Base Class
Get From Tree From Derived Class
```