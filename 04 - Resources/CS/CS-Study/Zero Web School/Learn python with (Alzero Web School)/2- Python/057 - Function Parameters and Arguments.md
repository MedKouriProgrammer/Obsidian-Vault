---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=Izwd_n-Ufqo&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=56
Author: "[[Alzero Wep School]]"
topic: "[[057 - Function Parameters and Arguments]]"
---
> [!summary]-
> 

# <font color="#646a73">057 - Function Parameters and Arguments</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ---------------------------------------
# -- Function Parameters And Arguments --
# ---------------------------------------

# def                     => Function Keyword [Define]
# say_hello()             => Function Name
# name                    => Parameter
# print(f"Hello {name}")  => Task
# say_hello("Ahmed")      => Ahmed is The Argument

def SayHello(name1) :
    print(f"Your {name1}")
  

def Addition(num1, num2) :
    return num1 + num2


def Addition(num1, num2) :

    if type(num1) != int or type(num2) != int :
        return "Only Integral Number!"

    else:
        return num1 + num2


def PrintNames(Name1, Name2, Name3) :

    if type(Name1) != str or type(Name2) != str or type(Name3) != str :    
        print("Only String Character!")

    else:
       print(f"The first name is: {Name1}, And the seconds name is {Name2}, And the thurt name is {Name3}")


def main():

    a = "Welcom"
    SayHello(a)
    
    print(Addition(40, 50))
    print(Addition(60, 70))
    
    PrintNames("Medkouri", "Ahmed", "Alsayed")

if __name__ == "__main__":
    main()
```
Output:
```
Your Welcom
90
130
The first name is: Medkouri, And the seconds name is Ahmed, And the thurt name is Alsayed
```