---
Tags: Authors👤
created: 2023-03-17T19:04
updated: 2024-06-08T22:29
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