---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
topic: "[[121 - Databases – SQLite Training’s On Everything]]"
---
> [!summary]-
> 

# <font color="#646a73">121 - Databases – SQLite Training’s On Everything</font> 
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ---------------------------------------------------
# -- Databases => SQLite => Training On Everything --
# ---------------------------------------------------

import sqlite3

def get_all_data():

  try:

    # Connect To Database
    db = sqlite3.connect("app.db")
 
    # Print Success Message
    print("Connected To Database Successfully")

    # Setting Up The Cursor
    cr = db.cursor()

    # Fetch Data From Database
    cr.execute("select * from users")

    # Assign Data To Variable
    results = cr.fetchall()

    # Print Number Of Rows
    print(f"Database Has {len(results)} Rows.")

    # Printing Message
    print("Showing Data:")

    # Loop On Results
    for row in results:

      print(f"UserID => {row[0]},", end=" ")

      print(f"Username => {row[1]}")

  except sqlite3.Error as er:

    print(f"Error Reading Data {er}")

  finally:

    if (db):

      # Close Database Connection
      db.close()

      print("Connection To Database Is Closed")

get_all_data()
```
#### Input:
```python
# Connect to database - Print Success Message - Setting Up The Cursor - Fetch Data From Database - Assign Data To Variable -
# Print length Of Rows - Ask user if he wanna see data - Printing Message 'Showing Data:' - Loop On Results.

  

import sqlite3

def Read_DataBase():

    try:
        DataBase = sqlite3.connect("app.db")
        print("Connecting sucssefelly.", end="\n")

        csr = DataBase.cursor()

        csr.execute("SELECT * FROM users")
        Result = csr.fetchall()

        print(f"The length of the rows is: {len(Result)}")

        UserChoise = input("Do you wanna see the data of databse? ").strip().capitalize()

        if UserChoise == 'Y' or UserChoise == "Yes":
            print("\nShowing Data...")

            for Rows in Result:
                print(f"The User_ID => {Rows[1]}", end=" ")
                print(f"The UserName => {Rows[0]}")

        print(end="\n")


    except sqlite3.Error as ER:
    
        print(f"Error Reading Data: {ER}")


    finally:

        if DataBase:
            DataBase.close()
            print("Connection to database is closed.")

def main():

DB_Choise = input("Do you wanna connect to DataBase? ".strip().capitalize())

    if DB_Choise == 'Y' or DB_Choise == "Yes":
        Read_DataBase()

    else:
        print("As you want.")
        

if __name__ == "__main__":

    main()
```
Output: “Yes“
```
Do you wanna connect to DataBase? y
Connecting sucssefelly.

The length of the rows is: 5
Do you wanna see the data of databse? y

Showing Data...
The User_ID => 1 The UserName => Ahmed
The User_ID => 2 The UserName => Sayed
The User_ID => 3 The UserName => Mahmoud
The User_ID => 4 The UserName => Ali
The User_ID => 5 The UserName => Kamel

Connection to database is closed.
```
Output: “No“
```
As you want.
```
---
#### Input:
```python
# Ask user to opon database - Connect to database - Print Success Message - Setting Up The Cursor - Fetch Data From Database - Assign Data To Variable -

# Print length Of Rows - Ask user if he wanna see data - Printing Message 'Showing Data:' - Loop On Results - Ask user to close database.

  

import sqlite3


def Read_DataBase():

    UserChoise_CloseDB = "No"

    while UserChoise_CloseDB == "No":

        try:

            DataBase = sqlite3.connect("app.db")
            print("Connecting sucssefelly.",end="\n\n")

            csr = DataBase.cursor()

            csr.execute("SELECT * FROM users")
            Result = csr.fetchall()

            print(f"The length of the rows is: {len(Result)}")

            UserChoise = input("Do you wanna see the data of database? ").strip().capitalize()

            if UserChoise == 'Y' or UserChoise == "Yes":

                print("\nShowing Data...")

                for Rows in Result:

                    print(f"The User_ID => {Rows[1]}", end=" ")
                    print(f"The UserName => {Rows[0]}")

            print(end="\n")
            UserChoise_CloseDB = input("Do you want to close database? ").strip().capitalize()
            print(end="\n")

  

        except sqlite3.Error as ER:

            print(f"Error Reading Data: {ER}")

  

        finally:

            if DataBase:

                DataBase.close()
                print("Connection to database is closed.")

  
  

def main():

    UserChoise_OpenDB = input("Do you wanna connect to DataBase? ").strip().capitalize()

    if UserChoise_OpenDB == 'Y' or UserChoise_OpenDB == "Yes":
        Read_DataBase()

    else:
        print("As you want.")
          

if __name__ == "__main__":

    main()
```
Output: “Yes“
```
Do you wanna connect to DataBase? y
Connecting sucssefelly.

The length of the rows is: 5
Do you wanna see the data of databse? YES

Showing Data...
The User_ID => 1 The UserName => Ahmed
The User_ID => 2 The UserName => Sayed
The User_ID => 3 The UserName => Mahmoud
The User_ID => 4 The UserName => Ali
The User_ID => 5 The UserName => Kamel

Do you want to close database?                                            YES

Connection to database is closed.
```
Output:
```
Do you wanna connect to DataBase? y
Connecting sucssefelly.

The length of the rows is: 5
Do you wanna see the data of databse? y

Showing Data...
The User_ID => 1 The UserName => Ahmed
The User_ID => 2 The UserName => Sayed
The User_ID => 3 The UserName => Mahmoud
The User_ID => 4 The UserName => Ali
The User_ID => 5 The UserName => Kamel

Do you want to close database? no

Connection to database is closed.
Connecting sucssefelly.

The length of the rows is: 5
Do you wanna see the data of databse? no

Do you want to close database? yes

Connection to database is closed.
```
