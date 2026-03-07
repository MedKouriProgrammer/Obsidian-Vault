---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
topic:
---
> [!summary]-
> 

# <font color="#646a73">061 - Function Packing, Unpacking Arguments Training’s</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -----------------------------------------------------
# -- Function Packing, Unpacking Arguments Trainings --
# -----------------------------------------------------

myTuple = ("Html", "CSS", "JS")

mySkills = {
  'Go': "80%",
  'Python': "50%",
  'MySQL': "80%"
}

def show_skills(name, *skills, **skillsWithProgres):

  print(f"Hello {name} \nSkills Without Progress Is: ")

  for skill in skills:

    print(f"- {skill}")

  print("\nSkills With Progress Is: ")

  for skill_key, skill_value in skillsWithProgres.items():

    print(f"- {skill_key} => {skill_value}")

show_skills("Osama", *myTuple, **mySkills)
```
Output:
```
Hello Osama
Skills Without Progress Is: 
- Html
- CSS
- JS

Skills With Progress Is:
- Go => 80%
- Python => 50%
- MySQL => 80%
```