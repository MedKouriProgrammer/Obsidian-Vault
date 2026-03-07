---
creation_date: 2025-10-06
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=5YUjk7qbpf0&list=PLDoPjvoNmBAxzNO8ixW83Sf8FnLy_MkUT&index=6
Author: "[[Alzero Wep School]]"
Topics: "[[Grep]]"
---
> [!summary]-
> 

# 06 - Grep With Examples: Global regular expression print.
---
## Definition of this lesson: (Find any content of file in anywhere).

Linux:
- `grep `: (Global regular expression print), Used to find any content of file by it filename.

1. Option Meaning Usage: `grep `
``` Help
-n Display line number grep -n "word" file.txt
-i Ignore case grep -i "word" file.txt
-c Count results only grep -c "word" file.txt
-r Search all folders grep -r "word" folder/
-v Reverse result (display lines that do not contain the word) grep -v "word" file.txt
```
### [[Commend]]
```cpp
-----------------------------------(grep)-------------------------------------
// If you have the contentname & the filename then you wanna see if the content is right on the filename write that `grep ` + "contentname" + filename.txt

C:\Users\ad\Documents\Cemder\MedDir
λ grep "USA" txt.file
"USA"

C:\Users\ad\Documents\Cemder\MedDir
λ grep "USA" txt.file2
______________

// If you wanna see the line number of the content, Just write `grep ` +  "contentname" + filename.txt

λ grep -n "USA" txt.file
1:"USA"
______________

// If you wanna see all the same content, Only write `grep -i ` + "contentname" + filename.txt

λ grep -i "python" txt.file2
"python" "Python" "PYTHON"
______________

// If you wanna see how many times the contentname is on the filename, Write `grip -c ` + "contentname" + filename.txt

C:\Users\ad\Documents\Cemder\MedDir
λ grep -c "python" txt.file2
1
______________

// If you don't have the filename but you have the contentname & you wanna check all the folders, Write `grep ` + "contentname" + `-r `

C:\Users\ad\Documents\Cemder\MedDir
λ grep "USA" -r
txt.file:"USA"
txt.file2:"USA"
______________

// If you have the contentname & you have the (FolderName), Write `grep ` + "contentname" + `-r ` + FolderName

C:\Users\ad\Documents\Cemder\MedDir
grep "HalfLive" -r JavScript\
JavScript\/file.txt3:"HalfLive"
______________

// If you on Root and you you haven't filename but you know the contentname, Write `grep ` + "contentname" + pathname\~\~\ 

C:\
λ grep "USA" -r C:\Users\ad\Documents\Cemder\MedDir\
C:\Users\ad\Documents\Cemder\MedDir\/txt.file:"USA"
C:\Users\ad\Documents\Cemder\MedDir\/txt.file2:"USA"
______________

// If you on Root and you have contentname & filename, Write 

C:\
λ grep "USA" C:\Users\ad\Documents\Cemder\MedDir\txt.file
"USA"
------------------------------------------------------------------------------
```
