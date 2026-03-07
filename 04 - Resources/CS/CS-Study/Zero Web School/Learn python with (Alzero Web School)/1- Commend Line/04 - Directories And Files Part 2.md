---
creation_date: 2025-10-04
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=I90afN1SgTA&list=PLDoPjvoNmBAxzNO8ixW83Sf8FnLy_MkUT&index=4
Author: "[[Alzero Wep School]]"
Topics: "[[Directories And Files Part 2]]"
---
> [!summary]-
> 

# 04 - Directories And Files Part 2: Controls directories
---
## Definition of this lesson: (Move, Rename, Copy, Remove).

Windows:
- `move `: Used to move any folder to any path, And rename folders & files.
- `rename `: Used to rename any folder.
Linux:
- `mv `: Used to move any folders, And also to rename the folders & files, You chose the way by the rules.
- `cp `: Used to copy the folder to a new folder or files in the same copy, Or copy folder to another one also by rules.
- `rm `: Used to remove any folders by rules.
Notes: 
- `cp `&`rm `: Has the same rules to handle with them, And this is the rules after write one of them.
1.  Option Meaning Usage: `cp `
``` Functional Option
-r or -R: Copies directories and contents recursively.
-i: Asks you before replacing existing files.
-f: Force: Force the copy and replaces files without asking.
-u: update: Copies only files newer than the source.
-v: verbose: Displays all files during copying.
```

2.  Option Meaning Usage: `rm `
``` Functional Option
-r Deletes folders with all their contents (recursive)
-f force Deletes without asking for confirmation
-i interactive Asks you before deleting each file
-v verbose Displays files during deletion
```

### [[Commend]]
```cpp
------------------------------------(mv)--------------------------------------
// To move folder into another folder write `mv ` + source folder + destination, Without ( \ ) between folders but in no probleme at the end of the folder.
C:\Users\ad\Documents\Cemder\MedDir
λ mv java ProgrammingLanguage\

C:\Users\ad\Documents\Cemder\MedDir
λ ls ProgrammingLanguage\
java/
_______________

// To take the folder into an other folder to one step back you should write `mv ` + pathname\~\~\ & source + " " + `. ` And remember only one dot in the end.
C:\Users\ad\Documents\Cemder\MedDir
λ mv ProgrammingLanguage\java .

C:\Users\ad\Documents\Cemder\MedDir
λ ls
C++/  Css/  Html/  java/  JavScript/  ProgrammingLanguage/
_______________

// To take the folder into folder to another folder you should write `mv ` + pathname\~\~\ & source + " "  + destination.

C:\Users\ad\Documents\Cemder\MedDir
λ mv ProgrammingLanguage\Java JavScript\

C:\Users\ad\Documents\Cemder\MedDir
λ ls JavScript\
Java/ 
_______________

// To rename the folder, You have chose the name it dosen't found in your path and write `mv ` + soucefile + " " + new namefale.

C:\Users\ad\Documents\Cemder\MedDir
λ mv C++ CPlus

C:\Users\ad\Documents\Cemder\MedDir
λ ls
CPlus/  Css/  Html/  JavScript/  ProgrammingLanguage/

_______________
// To rename the folder into a folder write `mv ` + pathname\~\~\ & sorcefolder + " " + path\ & new foldername.

C:\Users\ad\Documents\Cemder\MedDir
λ mv JavScript\Java JavScript\Coffe

C:\Users\ad\Documents\Cemder\MedDir
λ ls JavScript\
Coffe/

------------------------------------(cp)--------------------------------------
// To copy a folder to another folder you should write `cp -r ` + sourcefolder + new namefolder, without ( \ ).

C:\Users\ad\Documents\Cemder\MedDir
λ cp -r ProgrammingLanguage MohemmedAbuhedhoud

C:\Users\ad\Documents\Cemder\MedDir
λ ls
CPlus/  Css/  Html/  JavScript/  MohemmedAbuhedhoud/  ProgrammingLanguage/

_______________ 
// To copy the folder inside another folder write `cp -r ` + pathname\~\~\ & sourcefolder + path\ & new foldername.

C:\Users\ad\Documents\Cemder\MedDir
λ cp -r JavScript\Coffe JavScript\Coffe22

C:\Users\ad\Documents\Cemder\MedDir
λ ls JavScript\
Coffe/  Coffe22/

------------------------------------(rm)--------------------------------------
// To remove a folder we use `rm -r ` + sourcefolder.

C:\Users\ad\Documents\Cemder\MedDir
λ ls
CPlus/  Css/  Html/  JavScript/  MohemmedAbuhedhoud/  ProgrammingLanguage/

C:\Users\ad\Documents\Cemder\MedDir
λ rm -r Css\

C:\Users\ad\Documents\Cemder\MedDir
λ ls
CPlus/  Html/  JavScript/  MohemmedAbuhedhoud/  ProgrammingLanguage/

_______________
// To remove a folder into a folder we use `rm -r ` + pathname\~\~\ & sourcefolder.

C:\Users\ad\Documents\Cemder\MedDir
λ rm -r MohemmedAbuhedhoud\CPlus\

C:\Users\ad\Documents\Cemder\MedDir
λ ls
Html/  JavScript/  MohemmedAbuhedhoud/

C:\Users\ad\Documents\Cemder\MedDir
λ ls MohemmedAbuhedhoud\
 
C:\Users\ad\Documents\Cemder\MedDir
λ 
------------------------------------------------------------------------------
```