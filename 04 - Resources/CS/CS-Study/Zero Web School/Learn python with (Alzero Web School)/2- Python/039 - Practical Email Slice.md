---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=jQVMF7kEzvI&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=39
Author: "[[Alzero Wep School]]"
topic: "[[039 - Practical Email Slice]]"
---
> [!summary]-
> 

# <font color="#646a73">039 - Practical Email Slice</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ---------------------------
# -- Practical Slice Email --
# ---------------------------

theName = input('What\'s Your Name ? ').strip().capitalize()
theEmail = input('What\'s Your Email ? ').strip()

theUsername = theEmail[:theEmail.index("@")]
theWebsite = theEmail[theEmail.index("@") + 1:]

print(f"\nHello {theName} Your Email Is {theEmail}")
print(f"Your Username Is {theUsername} \nYour Website Is {theWebsite}")

# email = "Osama@elzero.org"
# print(email[:email.index("@")])
```
Output:
```
What's Your Name ? Zakaria
What's Your Email ? Ziko@Medkouri.com

Hello Zakaria Your Email Is Ziko@Medkouri.com
Your Username Is Ziko
Your Website Is Medkouri.com
```