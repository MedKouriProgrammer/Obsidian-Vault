---
creation_date: 2025-10-01
tags:
  - Resources/Articles
Resource: https://chatgpt.com/share/68de5bd4-d884-8003-96b1-16ce5f8dc4e4
---
> [!summary]-
> You have now the road map to access the automation bot to make money, But if you don’t make it at least you earn the experience, And you can automation your tasks to let your life easy.

# <font color="#646a73">How to access first automation bot (The road map).</font>
---
## Step 1: Learn Python.

### Definition: 
- [[python]] is the only and speedily programming language to dealing with automation because it has the libraries infective working with automation bot.
### The road:
- The best Arabic course can accommodate all what we were talking about it start with you from basics to object-oriented programming is: [[Alzero Web School]].

### What we need learning: 
``` python 
Variables, Data Types
------------------------------------------------------------------------------
if/else
------------------------------------------------------------------------------
Loops (for, while)
------------------------------------------------------------------------------
Functions
------------------------------------------------------------------------------
Lists, Dictionaries, Tuples
------------------------------------------------------------------------------
File Handling
```
The goal: Adopt a programmer's mindset.

``` python
Error Handling (try/except)
------------------------------------------------------------------------------
Modules & Packages
------------------------------------------------------------------------------
Object-Oriented Programming (OOP)
```
The goal: Learning object-oriented programming & other requirements.

**Additional Recommended Skills (Added)**:
• Virtual Environments (venv) [[150 - Virtual Environment Part 1]].

---
## Step 2: Basics of automation with python.

### Definition:
- Now we will automate some simple daily tasks by use the libraries on Python.
### What we need learning: 
``` cpp
os & shutil
// To controle the files & folders.
// Exemple: Script transfers all the pdf files to private folder, Or rename the files neatly.
------------------------------------------------------------------------------
schedule & time 
// To controle the time & employment the programs periodically.
// Exemple: A scripte open a programs every days in 9 morning or buckup every week. 
------------------------------------------------------------------------------
pyautogui 
// To controle mouse & clipboard.
// Exemple: A script open google, And type someword in google, And type enter. 
------------------------------------------------------------------------------
Regular Expressions
// To clean and search texts.
// Exemple: Extracting phone numbers from texts or emails from a file.
------------------------------------------------------------------------------
DataFiles - {CSV}
// Many clients store data in CSV, And it the easiest datafiles to learn it.
```
### The roads: 
- there are video in my playlist on YouTube that explaining all these lessons:
1. ` os & shutil: ` [Python Tutorial: OS Module - Use Underlying Operating System Functionality - YouTube](https://www.youtube.com/watch?v=tJxcKyFMTGo&list=PLOJy5kAbOq5Ia8DchVS6jNcGM6VzuSuRG)

2. ` schedule & time: `[Scheduling Tasks Professionally in Python - YouTube](https://www.youtube.com/watch?v=yDPQfj4bZY8&list=PLOJy5kAbOq5IRfxmfOal7rlaHxXDVn2vv)

3. ` pyautogui: `[How To Automate Your Desktop With PyAutoGui - YouTube](https://www.youtube.com/watch?v=RMdN3Vq7sTE&list=PLW-MpjLHV8UXRdPLU2OUQYJ6H1oz9vS0f)

4. ` Regular Expressions: `[Regular Expressions in Python - FULL COURSE (1 HOUR) - Programming Tutorial - YouTube](https://www.youtube.com/watch?v=AEE9ecgLgdQ&list=PLOJy5kAbOq5KUK9n_9vXeGvFGcbIEG96C)
### The goals:
- Start applying the concept of automation to your personal device.
- Let Python perform simple daily tasks for you.
- File organization.
- Program scheduling.
- Automatically typing or compressing text.
- Control the keyboard and mouse instead of having to click.
### Note: You have to apply these some exercises:
1. #Probleme_1  _1: A program that automated file management system with scheduling: [ChatGPT - تقييم تمرين أتمتة](https://chatgpt.com/s/t_694949c700f88191b3b7c1877aefa549)

2. #Probleme_2 A program that automating the reading and organization of text files, extracting information from them using regex, and then recording it, with pyautogui interaction: [ChatGPT - تقييم تمرين أتمتة](https://chatgpt.com/s/t_694958a832308191a0ba836601f3cf9d)

**Additional Recommended Skill (Added)**
• GUI Basics using tkinter or PyQt (optional but useful).

---
## Step 3: Web scraping & APIs.

### Definition: 
- In this step, we will enter the world of the Internet and connect it with automation.

### The road:
- To understand and use all this definition there is a video on my playlist YouTube that explains how to Web Scraping & Selenium (Web Automation) & APIs: [Automate with Python – Full Course for Beginners - YouTube](https://www.youtube.com/watch?v=PXMJ6FS7llk&list=PLOJy5kAbOq5L0nS2HmUjC_7wyvpcOgrY0)
- ### What we need to learning: 
``` cpp
Wep Scraping 

// Use libraries like requests & beautifulsoup.
// Let python opens wep page & read it content (Product prices, news, tables) for exemple, A bot that collects product prices from Jumia and arranges them in an Excel file.
------------------------------------------------------------------------------
Selenium Web Automation 

// A library that lets Python open a browser (Chrome/Firefox). 
// Type in fields, click buttons, and log in to your account. (It's like having a robot surfing the internet in your place).
------------------------------------------------------------------------------
APIs 
 
// Instead of copying data from the website, some websites provide you with an official API.

// Examples: Gmail API for sending/reading emails, Telegram API for creating bots.

// You handle these in Python by sending and receiving data in JSON format.
```
- `Wep scraping` = [شرح مكتبة requests في بايثون 1\| ما هو ال HTTP \| ما هو ال Web Scraping - YouTube](https://www.youtube.com/watch?v=FQuskLyitPI&list=PLQ0nnMSPXthqEv6XBsWqDg142Wa_saFHN)

**Additional Recommended Skill (Added)** 
• Pagination handling when scraping multi-page websites.

---
### Step 3 (Completed): Make practical example (scrape + save CSV)
### Definition: 
- After learn how to web scraping work by using libraries like Beautiful Soup & requests, Try to make a short project with yourself.
### Example of project:
```cpp
// Let python script open a site like "Jumia.ma".
// Extracts product names and prices from a specific page (for example, the phones section)
// Then stores the results in a CSV file like (products.csv).
```
### Goal:
- Now you try all what you learn from step 3.

**Additional Recommended Skill (Added)**
• Basic documentation writing (README.md best practices).

---
### Step 4: Advanced Automation + Bots.

### Definition: 
- In this step you are able to create an Automation bot that need it the companies or clients in freelancer, So you just need to learn the strongest libraries like: Excel, create Telegram & WhatsApp bots, send email or alerts.
### What we need learning: 
``` cpp
Excel

// Almost all companies store their data in Excel.

// Learn how Python opens Excel files, reads and edits data, and automatically creates tables and graphs.

// For example: An employee writes down daily sales data, and the bot calculates the total and generates a report.
// 🗝 Important libraries: openpyxl, pandas
------------------------------------------------------------------------------
Craet Telegram Bot

// Many small businesses and entrepreneurs use Telegram to communicate.

// Learn how to build a Telegram bot that receives commands (e.g., /report) and responds with a message or Excel file.

// It can also generate automated notifications (e.g., daily prices, news, customer support messages).

// 🗝 Important library: python-telegram-bot
------------------------------------------------------------------------------
WhatsApp {Automation}

// WhatsApp is the number one communication platform for customers.

// Build a script that sends automated WhatsApp messages (reminders, announcements, notifications).

// For small businesses: A bot that responds to customers or sends daily offers.

// 🗝 Libraries and tools: pywhatkit (simple), Selenium (more powerful), or WhatsApp Business API
------------------------------------------------------------------------------
Sends email

// Email is still essential in every business.

// Learn how to implement a script that automatically sends an email with a report or file attachment.

// For example, every morning, the bot sends a sales report to the company team.

// 🗝 Library: smtplib
------------------------------------------------------------------------------
Database - {Sqlite, MySQL, 'PostgreSQL'->''}
DataFiles - {CSV, JSON, 'XML'-> ''}

// Many clients store data in CSV, JSON, or SQLite.

// You need to learn how to read and write this data.

// For example, a bot collects data from a website, stores it in SQLite, and then sends a daily report.

// 🗝 Libraries: csv, json, sqlite3
```
### The road:
- There are explaining videos on YouTube:
- ` Excel : ` [Loading Excel Data in Python: Step-by-Step Guide Openpyxl tutorial # 1 - YouTube](https://www.youtube.com/watch?v=FpgdFkup3ew&list=PLQ_2ttwmRlIirJXyymxKqODisk0ocKGFv) - [Loading Excel Data in Python: Step-by-Step Guide Openpyxl tutorial # 1 - YouTube](https://www.youtube.com/watch?v=FpgdFkup3ew&list=PLQ_2ttwmRlIirJXyymxKqODisk0ocKGFv)
- ` Craet Telegram Bot: ` [#0 Introduction \| Learn PTB(Python-Telegram-bot) \| How To Code A Telegram Bot \| @TraxDinosaur - YouTube](https://www.youtube.com/watch?v=Rlb59dyeaa0&list=PLoittacZYCzmN3Uu-c6Mg_QzVtiphukTn) - [How To Create A Telegram Bot In Python For Beginners (2023 Tutorial) - YouTube](https://www.youtube.com/watch?v=vZtm1wuA2yc)
- ` WhatsApp {Automation} : ` [Automate WhatsApp messages with python in just 2 lines of code \| pywhatkit module. - YouTube](https://www.youtube.com/watch?v=4YP6lqbCz_E) - [Automate WhatsApp Messages with Python in 3 Steps - YouTube](https://www.youtube.com/watch?v=MQQTABNMZCE)
- ` Sends email : ` [How to Send Emails with Python \[New Method 2023\] - YouTube](https://www.youtube.com/watch?v=g_j6ILT-X0k&t=165s) - [How To Send Email In Python \| Smtplib Tutorial - YouTube](https://www.youtube.com/watch?v=S465v4mWsRg)
----------------------------------------------------------------------
- And here videos of Database & Datafiles.
- ` Python CSV Tutorial : ` [How to Work with CSV Files in Python: Built-in CSV Module Tutorial - YouTube](https://www.youtube.com/watch?v=sfTUVXfC0X0) - [Python Tutorial: CSV Module - How to Read, Parse, and Write CSV Files - YouTube](https://www.youtube.com/watch?v=q5uM4VKywbA)
- ` Python JSON Tutorial : ` [What are JSON Files and How do we use them in Python (Python and JSON Tutorial 01) - YouTube](https://www.youtube.com/watch?v=B8AvytgCBdE&list=PL2VXyKi-KpYs_f1gu30AGqy0H6x97Vomf) - [Python Tutorial: Working with JSON Data using the json Module - YouTube](https://www.youtube.com/watch?v=9N6a-VLBa2I)
- ` Python SQLite Database Tutorial : ` [SQLite Databases With Python - Full Course - YouTube](https://www.youtube.com/watch?v=byHcYRpMgI4) - [Sqlite 3 Python Tutorial in 5 minutes - Creating Database, Tables and Querying \[2020\] - YouTube](https://www.youtube.com/watch?v=girsuXz0yA8) - [Python SQLite Tutorial: Complete Overview - Creating a Database, Table, and Running Queries - YouTube](https://www.youtube.com/watch?v=pd-0G0MigUA)
- ` Python MySQL Connector : ` [Python MySQL Database Connectivity - MySQL Connector \| 2022 Complete Guide - YouTube](https://www.youtube.com/watch?v=MhaH7o3lf4E) - [Python MySQL Tutorial - Setup & Basic Queries (w/ MySQL Connector) - YouTube](https://www.youtube.com/watch?v=3vsC05rxZ8c)
### Goals: 
- Finally you can build a completely bots like telegram bot for sends daily reports message to the clients from Excel, Script send WhatsApp messages automatically to the clients, A program that collects data from the Internet and converts it into daily email reports. And finally, I can sale my services, because these things are requested directly by business owners, You only need to learn Git & GitHub, After that you’re able to put all projects on GitHub & make a portfolio in freelancing sites.
----------------------------------------------------------------------
### Step 4 (Completed): Learn Git & GitHub
### Definition: 
- You have now to learn GitHub to put the project on it, And the best GitHub course right new is [[Alzero Wep School]] and his course is here:  [\[Arabic\] Learn Git & GitHub #01 - Whats Git & GitHub & Why U Should Learn Part 1 - YouTube](https://www.youtube.com/watch?v=ACOiGZoqC8w&list=PLDoPjvoNmBAw4eOj58MZPakHjaO3frVMF)
### What we need learning: 
```cpp
Repository (git, git add, git push, commit)

// How to write a special description for my project in RAEDME.ad file.
// The project i will put it in GitHub is: (When you arrive here ask ai). 
```
### Goals :
- You’ve taken all the roads and there is only one obstacle left at the bottom to complete the map👇.
---
### Step 5: Build Real Projects.
### Definition: 
- In here step you have to built real projects to upload up in GitHub.
### What we need learning: 
```cpp
Telegram Bot + Excel + Web Scraping
// A bot retrieves product prices from a website, stores them in Excel, and sends them out daily (this project sells 60$-120$).
------------------------------------------------------------------------------
WhatsApp Notifications Bot
// A company that wants to send an alert to customers every day or send offers.
------------------------------------------------------------------------------
Full Automation System for local business
// The employee enters the data into Excel → the bot reads it → sorts it → creates a PDF report → sends it via email.
```
### Goals :
- Make real project and put it in GitHub to make a strong portfolio as a automation developer, And this is some project to make it and put it in GitHub:
```
1. File Organizer Bot.
2. Auto Login Script with Selenium.
3. Jumia Web Scraper → Excel Export.
4. Telegram Daily Report Bot.
5. WhatsApp Auto Sender.
6. Daily Email Report Bot (Excel + Email).
7. SQLite Database Automation Script.
```
- Those seven project are enough to appear you as an expert’s automation developer.
---
[ChatGPT - مراجعة خطة الأتمتة](https://chatgpt.com/share/692204ee-df60-8011-9820-d8e1bff80d86)
