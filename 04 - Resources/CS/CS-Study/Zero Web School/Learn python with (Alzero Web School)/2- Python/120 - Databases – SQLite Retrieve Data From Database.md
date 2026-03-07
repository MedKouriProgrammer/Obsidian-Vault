---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
topic: "[[120 - Databases – SQLite Retrieve Data From Database]]"
---
> [!summary]-
> 

# <font color="#646a73">120 - Databases – SQLite Retrieve Data From Database</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# --------------------------------------------------------
# -- Databases => SQLite => Retrieve Data From Database --
# --------------------------------------------------------
# - fetchone => returns a single record or None if no more rows are available.
# - fetchall => fetches all the rows of a query result. It returns all the rows
#               as a list of tuples. An empty list is returned if there is no record to fetch.
# - fetchmany(size) =>
# ------------------------------------------------------

# Import SQLite Module
import sqlite3

# Create Database And Connect
db = sqlite3.connect("app.db")

# Setting Up The Cursor
cr = db.cursor()

# Create The Tables and Fields
# cr.execute("create table if not exists users (user_id integer, name text)")
# cr.execute(
#     "create table if not exists skills (name text, progress integer, user_id integer)")

# Inserting Data
# cr.execute("insert into users(user_id, name) values(1, 'Ahmed')")
# cr.execute("insert into users(user_id, name) values(2, 'Sayed')")
# cr.execute("insert into users(user_id, name) values(3, 'Osama')")

# Fetch Data
cr.execute("select * from skills")

print(cr.fetchone())
print(cr.fetchone())
print(cr.fetchone())
print(cr.fetchone())

# print(cr.fetchall())

# print(cr.fetchmany(2))

# Save (Commit) Changes
db.commit()

# Close Database
db.close()
```
### My Input:
```python
import sqlite3

DataBase = sqlite3.connect("app.db")
csr = DataBase.cursor()


csr.execute("CREATE TABLE IF NOT EXISTS skills (name TEXT, progress INTEGER, user_id INTEGER)")
csr.execute("CREATE TABLE IF NOT EXISTS users (name TEXT, user_id INTEGER)")

  
My_List = ["Karim", "Mustafa", "Karib", "Fahd", "habib"]
  

for Key, Users in enumerate(My_List, start=1):
    csr.execute(f"INSERT INTO users VALUES('{Users}', {Key})")
    
  
print("---------------------------------------------------------------------")
  
csr.execute("SELECT * FROM users")

print(csr.fetchone())
print(csr.fetchone())
print(csr.fetchone())
print(csr.fetchone())
print(csr.fetchone())
print(csr.fetchone())
print(csr.fetchone())
  

print(csr.fetchall())
print(csr.fetchmany(4))

print("---------------------------------------------------------------------")

  
DataBase.commit()
DataBase.close()
```
Output:
```
---------------------------------------------------------------------
('Karim', 1)
('Mustafa', 2)
('Karib', 3)
('Fahd', 4)
('habib', 5)
None
None
[('Karim', 1), ('Mustafa', 2), ('Karib', 3), ('Fahd', 4), ('habib', 5)]
[('Karim', 1), ('Mustafa', 2), ('Karib', 3), ('Fahd', 4)]
---------------------------------------------------------------------
```