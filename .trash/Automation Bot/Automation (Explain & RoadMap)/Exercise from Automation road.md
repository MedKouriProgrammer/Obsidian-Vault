---
creation_date: 2025-12-21
tags:
  - Resources/Articles
---
> [!summary]-
> 

# The place of exercises:
---
## Exercise 1: #Probleme_1
### Input: Old solution.
```python
import os
import shutil
import schedule
import datetime, time

def RunAutomation():
    MainFolder = "Automation"
    Folders_Insert_MainFolder = ["source_files", "organized", "backup"]
    Files_Insert_Source_Files = ["photo1.jpg", "song.mp4", "doc.pdf", "notes.txt", "setup.exe", "cat.png", "video.avi"]
    Folders_Insert_OrganizedFolder = ["Images", "Videos", "Documents", "Others"]

    if len(MainFolder) == 10:
        shutil.rmtree(MainFolder)

    os.makedirs(MainFolder, exist_ok=True)
    # os.makedirs(os.path.join("Automation", "source_file\ile.txt"), exist_ok=True)

    for Insert in Folders_Insert_MainFolder:
        os.makedirs(os.path.join(MainFolder, Insert), exist_ok=True)

    File_Path1 = os.path.join(MainFolder, "source_files")

    for File in Files_Insert_Source_Files:
        Files = os.path.join(File_Path1, File)
        open(Files, "w+").close()

    Folder_Path2 = os.path.join(MainFolder, "organized")

    for File_Name in Folders_Insert_OrganizedFolder:
        Folder = os.makedirs(os.path.join(Folder_Path2, File_Name), exist_ok=True)

    # File_Remove = os.path.join(MainFolder, "organized", "Nee.txt")

    # os.remove(File_Remove)

    # MyFolder = os.path.join("Automation", "organized", ThirtFiles_InsertSecondFolders)

    # with open(MyFolder, "w") as F:
    #     F.write("Hell")


    while len(os.listdir(File_Path1)) == 7:
                
        for SourceFile in Files_Insert_Source_Files:
                
            src = os.path.join(File_Path1, SourceFile)

            if SourceFile.lower().endswith((".jpg", ".png")):
                shutil.move(src, os.path.join(Folder_Path2, "Images"))

            elif SourceFile.lower().endswith((".mp4", ".avi")):
                shutil.move(src, os.path.join(Folder_Path2, "Videos"))
                
            elif SourceFile.lower().endswith((".pdf", ".txt")):
                shutil.move(src, os.path.join(Folder_Path2, "Documents"))
                
            else:
                shutil.move(src, os.path.join(Folder_Path2, "Others"))


    datenow = "backup_" + datetime.datetime.now().strftime("%Y-%m-%d_%H-%M-%S")

    Folder_Path3 = os.path.join(MainFolder, "backup")
    Folder_Path4 = os.path.join(Folder_Path3, datenow)

    shutil.copytree(Folder_Path2, Folder_Path4)



    File_Log = os.path.join(MainFolder, "Automation.log")

    with open(File_Log, "a") as Log:
        Log.write(f"[{time.strftime("%H:%M:%H")}] Moved file photo1.jpg to Images\n")    
        Log.write(f"[{time.strftime("%H:%M:%H")}] Backup created successfully")
        Log.close()


    # os.rmdir("Automation")
    # shutil.rmtree("Automation")

    # MyFolderCreated = open(r"C:\Users\ad\Documents\Cemder\MedDir\Automation\source_files\organized\Images.txt", "r")
    # print(MyFolderCreated.read())


def main():
   
    Running = True

    schedule.every(1).minute.do(RunAutomation)

    while Running:
        schedule.run_pending()
        time.sleep(1)

        AskUser = input("Do you want close it (y/n): ").capitalize()

        if AskUser == 'Y' or AskUser == "Yes":
            Running = False


if __name__ == "__main__":
    main()

```
### Input: My improvement code.
```python
import os
import shutil
import schedule
import datetime, time

def CreateMainFolder(MainFolder):
    if len(MainFolder) == 10:
        shutil.rmtree(MainFolder)
    
    os.makedirs(MainFolder, exist_ok=True)        


def CreateFolders_Insert_MainFolder(MainFolder, Folders_Insert_MainFolder): 
    for folder in Folders_Insert_MainFolder:
        os.makedirs(os.path.join(MainFolder, folder), exist_ok=True)

def CreateFiles_Insert_Source_Files(SourceFilesPath, Files_Insert_Source_Files): 
    for file in Files_Insert_Source_Files:
        FilesCreated = os.path.join(SourceFilesPath, file)
        open(FilesCreated, "w").close()

def CreateFolders_Insert_OrganizedFolder(OrganizedFolderPath, Folders_Insert_OrganizedFolder): 
    for Folder in Folders_Insert_OrganizedFolder:
        os.makedirs(os.path.join(OrganizedFolderPath, Folder), exist_ok=True)
        
def Move_SourceFiles_To_OrganizedFolder(Files_Insert_Source_Files, SourceFilesPath, OrganizedFolderPath):
    while len(os.listdir(SourceFilesPath)) == 7:
        for SourceFile in Files_Insert_Source_Files:
            src = os.path.join(SourceFilesPath, SourceFile)
            
            if SourceFile.lower().endswith((".jpg", ".png")):
                shutil.move(src, os.path.join(OrganizedFolderPath, "Images"))

            elif SourceFile.lower().endswith((".mp4", ".avi")):
                shutil.move(src, os.path.join(OrganizedFolderPath, "Videos"))
                
            elif SourceFile.lower().endswith((".pdf", ".txt")):
                shutil.move(src, os.path.join(OrganizedFolderPath, "Documents"))
                
            else:
                shutil.move(src, os.path.join(OrganizedFolderPath, "Others"))

def CopyOrganizedFiles_To_NewBackupFolder(MainFolder, OrganizedFolderPath):
    MyTime = "BackUp_" + datetime.datetime.now().strftime("%Y-%m-%d__%H-%M-%S") 
    DestinationFolder = os.path.join(MainFolder, "backup")
    DestinationFolder_WithTime = os.path.join(DestinationFolder, MyTime)
    shutil.copytree(OrganizedFolderPath, DestinationFolder_WithTime)

def CreateLogging_Log(MainFolder):
    Name_Log = "Automation.Log"
    File_Log = os.path.join(MainFolder, Name_Log) 
    with open(File_Log, "a+") as AL:
        AL.write(f"{time.strftime("%H:%M:%S")}, Moved file photo1.jpg to Images") 
        AL.write(f"{time.strftime("%H:%M:%S")}, Backup created successfully")

def RunAutomationScripte():
    MainFolder = "Automation"
    Folders_Insert_MainFolder = ["source_files", "organized", "backup"]
    Files_Insert_Source_Files = ["photo1.jpg", "song.mp4", "doc.pdf", "notes.txt", "setup.exe", "cat.png", "video.avi"]
    Folders_Insert_OrganizedFolder = ["Images", "Videos", "Documents", "Others"]

    SourceFilesPath = os.path.join(MainFolder, "source_files")
    OrganizedFolderPath=os.path.join(MainFolder, "organized")

    CreateMainFolder(MainFolder)
    CreateFolders_Insert_MainFolder(MainFolder, Folders_Insert_MainFolder)
    CreateFiles_Insert_Source_Files(SourceFilesPath, Files_Insert_Source_Files)
    CreateFolders_Insert_OrganizedFolder(OrganizedFolderPath, Folders_Insert_OrganizedFolder)
    Move_SourceFiles_To_OrganizedFolder(Files_Insert_Source_Files, SourceFilesPath, OrganizedFolderPath)
    CopyOrganizedFiles_To_NewBackupFolder(MainFolder, OrganizedFolderPath)
    CreateLogging_Log(MainFolder)

def RunScript_Withschedule():
    Running = True
    schedule.every(1).minute.do(RunAutomationScripte)

    while Running:
        schedule.run_pending()
        time.sleep(1)
        AskUser = input("Do you want to stop script (y/n): ").lower()
        if AskUser == "y" or AskUser == "yes":
            Running = False

def main():
    RunScript_Withschedule()

if __name__ == "__main__":
    main()


```
---
### Input: Improvement code with (ChatGPT)
```python
import os
import shutil
import schedule
import datetime, time

def create_main_folder(MainFolder):
    if len(MainFolder) == 10:
        shutil.rmtree(MainFolder)
    os.makedirs(MainFolder, exist_ok=True)

def create_subfolders(MainFolder, Folders_Insert_MainFolder):
    for Insert in Folders_Insert_MainFolder:
        os.makedirs(os.path.join(MainFolder, Insert), exist_ok=True)

def create_files(File_Path1, Files_Insert_Source_Files):
    for File in Files_Insert_Source_Files:
        Files = os.path.join(File_Path1, File)
        open(Files, "w+").close()

def create_organized_folders(Folder_Path2, Folders_Insert_OrganizedFolder):
    for File_Name in Folders_Insert_OrganizedFolder:
        Folder = os.makedirs(os.path.join(Folder_Path2, File_Name), exist_ok=True)

def move_files(File_Path1, Files_Insert_Source_Files, Folder_Path2):
    while len(os.listdir(File_Path1)) == 7:
        for SourceFile in Files_Insert_Source_Files:
            src = os.path.join(File_Path1, SourceFile)
            if SourceFile.lower().endswith((".jpg", ".png")):
                shutil.move(src, os.path.join(Folder_Path2, "Images"))
            elif SourceFile.lower().endswith((".mp4", ".avi")):
                shutil.move(src, os.path.join(Folder_Path2, "Videos"))
            elif SourceFile.lower().endswith((".pdf", ".txt")):
                shutil.move(src, os.path.join(Folder_Path2, "Documents"))
            else:
                shutil.move(src, os.path.join(Folder_Path2, "Others"))

def create_backup(MainFolder, Folder_Path2):
    datenow = "backup_" + datetime.datetime.now().strftime("%Y-%m-%d_%H-%M-%S")
    Folder_Path3 = os.path.join(MainFolder, "backup")
    Folder_Path4 = os.path.join(Folder_Path3, datenow)
    shutil.copytree(Folder_Path2, Folder_Path4)

def write_log(MainFolder):
    File_Log = os.path.join(MainFolder, "Automation.log")
    with open(File_Log, "a") as Log:
        Log.write(f"[{time.strftime("%H:%M:%H")}] Moved file photo1.jpg to Images\n")    
        Log.write(f"[{time.strftime("%H:%M:%H")}] Backup created successfully")
        Log.close()

def RunAutomation():
    MainFolder = "Automation"
    Folders_Insert_MainFolder = ["source_files", "organized", "backup"]
    Files_Insert_Source_Files = ["photo1.jpg", "song.mp4", "doc.pdf", "notes.txt", "setup.exe", "cat.png", "video.avi"]
    Folders_Insert_OrganizedFolder = ["Images", "Videos", "Documents", "Others"]

    create_main_folder(MainFolder)
    create_subfolders(MainFolder, Folders_Insert_MainFolder)

    File_Path1 = os.path.join(MainFolder, "source_files")
    create_files(File_Path1, Files_Insert_Source_Files)

    Folder_Path2 = os.path.join(MainFolder, "organized")
    create_organized_folders(Folder_Path2, Folders_Insert_OrganizedFolder)

    move_files(File_Path1, Files_Insert_Source_Files, Folder_Path2)
    create_backup(MainFolder, Folder_Path2)
    write_log(MainFolder)

def main():
   
    Running = True
    schedule.every(1).minute.do(RunAutomation)

    while Running:
        schedule.run_pending()
        time.sleep(1)

        AskUser = input("Do you want close it (y/n): ").capitalize()

        if AskUser == 'Y' or AskUser == "Yes":
            Running = False

if __name__ == "__main__":
    main()

```
## Evaluation code with (ChatGPT): ⭐⭐⭐⭐☆ (4/5)
- More information: [ChatGPT - مشكلة وصف الريلز](https://chatgpt.com/s/t_69494853a894819192141769efa0b86f)
---
## Exercise 1: #Probleme_2 
### Input: Old solution.
```python
import os
import shutil
import re
import pandas
import datetime
import time
import schedule

  

def RunScript():

  

    MainFolder = "Automation" # This in MainFunc

    Folders_Insert_MainFolder = ["incoming", "processed", "backup"] # This in MainFunc

    Files_Insert_MainFolder = ["automation.log", "data.csv", "summary.txt"] # This in MainFunc

    # Files_Insert_incoming = ["file1.txt", "file2.txt"]

    File_Log = os.path.join(MainFolder, "automation.log")

  

    try:

        if os.path.exists(MainFolder):

            # shutil.rmtree(MainFolder)

            os.makedirs(MainFolder, exist_ok= True)

  

        for Folder in Folders_Insert_MainFolder:

            os.makedirs(os.path.join(MainFolder, Folder), exist_ok=True)

  
  

        for File in Files_Insert_MainFolder:

            Files = os.path.join(MainFolder, File)

            open(Files, "w").close()

  

        with open(File_Log, "a+") as FL:

            FL.write(f"{time.strftime("%H-%M-%S")}, Craete the folders and files Successfully.")

  

    except Exception:

  

        with open(File_Log, "a+") as FL:

            FL.write(f"{time.strftime("%H-%M-%S")}, Error in create folders!")    

  

    # Files_Insert_incoming_Path = os.path.join(MainFolder, "incoming")

    # for File in Files_Insert_incoming:

    #     Files = os.path.join(Files_Insert_incoming_Path, File)

    #     open(Files, "w+").close()

    try:

        Files_Insert_incoming_Path = os.path.join(MainFolder, "incoming") # This in MainFunc

        File_Content = {

            "file1.txt" : "Hello John I'am Sam_Worf , contact me at john.doe@gmail.com or +(212) 600-234567",

            "file2.txt" : "My name is Rober_Waterson, And my email is example123@yahoo.com call me 0660-123456"

        }

  

        for File, Content in File_Content.items():

            Files = os.path.join(Files_Insert_incoming_Path, File)

            with open(Files, "a+") as F:

                F.write(Content)

                F.close()

  

        with open(File_Log, "a+") as FL:

            FL.write(f"\n{time.strftime("%H-%M-%S")}, Craete the content into the files.txt Successfully.")

  

    except Exception:

  

        with open(File_Log, "a+") as FL:

            FL.write(f"{time.strftime("%H-%M-%S")}, Errors in craete the folders and files!")

  
  

    Files_Insert_incoming_File1_Path = os.path.join(Files_Insert_incoming_Path, "file1.txt") # This in MainFunc

    Files_Insert_incoming_File2_Path = os.path.join(Files_Insert_incoming_Path, "file2.txt")

  

    # Email_Of_File1 = re.search(r"[\w0-9]+\.?[\w0-9]+@[\w]+\.\w+", Files_Insert_incoming_File1_Path)

    # Email_Of_File2 = re.search(r"[\w0-9]+\.?[\w0-9]+@[\w]+\.\w+", Files_Insert_incoming_File2_Path)

  

    with open(Files_Insert_incoming_File1_Path, "r", encoding= "utf-8") as Content_File1:

        Text = Content_File1.read()

        if Text.strip():

            # print(f"The content of file 1 is: {Text}")

  

            Name_File1 = re.search(r"\s?(\w+_\w+)", Text)

            Email_File1 = re.search(r"[\w0-9]+\.?[\w0-9]+@[\w]+\.\w+", Text)

            Number_File1 = re.search(r"(\(212\))?\s?(\d{3,4})-?(\d{6})", Text)

  

            Name_File1_Modified = Name_File1.group()

            Email_File1_Modified = Email_File1.group()

            Number_File1_Modified = Number_File1.group()

  

            with open(File_Log, "a+") as FL:

                FL.write(f"\n{time.strftime("%H-%M-%S")}, Data extraction of file1.txt Successfully.")

  

        else:

            print("The file 1 is empty!")

  

        Content_File1.close()

  

    with open(Files_Insert_incoming_File2_Path, "r", encoding= "utf-8") as Content_File2:

            Text = Content_File2.read()

            if Text.strip():

                # print(f"The content of file 2 is: {Text}")

                Name_File2 = re.search(r"\s?(\w+_\w+)", Text)

                Email_File2 = re.search(r"[\w0-9]+\.?[\w0-9]+@[\w]+\.\w+", Text)

                Number_File2 = re.search(r"(\(212\))?\s?(\d{3,4})-?(\d{6})", Text)

                Name_File2_Modified = Name_File2.group()

                Email_File2_Modified = Email_File2.group()

                Number_File2_Modified = Number_File2.group()

                # print(Number_File2) # How to make it easy to read.

                with open(File_Log, "a+") as FL:

                    FL.write(f"\n{time.strftime("%H-%M-%S")}, Data extraction of file2.txt Successfully.")

  

            else:

                print("The file 2 is empty!")

  

            Content_File2.close()

  
  

    try:

        My_CsvPath = os.path.join(MainFolder, "data.csv")

        My_CsvData = pandas.DataFrame({

            "     Names" : [Name_File1_Modified, Name_File2_Modified],

            "        Emails" : [Email_File1_Modified, Email_File2_Modified],

            "        Numbers" : [Number_File1_Modified, Number_File2_Modified]

        })

  

        My_CsvData.to_csv(My_CsvPath, index= False)

  

        with open(File_Log, "a+") as FL:

            FL.write(f"\n{time.strftime("%H-%M-%S")}, Storing result Successfully.")

  

    except Exception:

        with open(File_Log, "a+") as FL:

                FL.write(f"\n{time.strftime("%H-%M-%S")}, Errors in storing result!")

  
  

    try:

        # processed_Path = os.path.join(MainFolder, "processed")

        shutil.move(My_CsvPath, os.path.join(MainFolder, "processed"))

  

        with open(File_Log, "a+") as FL:

            FL.write(f"\n{time.strftime("%H-%M-%S")}, Move data.csv to processed folder Successfully.")

  

    except Exception:

        with open(File_Log, "a+") as FL:

                FL.write(f"\n{time.strftime("%H-%M-%S")}, Errors in move data.csv to processed folder!")

  
  

    try: # Don't forget to make it into a func and do it with time.

        MyDateTime = "BackUp_" + datetime.datetime.now().strftime("%H-%M-%S")

  

        Source_Path = os.path.join(MainFolder, "processed")

  

        MyBackUp_Path = os.path.join(MainFolder, "backup")

        MyBackUp_Path_Modificated = os.path.join(MyBackUp_Path, MyDateTime)

  

        Destination_Path = os.path.join(MyBackUp_Path_Modificated, "processed")

  

        shutil.copytree(Source_Path, Destination_Path)

  

        with open(File_Log, "a+") as FL:

            FL.write(f"\n{time.strftime("%H-%M-%S")}, Make copy processed folder to backup folder Successfully.")    

  

    except Exception:

  

        with open(File_Log, "a+") as FL:

            FL.write(f"\n{time.strftime("%H-%M-%S")}, Errors in Make copy processed folder to backup folder.")

  
  
  

def main():

    Running = True

    schedule.every(1).minute.do(RunScript)

  

    while Running:

        schedule.run_pending()

        time.sleep(1)

  

        UserChoise = input("Do you wanna stop script? (y/n)").lower().strip()

        if UserChoise == 'y' or UserChoise == "yes":

            Running = False

  
  

if __name__ == "__main__":

    main()
```

---
### Input: My improvement code.
```python
import os
import shutil
import re
import pandas
import datetime
import time
import schedule

def Create_RequirementFolders(MainFolder, Folders_Insert_MainFolder, Files_Insert_MainFolder, File_Log):
   
    try:
        if os.path.exists(MainFolder):
            # shutil.rmtree(MainFolder)
            
            os.makedirs(MainFolder, exist_ok= True)

        for Folder in Folders_Insert_MainFolder:
            os.makedirs(os.path.join(MainFolder, Folder), exist_ok=True)


        for File in Files_Insert_MainFolder:
            Files = os.path.join(MainFolder, File)
            open(Files, "w").close()

        with open(File_Log, "a+") as FL:
            FL.write(f"{time.strftime("%H-%M-%S")}, Craete the folders and files Successfully.")

    except Exception:

        with open(File_Log, "a+") as FL:
            FL.write(f"{time.strftime("%H-%M-%S")}, Error in create folders!")    
    
def Create_ContentOf_Files_txt(MainFolder, File_Log, Files_Insert_incoming_Path):
    try:
        Files_Insert_incoming_Path = os.path.join(MainFolder, "incoming") # This in MainFunc
        File_Content = {
            "file1.txt" : "Hello John I'am Sam_Worf , contact me at john.doe@gmail.com or +(212) 600-234567",
            "file2.txt" : "My name is Rober_Waterson, And my email is example123@yahoo.com call me 0660-123456"
        }

        for File, Content in File_Content.items():
            Files = os.path.join(Files_Insert_incoming_Path, File)
            with open(Files, "a+") as F:
                F.write(Content) 
                F.close()

        with open(File_Log, "a+") as FL:
            FL.write(f"\n{time.strftime("%H-%M-%S")}, Craete the content into the files.txt Successfully.")

    except Exception:

        with open(File_Log, "a+") as FL:
            FL.write(f"{time.strftime("%H-%M-%S")}, Errors in craete the folders and files!")

def ReadAndExtractionData_Of_Filestxt_StoringResultOf_CsvFile(MainFolder, Files_Insert_incoming_File1_Path, Files_Insert_incoming_File2_Path, File_Log):

    with open(Files_Insert_incoming_File1_Path, "r", encoding= "utf-8") as Content_File1:
        Text = Content_File1.read()
        if Text.strip():
            # print(f"The content of file 1 is: {Text}")

            Name_File1 = re.search(r"\s?(\w+_\w+)", Text)
            Email_File1 = re.search(r"[\w0-9]+\.?[\w0-9]+@[\w]+\.\w+", Text)
            Number_File1 = re.search(r"(\(212\))?\s?(\d{3,4})-?(\d{6})", Text)

            Name_File1_Modified = Name_File1.group()
            Email_File1_Modified = Email_File1.group()
            Number_File1_Modified = Number_File1.group()

            with open(File_Log, "a+") as FL:
                FL.write(f"\n{time.strftime("%H-%M-%S")}, Data extraction of file1.txt Successfully.")

        else:
            print("The file 1 is empty!")
            

        Content_File1.close()
            

    with open(Files_Insert_incoming_File2_Path, "r", encoding= "utf-8") as Content_File2:
            Text = Content_File2.read()
            if Text.strip():
                # print(f"The content of file 2 is: {Text}")
                
                Name_File2 = re.search(r"\s?(\w+_\w+)", Text)
                Email_File2 = re.search(r"[\w0-9]+\.?[\w0-9]+@[\w]+\.\w+", Text)
                Number_File2 = re.search(r"(\(212\))?\s?(\d{3,4})-?(\d{6})", Text)
                
                Name_File2_Modified = Name_File2.group()
                Email_File2_Modified = Email_File2.group()
                Number_File2_Modified = Number_File2.group()
                # print(Number_File2) # How to make it easy to read.
                with open(File_Log, "a+") as FL:
                    FL.write(f"\n{time.strftime("%H-%M-%S")}, Data extraction of file2.txt Successfully.")

            else:
                print("The file 2 is empty!")

            Content_File2.close()

            try:
                My_CsvPath = os.path.join(MainFolder, "data.csv")
                My_CsvData = pandas.DataFrame({
                "     Names" : [Name_File1_Modified, Name_File2_Modified],
                "        Emails" : [Email_File1_Modified, Email_File2_Modified],
                "        Numbers" : [Number_File1_Modified, Number_File2_Modified]
                })

                My_CsvData.to_csv(My_CsvPath, index= False)

                with open(File_Log, "a+") as FL:
                    FL.write(f"\n{time.strftime("%H-%M-%S")}, Storing result Successfully.")

            except Exception:
                with open(File_Log, "a+") as FL:
                    FL.write(f"\n{time.strftime("%H-%M-%S")}, Errors in storing result!")

def MoveData_csv_to_processedfolder(MainFolder, File_Log, My_CsvPath):
    try:
        # processed_Path = os.path.join(MainFolder, "processed")
        shutil.move(My_CsvPath, os.path.join(MainFolder, "processed"))

        with open(File_Log, "a+") as FL:
            FL.write(f"\n{time.strftime("%H-%M-%S")}, Move data.csv to processed folder Successfully.")

    except Exception:
        with open(File_Log, "a+") as FL:
                FL.write(f"\n{time.strftime("%H-%M-%S")}, Errors in move data.csv to processed folder!")

def MakeCopy_processedfolder_To_backupfolder(MainFolder, File_Log):

    try: # Don't forget to make it into a func and do it with time. 
        MyDateTime = "BackUp_" + datetime.datetime.now().strftime("%H-%M-%S")

        Source_Path = os.path.join(MainFolder, "processed")

        MyBackUp_Path = os.path.join(MainFolder, "backup")
        MyBackUp_Path_Modificated = os.path.join(MyBackUp_Path, MyDateTime)

        Destination_Path = os.path.join(MyBackUp_Path_Modificated, "processed")

        shutil.copytree(Source_Path, Destination_Path)

        with open(File_Log, "a+") as FL:
            FL.write(f"\n{time.strftime("%H-%M-%S")}, Make copy processed folder to backup folder Successfully.")    

    except Exception:

        with open(File_Log, "a+") as FL:
            FL.write(f"\n{time.strftime("%H-%M-%S")}, Errors in Make copy processed folder to backup folder.")

def EquipmentOfScript():
    
    MainFolder = "Automation" 
    Folders_Insert_MainFolder = ["incoming", "processed", "backup"]  
    Files_Insert_MainFolder = ["automation.log", "data.csv", "summary.txt"] 
    File_Log = os.path.join(MainFolder, "automation.log")

    Files_Insert_incoming_Path = os.path.join(MainFolder, "incoming")

    Files_Insert_incoming_File1_Path = os.path.join(Files_Insert_incoming_Path, "file1.txt") 
    Files_Insert_incoming_File2_Path = os.path.join(Files_Insert_incoming_Path, "file2.txt")

    My_CsvPath = os.path.join(MainFolder, "data.csv")


    Create_RequirementFolders(MainFolder, Folders_Insert_MainFolder, Files_Insert_MainFolder, File_Log)
    Create_ContentOf_Files_txt(MainFolder, File_Log, Files_Insert_incoming_Path)
    ReadAndExtractionData_Of_Filestxt_StoringResultOf_CsvFile(MainFolder, Files_Insert_incoming_File1_Path, Files_Insert_incoming_File2_Path, File_Log)
    MoveData_csv_to_processedfolder(MainFolder, File_Log, My_CsvPath)
    MakeCopy_processedfolder_To_backupfolder(MainFolder, File_Log)

def RunningScript_Withschedule():

    Running = True
    schedule.every(1).minute.do(EquipmentOfScript)

    while Running:
        schedule.run_pending()
        time.sleep(1)

        UserChoise = input("Do you wanna stop script? (y/n)").lower().strip()
        if UserChoise == 'y' or UserChoise == "yes":
            Running = False

def main():
   
    RunningScript_Withschedule()

if __name__ == "__main__":
    main()

```

---
### Input: Improvement code with (ChatGPT)
```python
import os
import time
import shutil
import datetime
import pandas
import schedule
import re

# ===================== LOG FUNCTION =====================
def write_log(File_Log, message):
    with open(File_Log, "a+") as FL:
        FL.write(f"\n{time.strftime('%H-%M-%S')}, {message}")


# ===================== FILE 2 DATA EXTRACTION =====================
def extract_file2_data(Content_File2, Name_File2, Email_File2, Number_File2, File_Log):
    if Content_File2:
        Name_File2_Modified = Name_File2.group()
        Email_File2_Modified = Email_File2.group()
        Number_File2_Modified = Number_File2.group()

        write_log(File_Log, "Data extraction of file2.txt Successfully.")
        Content_File2.close()

        return Name_File2_Modified, Email_File2_Modified, Number_File2_Modified
    else:
        print("The file 2 is empty!")
        Content_File2.close()
        return None, None, None


# ===================== CREATE CSV =====================
def create_csv(MainFolder, File_Log,
               Name_File1_Modified, Email_File1_Modified, Number_File1_Modified,
               Name_File2_Modified, Email_File2_Modified, Number_File2_Modified):

    try:
        My_CsvPath = os.path.join(MainFolder, "data.csv")

        My_CsvData = pandas.DataFrame({
            "     Names": [Name_File1_Modified, Name_File2_Modified],
            "      Emails": [Email_File1_Modified, Email_File2_Modified],
            "      Numbers": [Number_File1_Modified, Number_File2_Modified]
        })

        My_CsvData.to_csv(My_CsvPath, index=False)
        write_log(File_Log, "Storing result Successfully.")

        return My_CsvPath

    except Exception:
        write_log(File_Log, "Errors in storing result!")
        return None


# ===================== MOVE CSV =====================
def move_csv_to_processed(My_CsvPath, MainFolder, File_Log):
    try:
        shutil.move(My_CsvPath, os.path.join(MainFolder, "processed"))
        write_log(File_Log, "Move data.csv to processed folder Successfully.")
    except Exception:
        write_log(File_Log, "Errors in move data.csv to processed folder!")


# ===================== BACKUP =====================
def backup_processed_folder(MainFolder, File_Log):
    try:
        MyDateTime = "BackUp_" + datetime.datetime.now().strftime("%H-%M-%S")

        Source_Path = os.path.join(MainFolder, "processed")
        MyBackUp_Path = os.path.join(MainFolder, "backup")
        MyBackUp_Path_Modificated = os.path.join(MyBackUp_Path, MyDateTime)
        Destination_Path = os.path.join(MyBackUp_Path_Modificated, "processed")

        shutil.copytree(Source_Path, Destination_Path)
        write_log(File_Log, "Make copy processed folder to backup folder Successfully.")

    except Exception:
        write_log(File_Log, "Errors in Make copy processed folder to backup folder.")


# ===================== MAIN SCRIPT =====================
def RunScript():
    MainFolder = "YOUR_MAIN_FOLDER_PATH"
    File_Log = os.path.join(MainFolder, "log.txt")

    # ===== FILE 1 =====
    with open(os.path.join(MainFolder, "file1.txt"), "r") as F1:
        Content_File1 = F1.read()

    Name_File1 = re.search(r"Name:\s*(.*)", Content_File1)
    Email_File1 = re.search(r"Email:\s*(.*)", Content_File1)
    Number_File1 = re.search(r"Number:\s*(.*)", Content_File1)

    Name_File1_Modified = Name_File1.group() if Name_File1 else None
    Email_File1_Modified = Email_File1.group() if Email_File1 else None
    Number_File1_Modified = Number_File1.group() if Number_File1 else None

    # ===== FILE 2 =====
    Content_File2 = open(os.path.join(MainFolder, "file2.txt"), "r")
    File2_Text = Content_File2.read()

    Name_File2 = re.search(r"Name:\s*(.*)", File2_Text)
    Email_File2 = re.search(r"Email:\s*(.*)", File2_Text)
    Number_File2 = re.search(r"Number:\s*(.*)", File2_Text)

    Name_File2_Modified, Email_File2_Modified, Number_File2_Modified = extract_file2_data(
        Content_File2, Name_File2, Email_File2, Number_File2, File_Log
    )

    # ===== CSV =====
    My_CsvPath = create_csv(
        MainFolder, File_Log,
        Name_File1_Modified, Email_File1_Modified, Number_File1_Modified,
        Name_File2_Modified, Email_File2_Modified, Number_File2_Modified
    )

    if My_CsvPath:
        move_csv_to_processed(My_CsvPath, MainFolder, File_Log)
        backup_processed_folder(MainFolder, File_Log)


# ===================== SCHEDULER =====================
def main():
    Running = True
    schedule.every(1).minute.do(RunScript)

    while Running:
        schedule.run_pending()
        time.sleep(1)

        UserChoise = input("Do you wanna stop script? (y/n): ").lower().strip()
        if UserChoise in ("y", "yes"):
            Running = False


if __name__ == "__main__":
    main()

```


---
## Evaluation code with (ChatGPT): ⭐⭐⭐⭐⭐☆ (4/6)
- More information: [ChatGPT - تقييم تمرين أتمتة](https://chatgpt.com/s/t_694f1afec7e081919aa53a435e4563e3)

---
---
---

## Exercise 3: Web_Scraping #Probleme1 
### Input: My improvement code.
```python
import requests
import lxml
from bs4 import BeautifulSoup

def Get_Response_Page1(Url_Page1, headers):

	Response = requests.get(Url_Page1, headers=headers, timeout=10)
	Html = Response.text

	soup = BeautifulSoup(Html, "lxml")

	return soup

  

def GetProducts_InPage1(soup):

	products = soup.select("li.col-xs-6.col-sm-4.col-md-3.col-lg-3")

  
	print("\n-------------------------------FIRST_PAGE--------------------------------\n")

	for product in products:
	Title_product = product.select_one("a[title]")
	Price_product = product.select_one("p.price_color")
	Stars_product = product.select_one("p.star-rating")


	Title = Title_product["title"]
	Classes = Stars_product["class"]
	Stars_Number = Classes[1]
	Link = Title_product['href']


	print("\n----------------------------\n")
	print(f"The Title is: {Title}")
	print(f"The Price is: {Price_product.text}")
	print(f"The Stars is: {Stars_Number}")
	print(f"The link is : {Link}")

  
  

def Get_Response_Page2(Url_Page2, headers):

	Response = requests.get(Url_Page2, headers=headers, timeout=10)
	Html = Response.text
	
	soup = BeautifulSoup(Html, "lxml")
	
	return soup

  

def GetProducts_InPage2(soup):

	products = soup.select("li.col-xs-6.col-sm-4.col-md-3.col-lg-3")

	print("\n-------------------------------SECONDE_PAGE--------------------------------\n")

	for product in products:
	Title_product = product.select_one("a[title]")
	Price_product = product.select_one("p.price_color")
	Stars_product = product.select_one("p.star-rating")


	Title = Title_product["title"]
	Classes = Stars_product["class"]
	Stars_Number = Classes[1]
	Link = Title_product['href']

  

	print("\n----------------------------\n")
	print(f"The Title is: {Title}")
	print(f"The Price is: {Price_product.text}")
	print(f"The Stars is: {Stars_Number}")
	print(f"The link is : {Link}")

  
def main():

	Url_Page1 = "https://books.toscrape.com/"
	Url_Page2 = "https://books.toscrape.com/catalogue/page-2.html"

	headers = {

	"User-Agent": "Mozilla/5.0",
	"Accept": "text/html",
	"Accept-Language": "en-US,en;q=0.9",
	"Connection": "keep-alive"
	}

	soup_page1 = Get_Response_Page1(Url_Page1, headers)
	GetProducts_InPage1(soup_page1)
	soup_page2 = Get_Response_Page2(Url_Page2, headers)
	GetProducts_InPage2(soup_page2)

if __name__ == "__main__":
main()rr
```
### Input:
```python
import requests

from bs4 import BeautifulSoup

from urllib.parse import urljoin

  

def Scraping_Data(soup, Base_Url, Relative_Url):

Title_WithLink = soup.select_one("a[title]")

Clean_Title = Title_WithLink["title"]

  

Price = soup.select_one("p.price_color")

Price_Text = Price.text

Clean_Price = ''.join(Price_Text.splitlines())

  

Stars = soup.select_one("p.star-rating")

Stars_Class = Stars["class"]

Clean_Stars = Stars_Class[1]

  

Clean_Url = urljoin(Base_Url, Relative_Url)

  

print("\n--------------------------")

print(Clean_Title)

print(Clean_Price)

print(Stars)

print(Clean_Stars)

print(Clean_Url)

print("--------------------------")

  

def main():

Base_Url = "https://books.toscrape.com/"

Relative_Url = "catalogue/book_1/index.html"

  

text = '''<li class="col-xs-6 col-sm-4 col-md-3 col-lg-3">

<article class="product_pod">

<h3><a href="catalogue/book_1/index.html" title="Book One">Book One</a></h3>

<p class="price_color">

<span class="price-part">1</span>

<span class="price-part">2</span>

<span class="price-part">9</span>

<span class="currency">£</span>

</p>

<p class="star-rating Three"></p>

</article>

</li>

'''

  

soup = BeautifulSoup(text, "lxml")

  

Scraping_Data(soup, Base_Url, Relative_Url)

if __name__ == "__main__":

main()
```
---
### Input1: Make scraping code extract deep data by enter to product and switch pages.
```python

import requests
from bs4 import BeautifulSoup
from urllib.parse import urljoin

def Response(base_url):
    
    headers = {
    "User-Agent": "Mozilla/5.0",
    "Accept": "text/html",
    "Accept-Language": "en-US,en;q=0.9",
    "Connection": "keep-alive"
    }
     
    response = requests.get(base_url, headers=headers, timeout=5)
    
    try:            
        html = response.text
        soup = BeautifulSoup(html, "lxml")
        return soup
    
    except Exception as EX:
        print(f"Error in Response function, {EX}")


def Extract_Links(soup):

    try:
        countainers = soup.select("li.col-xs-6.col-sm-4.col-md-3.col-lg-3")

        for countainer in countainers:
            links = countainer.select_one("h3 a[href]")
            clean_links = links["href"]
            
            yield urljoin("https://books.toscrape.com/catalogue/", clean_links)
    except Exception as EX:
        print(f"Error in Extract_Links function, {EX}")
                

def Enter_Extract_Data(soup):
    try:
        countainers = soup.select("article.product_page")
        
        product_list = {}
        
        for countainer in countainers:
            img_div = countainer.select_one("div.item.active img[src]")
            modifier_img = img_div["src"][6:]
            clean_img = urljoin("https://books.toscrape.com/",modifier_img)
            
            title_div = countainer.select_one("div.col-sm-6.product_main h1")
            clean_title = title_div.text
            
            price_div = countainer.select_one("p.price_color")
            clean_price = price_div.text
            
            stock_div = countainer.select_one("p.instock.availability")
            clean_stock = stock_div.text
    
            stars_div = countainer.select_one("p.star-rating")
            stars_class = stars_div["class"]
            clean_stars = stars_class[1]
            
            product_list = {
                "title" : clean_title,
                "img" : clean_img,
                "price" : clean_price,
                "stock" : clean_stock,
                "stars" : clean_stars 
            }
            
            print(product_list)
            
    except Exception as EX:
        print(f"Error in Enter_Extract_Data function, {EX}")    
        
def Extract_LinkPage(soup):
    
    page_div = soup.select_one("li.next a[href]")
    
    if not page_div:
        
        return None

    else:
        page_relative = page_div["href"]    
        Full_CleanPage = urljoin("https://books.toscrape.com/catalogue/", page_relative)
        
        return Full_CleanPage    

def main():   

    current_url = "https://books.toscrape.com/catalogue/page-1.html"

    while current_url:
        print(f"\nScraping page: {current_url}")

        soup = Response(current_url)

        for product_link in Extract_Links(soup):
            product_soup = Response(product_link)
            Enter_Extract_Data(product_soup)

        current_url = Extract_LinkPage(soup)

    print("\n✅ Finished scraping all pages")

if __name__ == "__main__":
    main()
# def main():

# First_Url = "https://books.toscrape.com/catalogue/page-1.html"

# soup = Response(First_Url)

# clean_links = Extract_Links(soup)

  

# # for cleanlink in clean_links:

# # New_soup = Response(cleanlink)

# # Enter_Extract_Data(New_soup)

# link_pages = Extract_LinkPage(Response(First_Url))

# if link_pages is not None:

# while link_page in link_pages:

# print(f"------------------{link_page}------------------")

# New_page_soup = Response(link_page)

# Enter_Extract_Data(New_page_soup)

# else:

# print("page limit")

# if __name__ == "__main__":

# main()
```
---
---
### Input: Scrapy.
```python
import scrapy

from scrapy.spiders import CrawlSpider, Rule

from urllib.parse import urljoin

  

class BooksToscrapeSpider(scrapy.Spider):

name = "Books_ToScrape"

allowed_domains = ["books.toscrape.com"]

start_urls = ["https://books.toscrape.com"]

  

def parse(self, response):

Containers = response.css("li.col-xs-6.col-sm-4.col-md-3.col-lg-3")

for container in Containers:

Link = container.css("h3 a::attr(href)").get()

yield response.follow(

Link,

callback=self.extract_product

)

next_page = response.css("li.next a::attr(href)").get()

if next_page:

yield response.follow(

next_page,

callback=self.parse

)

def extract_product(self, response):

Relative_Image = response.css("div.item.active img::attr(src)").get()

Image = Relative_Image[6:]

Title = response.css("div.col-sm-6.product_main h1::text").get()

Price = response.css("p.price_color::text").get()

# Stock = response.css("p.instock.availability::text").get()

Stars = response.css("p.star-rating::attr(class)").re_first(r"star-rating (\w+)")

yield {

"Image" : urljoin("https://books.toscrape.com/", Image),

"Title" : Title,

"Price" : Price,

# "Stock" : Stock,

"Stars" : Stars

}
```