---
creation_date: 2026-03-07
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=N7qWNQxFq90
Author: "[[Yehia Tech]]"
---
> [!summary]-
> 

# <font color="#646a73">Learn Git & GitHub</font>
---
### <font color="#ffff00">Git Explaining:</font>
![[Pasted image 20260307151330.png]]
-  <font color="#00b0f0">Note: Commit it’s the files version, That’s mean every modifying on files it’s been saved on Local Repository (Your device), You can then make a connection with Remote Repository (GitHub …) to share with your public or just for yourself.</font>
---
### <font color="#ffff00">Download & Make A Local Repository & Deal With it:</font>
1. <font color="#de7802">Download Git On Arch Linux:</font>

```
sudo pacman -S git
```

2. <font color="#de7802">Create Repository files to your file project:</font>

- go to project path and write on terminal
```
git init
```

3. <font color="#de7802">Complete Configuration Like Username & Email:</font>

- on the same path write
```
git config user.name "MedKouri Programmer"
git config user.email "medkouriprogrammer@gmail.com"
```
- Note: It prefers to write an email that will you connecting with GitHub or if you work with a company enter the email of this company.
---
### <font color="#ffff00">Git Basic Commends:</font>
1. <font color="#de7802">Explaining U word:</font>
![[Pasted image 20260307155742.png]]
- <font color="#00b0f0">Note: This word means this Local Repository it haven’t any tracking, that’s mean if i modifying or delete this project you don’t have the old version.</font>
---
1. <font color="#de7802">To save the modification you have to make this file into commit (like the versions) by commands line.</font>

- if you wanna check out if this file it into commit write into the vs.code terminal:
```cpp
My_Project master ? ✗ git status <-
On branch master

No commits yet  // like you see no commits yet.

Untracked files:  // he see the files but it's Untracked files.  
  (use "git add <file>..." to include in what will be committed)
        .vscode/    0           Clients.txt My-Library/ ccoc        ccoc.cpp    file        file.cpp

nothing added to commit but untracked files present (use "git add" to track)
```

- Now we have to make this file into staging zone to let this file ready to go into the commit.
```
git add file.cpp
```
- To check out:
```cpp
My_Project master ? ❯ git status
On branch master

No commits yet  

Changes to be committed:  // Now this file is committed, That's mean is ready to get into the commit. 
  (use "git rm --cached <file>..." to unstage)
        new file:   file.cpp

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        .vscode/    0           Clients.txt My-Library/ ccoc        ccoc.cpp    file
```
![[Pasted image 20260307162423.png]]

- <font color="#00b0f0">Note: on vs.code sidebar: the word is ‘A‘ instead ‘U‘.</font> 


- Now after insert the file in staging zone we have one final Commend to make it into a commit:
```
git commit -m "Add new file to commit file.cpp" // You have to write one Message of what you're doing, to restore it later and see why.
```
- And if you modified the file like you write anything you will in sidebar ‘M‘ word.
![[Pasted image 20260307164030.png]]

- Note: This modification it’s not saved that’s why you have to save it to commit and give it the message of modification.

- If you want to see the hash commit on the file write:
```cpp
git log -v // <-

commit 9ff49390832a4c7d84db2c4e30c6677fd729d529 (HEAD -> master)
Author: MedKouri Programmer <medkouriprogrammer@gmail.com>
Date:   Sat Mar 7 16:33:04 2026 +0000

    Add new file to commit file.cpp
```

- To Save the modification again:
```
git add file.cpp
```

```cpp
git commit -m "Add new Line to commit file.cpp" // <-

[master 9ffd258] Add new Line to commit file.cpp
 1 file changed, 1 insertion(+), 1 deletion(-)
```

- If you write git log -v, You will see all modification of file:
```cpp
git log -v  // <- 

commit 9ffd25806ab50df516b517891e653c9b47520ac8 (HEAD -> master) // The HEAD is the poiter and HEAD is like CWD.
Author: MedKouri Programmer <medkouriprogrammer@gmail.com>
Date:   Sat Mar 7 16:55:42 2026 +0000

    Add new Line to commit file.cpp

commit 9ff49390832a4c7d84db2c4e30c6677fd729d529
Author: MedKouri Programmer <medkouriprogrammer@gmail.com>
Date:   Sat Mar 7 16:33:04 2026 +0000

    Add new file to commit file.cpp
```

- If you wanna return to the old specific modification write:
```
git checkout 9ffd25806ab50df516b517891e653c9b47520ac8  // Commit hash.
```
- If you wanna return to the master modification write:
```
git checkout master 
```
---

### <font color="#ffff00">Vs.Code GIT GUI:</font>
![[Pasted image 20260307172307.png]]
![[Pasted image 20260307172057.png]]

---
