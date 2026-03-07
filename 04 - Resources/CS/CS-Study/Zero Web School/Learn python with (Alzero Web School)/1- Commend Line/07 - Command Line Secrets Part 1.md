---
creation_date: 2025-10-07
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
Topics: "[[Command Line Secrets Part 1]]"
---
> [!summary]-
> 

# 07 - Command Line Secrets Part 1
---
## Definition of this lesson: (Show type of filename, Create easy file or update it, show the manual of Commend, See all path).

Windows:
- `commend /? `: To see the manual of commend on Windows, And also it’s on Linux but in other syntax.
- `ctrl c `: Is to interrupt or cancel the process on Windows & Linux.
- `osk `: (on-Screen Keyboard).
Linux:
- `file `: (file type command) To see the type of filename, But the filename it should have content, Because It is not related to the extension.
- `touch `: (update the access and modification time of a file), Used for many things, Like create a new file without a content, Update the files like modification time & access time or specific time ⌚, Or update the time of all files (coming soon).
- `man {commend} `: (manual) Used to see the manual of commends.
- `{commend} --help `: Gives you the uses of the command.
- `ctrl c `: Is to interrupt or cancel the process.
- `tree `: Used to show you all path.

### [[Commend]]
```cpp
-----------------------------------(file)-------------------------------------
// To see the type of the file you have to write `file ` + filenae.txt

C:\Users\ad\Documents\Cemder\MedDir
λ file file.txt
file.txt: ASCII text, with CRLF line terminators

C:\Users\ad\Documents\Cemder\MedDir
λ
______________

// To see the type of two or more files write `file ` + filename.txt & filename.txt

C:\Users\ad\Documents\Cemder\MedDir
λ file file.txt file.txt2
file.txt:  ASCII text, with CRLF line terminators
file.txt2: ASCII text, with CRLF line terminators

C:\Users\ad\Documents\Cemder\MedDir
λ
______________

// If you are on Root and you wanna see the type of file write `file ` + path\~\~\ & filename.txt

C:\
λ file Users\ad\Documents\Cemder\MedDir\file.txt
Users\ad\Documents\Cemder\MedDir\file.txt: ASCII text, with CRLF line terminators

C:\
λ
----------------------------------(touch)-------------------------------------
// To creat an easy file write `touch ` + new filename.txt
// if you wanna more just write `touch ` + new filename.txt new filename.txt

C:\Users\ad\Documents\Cemder\MedDir
λ touch file.txt11 file.txt22

C:\Users\ad\Documents\Cemder\MedDir
λ ls
file.txt11  file.txt22  index.html  JavaScript/
______________

// To update modification & access time ⌚ of your file, Only write `touch ` + filename.txt

C:\Users\ad\Documents\Cemder\MedDir
λ touch file.txt11
______________

// To update the file to an specific time ⌚, Only write `touch -t ` + YearMonthDayTime + filename.txt

C:\Users\ad\Documents\Cemder\MedDir
λ touch -t 202410071230 file.txt22
______________

// To Copy a file and past it to another file write `touch -r ` + old filename.txt & new filename.txt

C:\Users\ad\Documents\Cemder\MedDir
λ touch -r file.txt11 file.txt22
-----------------------------------(tree)-------------------------------------

// To show all folders pathlist write `tree -a ` 
// If you write only `tree ` you'll see it in best shape.

C:\Users\ad\Documents\Cemder\MedDir
λ tree /a
Folder PATH listing
Volume serial number is C0000100 6C6F:2657
C:.
\---JavaScript
    +---Coffe
    |   \---CCC
    \---Coffe22
        \---CCC

C:\Users\ad\Documents\Cemder\MedDir
λ
______________

// To show all folders & files pathlist, only write `tree -f `

λ tree /f
Folder PATH listing
Volume serial number is C0000100 6C6F:2657
C:.
│   file.txt11
│   file.txt12
│   file.txt22
│   index.html
│
└───JavaScript
    │   File.txt
    │   file.txt3
    │
    ├───Coffe
    │   └───CCC
    └───Coffe22
        └───CCC
______________

// If you on Root and you wanna show all pathlist, Write `tree `  & `/a || /f optinal`

// The pathList is very long.
------------------------------------------------------------------------------
```