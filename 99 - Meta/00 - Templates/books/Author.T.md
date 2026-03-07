---
Tags: Authors👤
---
# Author
---
- 
# List Of Books
---
```dataview
table without id 
("![cover|80](" + Cover + ")") as "Books",
file.link as "Title",
Author,
Category
from "02 AREAS/02 EDUCATION/Library/books"
where contains(Author, "<")
```