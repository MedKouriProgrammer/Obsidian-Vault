---
creation_date: 2025-10-05
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=FT0ls_6iGLw&list=PLDoPjvoNmBAxzNO8ixW83Sf8FnLy_MkUT&index=6
Author: "[[Alzero Wep School]]"
Topics: "[[cat & Echo]]"
---
> [!summary]-
> 

# 05 - Cat And Echo: Controls directories.
---
## Definition of this lesson: (Create files, Show there contents, Copy files).

Windows:
- `echo `: Is on Windows & Linux and his function is created new file.
- `type `: Is on Linux with the name `cat `, And it used to show the content of files.
Linux:
- `echo `: Used to create a new file, Or insert the content of a file into a file.
- `cat `: Used to show the content of files, And make copy of the content of the file and past their content into a file.
### [[Commend]]
```cpp
-----------------------------------(echo)-------------------------------------
// To make new file and insert into it text, you need to write `echo ` + " textname " + > + file.txt, And remember the file name into "" don't forget it.

C:\Users\ad\Documents\Cemder\MedDir
λ echo "Css" > File.txt

C:\Users\ad\Documents\Cemder\MedDir
λ ls
File.txt  JavScript/  MohemmedAbuhedhoud/

C:\Users\ad\Documents\Cemder\MedDir
λ cat File.txt
"Css"
_______________

// To make new text and insert into the newfile or oldfile, You need to write `echo ` + " textname " + >> + sorcefile, the only deffirent is `>>` to take the text next to old texts.

C:\Users\ad\Documents\Cemder\MedDir
λ echo "Hat" >> File.txt

C:\Users\ad\Documents\Cemder\MedDir
λ cat File.txt
"Css"
"Hat"
_______________

// To creat file insert alot of folders, I have to write `echo ` + " textname " + > || >> + pathname\~\~\ & destinationfile, (> || >> is optional).

C:\
λ echo "Blackside" >> Users\ad\Documents\Cemder\MedDir\File.txt

C:\
λ cat Users\ad\Documents\Cemder\MedDir\File.txt
"Css"
"Hat"
"Blackside"
------------------------------------(cat)-------------------------------------
// To show the contents of file you have to write `cat ` + filename.txt.

C:\Users\ad\Documents\Cemder\MedDir
λ cat File.txt
"Css"
"Hat"
"Blackside"
_______________

// To show the contents of file insert into a lot of folders you have to write `cat ` + pathname\~\~\ & destinationfile.txt

C:\
λ cat Users\ad\Documents\Cemder\MedDir\File.txt
"Css"
"Hat"
"Blackside"
_______________

// To make copy your source file and past it in a new or oldfile, You have to write `cat ` + sourcefile.txt + " > || >> " + destinationfile.txt , One `> ` past Rediction, But Two `>> ` past Append.

C:\Users\ad\Documents\Cemder\MedDir
λ cat File.txt File.txt2
"Css"
"Hat"
"Blackside"
cat: File.txt2: No such file or directory
______
C:\Users\ad\Documents\Cemder\MedDir
λ cat File.txt > File.txt2
______
C:\Users\ad\Documents\Cemder\MedDir
λ cat File.txt2
"Css"
"Hat"
"Blackside"
------------------------------------------------------------------------------
```
### Note: To show all contents of all files without a specific file, Just write `cat * `.