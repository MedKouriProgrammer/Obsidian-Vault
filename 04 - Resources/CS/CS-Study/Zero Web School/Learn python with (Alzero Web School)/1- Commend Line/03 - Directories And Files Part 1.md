---
creation_date: 2025-10-02
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=ZxQ8rEvF7Ks&list=PLDoPjvoNmBAxzNO8ixW83Sf8FnLy_MkUT&index=3
Author: "[[Alzero Wep School]]"
Topics: "[[Directories And Files Part 1]]"
---
> [!summary]-
> 

# Directories And Files Part 1: How to control directories by using (cd, mkdir, ls, dir).
---
## Definition of change directories.
1. `cd `: (Change Directories) Used to change directories to arrive or switch in any folder.
2. `mkdir or md `: (Make Directory) Used to make new folder 📁, The (md) is just for Windows.
3. `ls,ls -1, ls -l, ls -lh `: (ls ⇾ List)-(ls -1 ⇾ Longitudinal list)-(ls -l ⇾ Size, Permission, Modification Date)-(ls -lh ⇾ Size can human understand), Used to show you the list of all the folders or only folder.
4. `dir `: () It’s also shown the list of folders without much information & it’s only for windows. 
### [[Commend]].
```cpp
------------------------------------(cd)--------------------------------------
// To take one step back to flder we use `cd .. `, And always click Tab.
C:\Users\ad
λ cd .. 

C:\Users
λ
______________

// To take one or more steps to front you should write the front direction.
C:\Users
λ cd ad\ 

C:\Users\ad
λ
______________

// Or to get back to the Root, Write `C:\ `, -> And write the folderName after using `cd ` if you want.
C:\Users\ad
λ C:\

C:\
λ
______________

// Now to change the disk (C:)->(G:) or to anydisk you have to write only the diskname like (G:).
 
C:\Users
λ G:

G:\Users\ad
λ

----------------------------------(mkdir)-------------------------------------
// If you wanna make new folder, you have to write `mkdir ` + FoldreName.
C:\Users\ad
λ mkdir MedFolder

C:\Users\ad\Medfolder
λ
______________

// If you wanna get one step back to make new folder you can use `mkdir ` + `..\ ` + new foldername
C:\Users\ad\Medfolder
λ mkdir ..\Goo

C:\Users\ad\Goo\Medfolder
λ
______________

// Or you wanna make new folder in another sourse foldre, You can just write `mkdir ` + pathname\~\~\ + foldername.

C:\Users\ad\Medfolder
λ mkdir C:\Tasks\BuyCoffe

C:\Tasks\BuyCoffe
λ

----------------------------------(ls||dir)-----------------------------------
// If you on Root or on any path and you want to show the list on any folder, You have to write `dir ` for windows or  `ls ` for (Cmder & Unix & Mac), Write `ls ` + pathname\~\~\

C:\Users\ad\Documents
λ ls C:\Users\ad\

C:\Users\ad
λ 
'3D Objects'/            'Menu Démarrer'@                                                                                ntuser.ini
 AppData/                'Mes documents'@                                                                                OneDrive/
'Application Data'@       Modèles@                                                                                       Pictures/
 Contacts/                Music/                                                                                         Recent@
 Cookies@                'My Drive'/                                                                                    'Saved Games'/
 Desktop/                'My Drive (zikofarawi935@gmail.com)'/                                                           Searches/
 Documents/               NTUSER.DAT                                                                                     SendTo@
 Downloads/               ntuser.dat.LOG1                                                                                source/
 Favorites/               ntuser.dat.LOG2                                                                                started
 IntelGraphicsProfiles/   NTUSER.DAT{204c14e5-b6fa-11ee-91f6-a884ecc77312}.TM.blf                                        Videos/
 Links/                   NTUSER.DAT{204c14e5-b6fa-11ee-91f6-a884ecc77312}.TMContainer00000000000000000001.regtrans-ms  "Voisinage d'impression"@
'Local Settings'@         NTUSER.DAT{204c14e5-b6fa-11ee-91f6-a884ecc77312}.TMContainer00000000000000000002.regtrans-ms  'Voisinage réseau'@>)](<C:\Users\ad\Documents
λ ls C:\Users\ad\
'3D Objects'/            'Menu Démarrer'@                                                                                ntuser.ini
 AppData/                'Mes documents'@                                                                                OneDrive/
'Application Data'@       Modèles@                                                                                       Pictures/
 Contacts/                Music/                                                                                         Recent@
 Cookies@                'My Drive'/                                                                                    'Saved Games'/
 Desktop/                'My Drive (zikofarawi935@gmail.com)'/                                                           Searches/
 Documents/               NTUSER.DAT                                                                                     SendTo@
 Downloads/               ntuser.dat.LOG1                                                                                source/
 Favorites/               ntuser.dat.LOG2                                                                                started
 IntelGraphicsProfiles/   NTUSER.DAT{204c14e5-b6fa-11ee-91f6-a884ecc77312}.TM.blf                                        Videos/
 Links/                   NTUSER.DAT{204c14e5-b6fa-11ee-91f6-a884ecc77312}.TMContainer00000000000000000001.regtrans-ms  "Voisinage d'impression"@
'Local Settings'@         NTUSER.DAT{204c14e5-b6fa-11ee-91f6-a884ecc77312}.TMContainer00000000000000000002.regtrans-ms  'Voisinage réseau'@>)
______________

// To show the folders list (longitudinal), write `ls -1 ` + pathname\~\~\

C:\Users\ad\Documents
λ ls -1 C:\Users\ad\

C:\Users\ad
λ '3D Objects'/
AppData/
'Application Data'@
Contacts/
Cookies@
Desktop/
Documents/
Downloads/
Favorites/
IntelGraphicsProfiles/
Links/
'Local Settings'@
'Menu Démarrer'@
'Mes documents'@
Modèles@
Music/
'My Drive'/
'My Drive (zikofarawi935@gmail.com)'/
NTUSER.DAT
ntuser.dat.LOG1
ntuser.dat.LOG2
NTUSER.DAT{204c14e5-b6fa-11ee-91f6-a884ecc77312}.TM.blf
NTUSER.DAT{204c14e5-b6fa-11ee-91f6-a884ecc77312}.TMContainer00000000000000000001.regtrans-ms
NTUSER.DAT{204c14e5-b6fa-11ee-91f6-a884ecc77312}.TMContainer00000000000000000002.regtrans-ms
ntuser.ini
OneDrive/
Pictures/
Recent@
'Saved Games'/
Searches/
SendTo@
source/
started
Videos/
"Voisinage d'impression"@
'Voisinage réseau'@>)
______________

// To show the folder list furthemore there (Size, Permission, Modification Date), Write `ls -l ` + pathname\~\~\

C:\Users\ad\Documents
λ ls -l C:\Users\ad\

C:\Users\ad
λ total 8906
drwxr-xr-x 1 ad 197121       0 Jan 19  2024 '3D Objects'/
drwxr-xr-x 1 ad 197121       0 Jan 19  2024  AppData/
lrwxrwxrwx 1 ad 197121      27 Jan 19  2024 'Application Data' -> /c/Users/ad/AppData/Roaming/
drwxr-xr-x 1 ad 197121       0 Jan 19  2024  Contacts/
lrwxrwxrwx 1 ad 197121      55 Jan 19  2024  Cookies -> /c/Users/ad/AppData/Local/Microsoft/Windows/INetCookies/
drwxr-xr-x 1 ad 197121       0 Sep  5 21:42  Desktop/
drwxr-xr-x 1 ad 197121       0 Oct  3 15:53  Documents/
drwxr-xr-x 1 ad 197121       0 Oct  3 13:55  Downloads/
drwxr-xr-x 1 ad 197121       0 Jan 19  2024  Favorites/
drwxr-xr-x 1 ad 197121       0 Oct  3 12:32  IntelGraphicsProfiles/
drwxr-xr-x 1 ad 197121       0 Jan 19  2024  Links/
lrwxrwxrwx 1 ad 197121      25 Jan 19  2024 'Local Settings' -> /c/Users/ad/AppData/Local/
lrwxrwxrwx 1 ad 197121      56 Jan 19  2024 'Menu Démarrer' -> '/c/Users/ad/AppData/Roaming/Microsoft/Windows/Start Menu'/
lrwxrwxrwx 1 ad 197121      21 Jan 19  2024 'Mes documents' -> /c/Users/ad/Documents/
lrwxrwxrwx 1 ad 197121      55 Jan 19  2024  Modèles -> /c/Users/ad/AppData/Roaming/Microsoft/Windows/Templates/
drwxr-xr-x 1 ad 197121       0 Jan 19  2024  Music/
drwxr-xr-x 1 ad 197121       0 Sep  5 21:52 'My Drive'/
drwxr-xr-x 1 ad 197121       0 Oct  3 15:59 'My Drive (zikofarawi935@gmail.com)'/
-rw-r--r-- 1 ad 197121 5505024 Oct  2 21:19  NTUSER.DAT
-rw-r--r-- 1 ad 197121 1388544 Jan 19  2024  ntuser.dat.LOG1
-rw-r--r-- 1 ad 197121 1048576 Jan 19  2024  ntuser.dat.LOG2
-rw-r--r-- 1 ad 197121   65536 Jan 19  2024  NTUSER.DAT{204c14e5-b6fa-11ee-91f6-a884ecc77312}.TM.blf
-rw-r--r-- 1 ad 197121  524288 Jan 19  2024  NTUSER.DAT{204c14e5-b6fa-11ee-91f6-a884ecc77312}.TMContainer00000000000000000001.regtrans-ms
-rw-r--r-- 1 ad 197121  524288 Jan 19  2024  NTUSER.DAT{204c14e5-b6fa-11ee-91f6-a884ecc77312}.TMContainer00000000000000000002.regtrans-ms
-rw-r--r-- 1 ad 197121      20 Jan 19  2024  ntuser.ini
drwxr-xr-x 1 ad 197121       0 Oct  3 12:33  OneDrive/
drwxr-xr-x 1 ad 197121       0 May  1 17:21  Pictures/
lrwxrwxrwx 1 ad 197121      52 Jan 19  2024  Recent -> /c/Users/ad/AppData/Roaming/Microsoft/Windows/Recent/
drwxr-xr-x 1 ad 197121       0 Jan 19  2024 'Saved Games'/
drwxr-xr-x 1 ad 197121       0 Jan 19  2024  Searches/
lrwxrwxrwx 1 ad 197121      52 Jan 19  2024  SendTo -> /c/Users/ad/AppData/Roaming/Microsoft/Windows/SendTo/
drwxr-xr-x 1 ad 197121       0 Jan 20  2025  source/
-rw-r--r-- 1 ad 197121      23 Oct  2 12:47  started
drwxr-xr-x 1 ad 197121       0 May 20 14:49  Videos/
lrwxrwxrwx 1 ad 197121      63 Jan 19  2024 "Voisinage d'impression" -> '/c/Users/ad/AppData/Roaming/Microsoft/Windows/Printer Shortcuts'/
lrwxrwxrwx 1 ad 197121      63 Jan 19  2024 'Voisinage réseau' -> '/c/Users/ad/AppData/Roaming/Microsoft/Windows/Network Shortcuts'/
______________

// Finnaly to show the folderlist with there (Size, Permission, Modification Date) furthemore the size you can understand it (Mb,Gb..), write `ls -lh ` + pathname\~\~\

C:\Users\ad\Documents
λ ls -lh C:\Users\ad

C:\Users\ad
λ total 8.0M
drwxr-xr-x 1 ad 197121    0 Jan 19  2024 '3D Objects'/
drwxr-xr-x 1 ad 197121    0 Jan 19  2024  AppData/
lrwxrwxrwx 1 ad 197121   27 Jan 19  2024 'Application Data' -> /c/Users/ad/AppData/Roaming/
drwxr-xr-x 1 ad 197121    0 Jan 19  2024  Contacts/
lrwxrwxrwx 1 ad 197121   55 Jan 19  2024  Cookies -> /c/Users/ad/AppData/Local/Microsoft/Windows/INetCookies/
drwxr-xr-x 1 ad 197121    0 Sep  5 21:42  Desktop/
drwxr-xr-x 1 ad 197121    0 Oct  3 15:53  Documents/
drwxr-xr-x 1 ad 197121    0 Oct  3 13:55  Downloads/
drwxr-xr-x 1 ad 197121    0 Jan 19  2024  Favorites/
drwxr-xr-x 1 ad 197121    0 Oct  3 12:32  IntelGraphicsProfiles/
drwxr-xr-x 1 ad 197121    0 Jan 19  2024  Links/
lrwxrwxrwx 1 ad 197121   25 Jan 19  2024 'Local Settings' -> /c/Users/ad/AppData/Local/
lrwxrwxrwx 1 ad 197121   56 Jan 19  2024 'Menu Démarrer' -> '/c/Users/ad/AppData/Roaming/Microsoft/Windows/Start Menu'/
lrwxrwxrwx 1 ad 197121   21 Jan 19  2024 'Mes documents' -> /c/Users/ad/Documents/
lrwxrwxrwx 1 ad 197121   55 Jan 19  2024  Modèles -> /c/Users/ad/AppData/Roaming/Microsoft/Windows/Templates/
drwxr-xr-x 1 ad 197121    0 Jan 19  2024  Music/
drwxr-xr-x 1 ad 197121    0 Sep  5 21:52 'My Drive'/
drwxr-xr-x 1 ad 197121    0 Oct  3 15:59 'My Drive (zikofarawi935@gmail.com)'/
-rw-r--r-- 1 ad 197121 5.3M Oct  2 21:19  NTUSER.DAT
-rw-r--r-- 1 ad 197121 544K Jan 19  2024  ntuser.dat.LOG1
-rw-r--r-- 1 ad 197121 1.0M Jan 19  2024  ntuser.dat.LOG2
-rw-r--r-- 1 ad 197121  64K Jan 19  2024  NTUSER.DAT{204c14e5-b6fa-11ee-91f6-a884ecc77312}.TM.blf
-rw-r--r-- 1 ad 197121 512K Jan 19  2024  NTUSER.DAT{204c14e5-b6fa-11ee-91f6-a884ecc77312}.TMContainer00000000000000000001.regtrans-ms
-rw-r--r-- 1 ad 197121 512K Jan 19  2024  NTUSER.DAT{204c14e5-b6fa-11ee-91f6-a884ecc77312}.TMContainer00000000000000000002.regtrans-ms
-rw-r--r-- 1 ad 197121   20 Jan 19  2024  ntuser.ini
drwxr-xr-x 1 ad 197121    0 Oct  3 12:33  OneDrive/
drwxr-xr-x 1 ad 197121    0 May  1 17:21  Pictures/
lrwxrwxrwx 1 ad 197121   52 Jan 19  2024  Recent -> /c/Users/ad/AppData/Roaming/Microsoft/Windows/Recent/
drwxr-xr-x 1 ad 197121    0 Jan 19  2024 'Saved Games'/
drwxr-xr-x 1 ad 197121    0 Jan 19  2024  Searches/
lrwxrwxrwx 1 ad 197121   52 Jan 19  2024  SendTo -> /c/Users/ad/AppData/Roaming/Microsoft/Windows/SendTo/
drwxr-xr-x 1 ad 197121    0 Jan 20  2025  source/
-rw-r--r-- 1 ad 197121   23 Oct  2 12:47  started
drwxr-xr-x 1 ad 197121    0 May 20 14:49  Videos/
lrwxrwxrwx 1 ad 197121   63 Jan 19  2024 "Voisinage d'impression" -> '/c/Users/ad/AppData/Roaming/Microsoft/Windows/Printer Shortcuts'/
lrwxrwxrwx 1 ad 197121   63 Jan 19  2024 'Voisinage réseau' -> '/c/Users/ad/AppData/Roaming/Microsoft/Windows/Network Shortcuts'/
______________

// `dir ` used like `ls ` but it's just for windows.

C:\Users\ad\Documents
λ dir C:\Users ad

C:\Users\ad
λ  Volume in drive C has no label.
 Volume Serial Number is 6C6F-2657

 Directory of C:\Users\ad

10/02/2025  06:57 AM    <DIR>          .
10/02/2025  06:57 AM    <DIR>          ..
04/15/2025  12:29 PM    <DIR>          .android
08/29/2025  01:04 AM    <DIR>          .chatgpt
01/10/2024  06:56 PM    <DIR>          .VirtualBox
10/02/2025  06:47 AM    <DIR>          .vscode
01/19/2024  06:50 PM    <DIR>          3D Objects
01/19/2024  06:50 PM    <DIR>          Contacts
09/05/2025  09:42 PM    <DIR>          Desktop
10/03/2025  03:53 PM    <DIR>          Documents
10/03/2025  01:55 PM    <DIR>          Downloads
01/19/2024  06:50 PM    <DIR>          Favorites
01/19/2024  06:50 PM    <DIR>          Links
01/19/2024  06:50 PM    <DIR>          Music
09/05/2025  09:52 PM    <DIR>          My Drive
10/03/2025  03:59 PM    <DIR>          My Drive (zikofarawi935@gmail.com)
10/03/2025  12:33 PM    <DIR>          OneDrive
05/01/2025  05:21 PM    <DIR>          Pictures
01/19/2024  06:50 PM    <DIR>          Saved Games
01/19/2024  06:50 PM    <DIR>          Searches
01/20/2025  02:18 AM    <DIR>          source
10/02/2025  12:47 PM                23 started
05/20/2025  02:49 PM    <DIR>          Videos
               1 File(s)             23 bytes
              22 Dir(s)  36,087,504,896 bytes free
------------------------------------------------------------------------------
```