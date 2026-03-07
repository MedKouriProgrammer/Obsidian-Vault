---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=zTLmupb3cKg&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=55
Author: "[[Alzero Wep School]]"
topic: "[](055%20-%20Loop%20Advanced%20Dictionary.md)"
---
> [!summary]-
> 

# <font color="#646a73">055 - Loop Advanced Dictionary</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
peoples = {

  "Osama": {

    "Html": "70%",

    "Css": "80%",

    "Js": "70%"

  },

  "Ahmed": {

    "Html": "90%",

    "Css": "80%",

    "Js": "90%"

  },

  "Sayed": {

    "Html": "70%",

    "Css": "60%",

    "Js": "90%"

  }

}

  

for MainKey, MainValue in peoples.items() :

    print("")

    print(f"The Name is: {MainKey}")

  

    for FirstKey, FirstValue in MainValue.items() :

        print(f"{FirstKey} => {FirstValue}")
```
Output:
```

The Name is: Osama
Html => 70%
Css => 80%
Js => 70%

The Name is: Ahmed
Html => 90%
Css => 80%
Js => 90%

The Name is: Sayed
Html => 70%
Css => 60%
Js => 90%
```