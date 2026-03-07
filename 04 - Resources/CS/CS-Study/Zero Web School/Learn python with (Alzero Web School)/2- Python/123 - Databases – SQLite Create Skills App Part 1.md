---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
topic: "[[123 - Databases – SQLite Create Skills App Part 1]]"
---
> [!summary]-
> 

# <font color="#646a73">123 - Databases – SQLite Create Skills App Part 1</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -----------------------------------------------------
# -- Databases => SQLite => Create Skills App Part 1 --
# -----------------------------------------------------

# Input Big Message
input_message = """
What Do You Want To Do ?
"s" => Show All Skills
"a" => Add New Skill
"d" => Delete A Skill
"u" => Update Skill Progress
"q" => Quit The App
Choose Option:
"""

# Input Option Choose
user_input = input(input_message).strip().lower()

# Command List
commands_list = ["s", "a", "d", "u", "q"]

# Define The Methods

def show_skills():

  print("Show Skills")

def add_skill():

  print("Add Skill")

def delete_skill():

  print("Delete Skill")

def update_skill():

  print("Update Skill Progress")

# Check If Command Is Exists
if user_input in commands_list:

  print(f"Command Found {user_input}")

  if user_input == "s":

    show_skills()

  elif user_input == "a":

    add_skill()

  elif user_input == "d":

    delete_skill()

  elif user_input == "u":

    update_skill()

  else:

    print("App Is Closed.")

else:

  print(f"Sorry This Command \"{user_input}\" Is Not Found")
```
Output:
```

```
---
#### My Input:
```python
import sqlite3

def ReadSkills_InDataBase():

  
    ExitChoise = 'N'
    DataBase = sqlite3.connect("app.db")
    csr = DataBase.cursor()

    input_message = """
    What Do You Want To Do ?
    "S" => Show All Skills
    "A" => Add New Skill
    "D" => Delete A Skill
    "Q" => Quit The App
    Choose Option:
    
    """

  

    while ExitChoise == 'N' or ExitChoise == "No":

        try:

            Commend_Choise = ['S', 'A', 'D', 'Q']
            UserChoise_Commend = input(input_message).strip().capitalize()

            if UserChoise_Commend in Commend_Choise:
                if UserChoise_Commend == 'S':
                    print(f"\nYour commend '{UserChoise_Commend}' will run....")

                    Result = csr.execute("SELECT * FROM users")
                    print(Result.fetchall())

                    ExitChoise = input("Do you wanna exit? ").strip().capitalize()

  
  
                elif UserChoise_Commend == 'A':

                    print(f"\nYour commend '{UserChoise_Commend}' will run....")

                    Replace_Name = input("Enter the Replace Name: ").strip().capitalize()

                    User_Id_A = int(input("Enter The User_Id: ").strip())
                    csr.execute(f"UPDATE users SET name = '{Replace_Name}' WHERE user_id = {User_Id_A}")

                    DataBase.commit()
                    csr.execute("SELECT * FROM users")                
                    print(csr.fetchall())

                    ExitChoise = input("Do you wanna exit? ").strip().capitalize()

  
                elif UserChoise_Commend == 'D':
                    print(f"\nYour commend '{UserChoise_Commend}' will run....")

  

                    User_Id_D = input("Enter the User_Id: ").strip()

  

                    csr.execute(f"DELETE FROM users WHERE user_id = '{User_Id_D}'")

                    DataBase.commit()

  

                    csr.execute("SELECT * FROM users")

                    print(csr.fetchall())

  

                    ExitChoise = input("Do you wanna exit? ").strip().capitalize()

  
  

                elif UserChoise_Commend == 'Q':

                    print(f"\nYour commend '{UserChoise_Commend}' will run....")

                    DataBase.commit()
                    DataBase.close()
                    print("Closing Succssefely")

                    ExitChoise = "Yes"

        except:

            if UserChoise_Commend not in Commend_Choise:
                print(f"Your commend \"{UserChoise_Commend}\" it's not found!")

  

def main():

    ReadSkills_InDataBase()


if __name__ == "__main__":

    main()
```
Output:
```

    What Do You Want To Do ?
    "S" => Show All Skills
    "A" => Add New Skill
    "D" => Delete A Skill
    "Q" => Quit The App
    Choose Option:
    a

Your commend 'A' will run....
Enter the Replace Name: Bandora
Enter The User_Id: 4
[('Ahmed', 1), ('Saad', 2), ('Brahim', 3), ('Bandora', 4)]
Do you wanna exit? n

    What Do You Want To Do ?
    "S" => Show All Skills
    "A" => Add New Skill
    "D" => Delete A Skill
    "Q" => Quit The App
    Choose Option:
    d

Your commend 'D' will run....
Enter the User_Id: 3
[('Ahmed', 1), ('Saad', 2), ('Bandora', 4)]
Do you wanna exit? n

    What Do You Want To Do ?
    "S" => Show All Skills
    "A" => Add New Skill
    "D" => Delete A Skill
    "Q" => Quit The App
    Choose Option:
    s

Your commend 'S' will run....
[('Ahmed', 1), ('Saad', 2), ('Bandora', 4)]
Do you wanna exit? n

    What Do You Want To Do ?
    "S" => Show All Skills
    "A" => Add New Skill
    "D" => Delete A Skill
    "Q" => Quit The App
    Choose Option:
    q

Your commend 'Q' will run....
Closing Succssefely
```