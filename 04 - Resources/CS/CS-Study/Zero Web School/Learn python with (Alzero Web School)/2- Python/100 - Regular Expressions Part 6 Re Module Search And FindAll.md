---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=UKA-3O7XwPs&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=100
Author: "[[Alzero Wep School]]"
topic: "[[100 - Regular Expressions Part 6 Re Module Search And FindAll]]"
---
> [!summary]-
> 

# <font color="#646a73">100 - Regular Expressions Part 6 Re Module Search And FindAll</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ---------------------------------------------------------
# -- Regular Expressions => Re Module Search And FindAll --
# ---------------------------------------------------------
# search()  => Search A String For A Match And Return A First Match Only
# findall() => Returns A List Of All Matches and Empty List if No Match
# ---------------------------------------------------------------------
# Email Pattern => [A-z0-9\.]+@[A-z0-9]+\.(com|net|org|info)
# ----------------------------------------------------------

import re

my_search = re.search(r"[A-Z]{2}", "OOsamaEElzero")

print(my_search)
print(my_search.span())
print(my_search.string)
print(my_search.group())

is_email = re.search(r"[A-z0-9\.]+@[A-z0-9]+\.(com|net)", "os@osama.com")

if is_email:

  print("This is A Valid Email")

  print(is_email.span())
  print(is_email.string)
  print(is_email.group())

else:

  print("This is Not A Valid Email")

email_input = input("Please Write Your Email: ")

search = re.findall(r"[A-z0-9\.]+@[A-z0-9]+\.com|net", email_input)

empty_list = []

if search != []:

  empty_list.append(search)

  print("Email Added")

else:

  print("Invalid Email")

for email in empty_list:

  print(email)
```
Output:
```

```
---
### My Input: 1
```cpp
import re

my_Search = re.search(r"[A-Z]{1}", "Medkouri-Zakaria")

print(my_Search)
print(my_Search.span())
print(my_Search.string)
print(my_Search.group())
```
Output:
```
my_Search = re.search(r"[A-z0-9\.]+@[A-z0-9]+\.(com|net)", Read_Email)
<re.Match object; span=(0, 1), match='M'>
(0, 1)
Medkouri-Zakaria
M
```
### My Input: 2
```cpp
import re

my_Search = re.search(r"[A-z0-9\.]+@[A-z0-9]+\.(com|net)", "Ziko.malawi_520@gmail.com")

  

if my_Search:

  

    print("Your email is true, And your information is: {my_Search}")

    print(f"Your index is {my_Search.span()}")

    print(my_Search.string)

    print(my_Search.group())

  

else:

  

    print("The email is invalide")
```
Output:
```
Your email is true, And your information is:
Your index is (0, 25)
Ziko.malawi_520@gmail.com
Ziko.malawi_520@gmail.com
```
### My Input: 3
```cpp
import re


Read_Email = None

  

while Read_Email is None:

  

    try:

  

        Read_Email = input("Enter your Email: ")

        my_Search = re.search(r"[A-z0-9\.]+@[A-z0-9]+\.(com|net)", Read_Email)

        print(my_Search)

        print(my_Search.span())

        print(my_Search.string)

        print(my_Search.group())

  
  
  

    except AttributeError:

  

        print("It's Invalide email, Please Enter A Valide Email.")

        Read_Email = None

    except:

        print("Error!, ReEnter Again.")

        Read_Email = None
```
Output:
```
Enter your Email: Ziko.malawi_520@gmail.com
<re.Match object; span=(0, 25), match='Ziko.malawi_520@gmail.com'>
(0, 25)
Ziko.malawi_520@gmail.com
Ziko.malawi_520@gmail.com
```
### My Input 4: Advanced.
```cpp
import re

def Read_AndCheckEmail(Read_Email):


    while Read_Email is None:

        try:

            Read_Email = input("Enter your Email: ")
            my_Search = re.search(r"[A-z0-9\.]+@[A-z0-9]+\.(com|net)", Read_Email)

            print(my_Search)
            print(my_Search.span())
            print(my_Search.string)
            print(my_Search.group())

        except AttributeError:

            print("It's Invalide email, Please Enter A Valide Email.")
            Read_Email = None

        except:

            print("Error!, ReEnter Again.")
            Read_Email = None
  

def main():

    Read_Email = None
    Read_AndCheckEmail(Read_Email)

if __name__ == "__main__":

    main()
```
Output:
```
Enter your Email: Ziko.malawi_520@gmail.com
<re.Match object; span=(0, 25), match='Ziko.malawi_520@gmail.com'>
(0, 25)
Ziko.malawi_520@gmail.com
Ziko.malawi_520@gmail.com
```
#### Input: Chat-GPT- Advance Code:
```python
import re

EMAIL_REGEX = r"^[A-Za-z0-9._]+@[A-Za-z0-9]+\.(com|net)$"

def read_and_check_email():
    while True:
        email = input("Enter your Email: ")

        if re.match(EMAIL_REGEX, email):
            return email
        else:
            print("Invalid email, try again.")


def main():
    email = read_and_check_email()
    print("Valid Email:", email)


if __name__ == "__main__":
    main()

```