---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
topic: "[[118 - Databases – SQLite Create Database And Connect]]"
---
> [!summary]-
> 

# <font color="#646a73">118 - Databases – SQLite Create Database And Connect</font> 
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# --------------------------------------------------------
# -- Databases => SQLite => Create Database And Connect --
# --------------------------------------------------------
# - Connect
# - Execute
# - Close
# --------------------------------------------------

# Import SQLite Module
import sqlite3

# Create Database And Connect
db = sqlite3.connect("app.db")

# Create The Tables and Fields
db.execute(
    "create table if not exists skills (name text, progress integer, user_id integer)")

# Close Database
db.close()
```
Output:
```

```