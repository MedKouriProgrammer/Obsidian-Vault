---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=5umR9zAidoc&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=90
Author: "[[Alzero Wep School]]"
topic: "[[092 - Exceptions Handling Advanced Example]]"
---
> [!summary]-
> 

# <font color="#646a73">092 - Exceptions Handling Advanced Example</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -----------------------------------
# --      Exceptions Handling      --
# -- Try | Except | Else | Finally --
# --       Advanced Example        --
# -----------------------------------

the_file = None

the_tries = 5

while the_tries > 0:

  try:  # Try To Open The File

    print("Enter The File Name With Absolute Path To Open")

    print(f"You Have {the_tries} Tries Left")

    print("Example: D:\Python\Files\yourfile.extension")

    file_name_and_path = input("File Name => : ").strip()

    the_file = open(file_name_and_path, 'r')

    print(the_file.read())

    break

  except FileNotFoundError:

    print("File Not Found Please Be Sure The Name is Valid")

    the_tries -= 1

  except:

    print("Error Happen")

  finally:

    if the_file is not None:

      the_file.close()

      print("File Closed.")

else:

  print("All Tries Is Done")
```
Output:
```
Enter The File Name With Absolute Path To Open
You Have 5 Tries Left
Example: D:\Python\Files\yourfile.extension   
File Name => : jhh
File Not Found Please Be Sure The Name is Valid
Enter The File Name With Absolute Path To Open
You Have 4 Tries Left
Example: D:\Python\Files\yourfile.extension
File Name => : jbbj
File Not Found Please Be Sure The Name is Valid
Enter The File Name With Absolute Path To Open
You Have 3 Tries Left
Example: D:\Python\Files\yourfile.extension
File Name => : C:\Users\ad\Documents\Cemder\MedDir\vs.coding.c.p\Ziko.txt
Welcom!
To my office
Dod
Dead
Five
Elzero
File Closed.
```
---
### Input:
```python
def PrintTheLines() :

    print("-" * 50)

    print("                OPEN ABSOLUTE PATH"               )

    print("-" * 50)

  

def Read_And_OpenFile(File_Name, Tries) :

  

    while Tries > 0:

  

        try:

  

            print(f"Enter The Absolute File Path, You have {Tries} tries.")

            print(r"For exemple => C:\Users\ad\Documents\Cemder\MedDir>")

  

            File_Name_Absolut = input("\nEnter your abs path => ")

            File_Name = open(File_Name_Absolut, "r")

  

            print(File_Name.read())

            break

  

        except FileNotFoundError:

  

            Tries -= 1

            print(f"\nWrong path, Renter the absolute path, your have {Tries} tries!\n")

        except:

            print("Error Happen")

  

        finally:

            if Tries == 0:

                print("All tries is done.")

File_Name = None
Tries = 5  

PrintTheLines()
Read_And_OpenFile(File_Name, Tries)
```
Output:
```
--------------------------------------------------
                OPEN ABSOLUTE PATH
-------------------------------------------------- 
Enter The Absolute File Path, You have 5 tries.    
For exemple => C:\Users\ad\Documents\Cemder\MedDir>

Enter your abs path => dhbch

Wrong path, Renter the absolute path, your have 4 tries!

Enter The Absolute File Path, You have 4 tries.
For exemple => C:\Users\ad\Documents\Cemder\MedDir>

Enter your abs path => jsdnbbc

Wrong path, Renter the absolute path, your have 3 tries!

Enter The Absolute File Path, You have 3 tries.
For exemple => C:\Users\ad\Documents\Cemder\MedDir>

Enter your abs path => C:\Users\ad\Documents\Cemder\MedDir\vs.coding.c.p\Ziko.txt
Welcom!
To my office
Dod
Dead
Five
Elzero
```