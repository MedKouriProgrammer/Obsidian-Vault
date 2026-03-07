---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=zFVdMyr6CIo&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=63
Author: "[[Alzero Wep School]]"
topic: "[[063 - Function Recursion]]"
---
> [!summary]-
> 

# <font color="#646a73">063 - Function Recursion</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python  
# ------------------------
# -- Function Recursion --
# ------------------------
# ---------------------------------------------------------------------
# -- To Understand Recursion, You Need to First Understand Recursion --
# ---------------------------------------------------------------------
# Test Word [ WWWoooorrrldd ] # print(x[1:])

  

def cleanWord(word):

  if len(word) == 1:
    return word

   print(f"Print Start Function {word}")

  if word[0] == word[1]:

   print(f"Print Before Condition {word}")

  return cleanWord(word[1:])

     print(f"Print Before Return {word}")

  return word[0] + cleanWord(word[1:])

 # Stash [ World ]

  
  

def main():

  print(cleanWord("WWWoooorrrldd"))

if __name__ == "__main__":

    main()
```
Output:
```
Print Start Function WWWoooorrrldd
Print Before Condition WWWoooorrrldd
Print Start Function WWoooorrrldd   
Print Before Condition WWoooorrrldd 
Print Start Function Woooorrrldd    
Print Before Return Woooorrrldd     
Print Start Function oooorrrldd     
Print Before Condition oooorrrldd   
Print Start Function ooorrrldd      
Print Before Condition ooorrrldd    
Print Start Function oorrrldd       
Print Before Condition oorrrldd     
Print Start Function orrrldd        
Print Before Return orrrldd
Print Start Function rrrldd
Print Before Condition rrrldd       
Print Start Function rrldd
Print Before Condition rrldd        
Print Start Function rldd
Print Before Return rldd
Print Start Function ldd
Print Before Return ldd
Print Start Function dd
Print Before Condition dd
World
```