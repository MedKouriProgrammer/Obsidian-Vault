---
Created: Monday 27th February 2023 18:28
Last Modified: Monday 27th February 2023 18:28
Aliases: 
Tags: DS💻
created: 2023-06-25T02:20
updated: 2024-06-08T22:29
---
[JetBrains Datalore: A powerful environment for Jupyter notebooks.](https://datalore.jetbrains.com/view/notebook/hwYUBbcvMA5Cn8GstBjztV)

![Full Stack Data Science Roadmap 2023 - YouTube](https://www.youtube.com/watch?v=QnGotm29cZE&t=2s)
Up: [[DS]]

---
# 👨‍💻 Full Stack Data Science Roadmap 2023

#### Created by: [Thu Vu](https://www.youtube.com/c/Thuvu5)

## 📝 1. Introduction

  

### 🎯 Goal

This notebook aims to give you an **overview** and help you explore the **fundamental skills** required for end-to-end data science projects. Resources on the Internet are abundant, but it is also hard to know what you should use. So in this notebook I also included my **recommended resources** for you to start learning those skills.

  
![[download4541.png]]


  

Good luck & keep learning!

  

Thu Vu xx

### 🤖 How to use this notebook

  

- You can pick and choose what you want to learn first. Please note that the *order* in which you learn the skills *does not really matter* (!), as long as you have the basic programming skills and Math/ Stats.

- Always combine learning theory with practice! You can practice SQL, R and Python directly on Datalore notebooks 😉.

- Every company may differ in their tooling and data science infratructure. However, if you have solid fundamentals, there is no doubt you can easily learn new skills and tools down the road.

- If you want to open the links in a new tab, `Ctr+click` on the links in this notebook.


### 📈 Try Datalore for yourself!

Use my gift code **THUVUDL** for a 1 month of free Datalore Professional 🚀. Click the “Edit copy” button in the upper right corner of this notebook to create a free Community account, then upgrade to Datalore Professional in the Account settings.

  

![[professional_plan.png]]

  
  

**Try Datalore Enterprise for your team**

  

If you can’t use cloud tools to work with data, your team can host a private version of [**Datalore Enterprise**](https://jb.gg/bv74zx) on AWS, GCP, Azure and on-premises, ensuring the data doesn’t leave the company’s environment.

### ✍️ Final notes

- Visit my Youtube video on Full Stack Data Science to get a walk-through of the skills.

- If you want to become a **collaborator** of this roadmap, please reach out to me via email (hello@thuhienvu.com).

- If you are looking for a friendly **data science community** and like-minded buddies to study with, you can join my [Discord](https://discord.com/channels/979526034233896990/979526034498142267) server to enjoy the companionship of almost 3,000 members.

- Making great stuff takes time and $$. Some links included in this notebook are affiliate links. By using those links, you help support me to continue sharing (for free) data science related content like this, at zero costs to you.



# 👨‍💻 2. Becoming Full Stack

## 2.1. Programming

  

When working with data and building data applications, the main programming languages used to date are:

- [Python](https://www.python.org/downloads/)

- [SQL](https://www.microsoft.com/en-us/sql-server/sql-server-downloads)

- [R](https://rstudio-education.github.io/hopr/starting.html)

- [JavaScript](https://www.w3schools.com/whatis/whatis_js.asp)/ [C++](https://www.w3schools.com/cpp/cpp_intro.asp)/ [Java](https://www.w3schools.com/java/java_intro.asp) (more useful for building high-scale applications)

  

The graph below shows the current state of programming languages in the Kaggle Machine Learning & Data Science Survey results (2018-2021). **Python and SQL** continue to dominate the toolkit of data science practitioners.

  

![[kaggle_survey.png]]

Source: https://www.kaggle.com/code/lynnxy/a-deep-dive-into-the-kaggle-survey-from-2017-2021#1.-Introduction

### 🤖 SQL (Structural Querying Language)

  

#### What is it?

SQL is a programming language designed to **manage data** stored in **relational databases**. The SQL language is widely used today across web frameworks and database applications. This keeps data **accurate** and **secure**, and helps maintain the **integrity** of databases, regardless of size.

  

70% of SQL is very straight-forward to learn. You can find a few demo PostgreSQL databases in this notebook, which you can use for practicing SQL!

- #### Example SQL queries

#### Learn SQL basics

  

***Topics:***

- Relational Database Management System (RDBMS)

- Database design - Entity Relationship Diagram (ERD)

- Primary key

- Foreign key

- Data Types

- Operators

- Expressions

- Create Database

- Drop Database

- Select Database

- Create Table

- Drop Table

- Insert Query

- Select Query

- Where Clause

- AND & OR Clauses

- Update Query

- Delete Query

- Like Clause

- Top Clause

- Order By

- Group By

- Distinct Keyword

- Sorting Results

  

![[sql_basic_cheatsheet.png]]

#### Learn SQL Intermediate

  

***Topics:***

- Constraints

- Table joins

- NULL values

- Alias syntax

- Indexes

- Alter Command

- Truncate Table

- Using Views

- Having clause

- Transactions

- Wildcards

- Date functions

- Temporary tables

- Clone tables

- Using Sequences

- Handling duplicates

- Injection

#### Learn SQL Advanced

  

***Topics:***

- Subqueries

- Set operations (UNION, UNION ALL, INTERSECT, MINUS)

- GROUP BY extensions (ROLLUP, CUBE, and GROUPING SETS)

- Window functions

- PARTITION BY

- Recursive Queries

#### SQL Resources, Courses & Certificates

1. [Learn SQL Basics for Data Science (Coursera)](https://imp.i384100.net/AovPnJ)

2. [Complete SQL and Databases Bootcamp: Zero to Mastery (Udemy)](https://www.udemy.com/course/complete-sql-databases-bootcamp-zero-to-mastery/)

3. [Youtube - FREE :)](https://www.youtube.com/watch?v=HXV3zeQKqGY)

4. [SQLBolt - FREE :)](https://sqlbolt.com/)


### 🤖 Python

  

#### What is it?

Python is a widely-used general-purpose, high-level programming language. It was initially designed by Guido van Rossum in 1991 and developed by Python Software Foundation. It was mainly developed for emphasis on code readability, and its syntax allows programmers to express concepts in fewer lines of code.

#### Learn Python Core

  

***IDEs (Integrated Development Environments)***

  

Popular IDEs for Python are:

- [Pycharm](https://www.jetbrains.com/pycharm/)

- [VSCode](https://code.visualstudio.com/docs/languages/python)

- [Jupyterlab/ Jupyter Notebook for interactive coding](https://jupyter.org/)

  

***Important libraries:***

- `pandas`

- `numpy`

- `matplotlib`

- `sklearn` (for machine learning)

- `requests` (for working with APIs)

  

***Topics:***

- Data types

- Variables

- Typecasting

- Operators (Assignment, Logical, Arithmetic etc.)

- Conditional Statements – If else and Nested If else and elif

- Collections (Arrays) – List, Tuple, Sets and Dictionary

- List comprehension

- Loops in Python – For Loop, While Loop & Nested Loops

- String Manipulation – Basic Operations, Slicing & Functions and Methods

- User Defined Functions – Defining, Calling, Types of Functions, Arguments

- Lambda Function

- Installing & Importing Modules

#### Learn Python Intermediate

  

- Virtual Environment

- Enumerate

- Zip and unzip

- Map, Filter and Reduce

- *args and **kwargs

- Errors and exception handling

- Context Managers

- Creating Python modules

#### Learn Object Oriented Programming (OOP) in Python

(this is mostly useful for model productization and software development. I explained simply about OOP in an older [video](https://www.youtube.com/watch?v=q3gWZkQ4PjU&t=202s)).

  

- Basics of Object Oriented Programming

- Creating Class and Object

- Constructors – Parameterized and Non-parameterized

- Inheritance in Python

- In built class methods and attributes

- Multi-Level and Multiple Inheritance

- Method Overriding and Data Abstraction

- Encapsulation

- Polymorphism

--
#### Python Resources, Courses & Certificates

1. [Python for Everybody Specialization (Coursera)](https://imp.i384100.net/e4ZdXX)

2. [Applied Data Science with Python (Coursera)](https://imp.i384100.net/gbxOqv)

3. [Python Tips (Free online) - for references](https://book.pythontips.com/en/latest/index.html)

4. 📚 [Python for Data Analysis](https://amzn.to/3RPeReC)

5. [📚Automate the Boring Stuff with Python](https://automatetheboringstuff.com/)

6. [📚 Interactive Python Book (How to Think Like a Computer Scientist, Runestone Academy)](https://runestone.academy/ns/books/published/thinkcspy/index.html#)


### 🤖 R

  

#### What is it?

R is a programming language for statistical computing and graphics. It is an implementation of S language.

  

R was created by Ross Ihaka and Robert Gentleman at the university of Auckland in 1991. It’s name being inspired after the first character of its author’s name and as a playon the name of S. R is used among data miners, bioinformaticians and statisticians for data analysis and developing statistical software.

#### Learn R basics

  

***IDEs (Integrated Development Environments)***

- [RStudio](https://posit.co/download/rstudio-desktop/)

  

***Important libraries:***

- `data.table`

- `ggplot2`

- `statsmodel`

  

***Topics:***

- Data types (character, numeric, integer, logical, complex)

- Vectors

- Matrices

- Dataframe

- Conditional statements (if-else, while)

- `apply` function family

- Descriptive statistics in R

- Creating R project in RStudio

- Installing & Importing libraries


#### Learn R advanced

  

***Topics:***

- Error handling

- Lexical scoping

- Creating R packages


#### R Resources, Courses & Certificates

1. [Data Analysis with R Specialization (Coursera)](https://imp.i384100.net/P0LO9R)

2. [📚 R for Data Science (Hadley Wickham & Garrett Grolemund)](https://r4ds.had.co.nz/index.html)

3. [📚 Advanced R by Hadley Wickham](http://adv-r.had.co.nz/)

## 5.2. Data visualization

  

### What is it?

Data visualization is the representation of data through use of common graphics, such as charts, plots, infographics, and even animations. These visual displays of information communicate complex data relationships and data-driven insights in a way that is easy to understand.

  

Data visualization can be created using Python/ R, or proprietary software like Tableau and PowerBI (which are popular dashboarding tools in businesses).

  

### Popular data viz libraries in Python:

- `matplotlib`

- `bokeh`

- `plotly`

- `seaborn`

- `altair`

  

### Popular data viz libraries in R:

- `ggplot2`

- `plotly`



![[data-viz-cheatsheet-extreme-presentation-method.jpg]]

### Data Viz Resources, Courses & Certificates

  

1. [Data Visualization with Tableau Specialization (Coursera)](https://imp.i384100.net/n15XWR)

2. [PowerBI course (Codebasics)](https://codebasics.io/courses/power-bi-data-analysis-with-end-to-end-project?refId=6NBESTY1SVA9)

3. [📚 Storytelling with Data]( https://amzn.to/3EvbS83)

4. [Mistakes in Data visualization (video)](https://youtu.be/GM8nrVBFdFo)


### Data Viz Portfolio Projects

  

1. Creating an interactive Python visualization dashboard with Panel

## 5.3. Math, Probability & Statistics

  

Advanced Math & Statistics are mostly useful for machine learning and advanced statistical analyses. Don't worry if you don't cover everything :)

### 📈 Linear Algebra

  

![[linear_algebra.png]]

#### Topics:

- Basic properties of matrix and vectors:

    - scalar multiplication,

    - linear transformation,

    - transpose,

    - conjugate,

    - rank,

    - determinant

- Inner and outer products

- Matrix multiplication rule

- Matrix inverse

- Special matrices (eg.g square matrix, identity matrix, triangular matrix, idea about sparse and dense matrix, unit vectors, symmetric matrix)

- Matrix factorization concept/LU decomposition

- Gaussian/Gauss-Jordan elimination

- Solving Ax=b linear system of equation

- Vector space, basis, span, orthogonality, orthonormality, linear least square

- Eigenvalues, eigenvectors, diagonalization, singular value decomposition

  

#### Why learn Linear Algebra?

  

You might encounter linear algebra in several machine learning algorithms. For example, principle component analysis uses singular value decomposition to present your data in fewer dimensions.

  

Also, all neural network algorithms use linear algebra to present network structures and compute the network parameters.

  

#### Resources & Courses:

1. [Mathematics for Machine Learning and Data Science Specialization (Coursera + Deeplearning.ai) (first course)](https://imp.i384100.net/rnkaE3)

2. [Khan Academy - beginner friendly](https://www.khanacademy.org/math/linear-algebra)

3. [3Blue1Brown Linear Algebra series.](https://www.youtube.com/playlist?list=PLZHQObOWTQDPD3MizzM2xVFitgF8hE_ab)

4. [fast.ai Linear Algebra for coders course](https://github.com/fastai/numerical-linear-algebra/blob/master/README.md)

5. [📚 Interactive book - Explained Visually](https://setosa.io/ev/)

### 📉 Calculus

  

The mathematical study of continuous change.

  

![[calculus-school.gif]]

#### Topics:

- Limits

- Derivative of a function

- Integrals

- Partial derivatives & the chain rule

- Maxima and minima

  

#### Why learn Calculus?

Ever came across “gradient descent” method in Machine learning? This is exactly an application of calculus.

  

#### Resources & Courses:

  

1. [Mathematics for Machine Learning and Data Science Specialization (Coursera + Deeplearning.ai)](https://imp.i384100.net/kjDO4d)

2. [Khan Academy Calculus series (beginner-friendly)](https://www.khanacademy.org/math/multivariable-calculus)

3. [3Blue1Brown Calculus series](https://www.youtube.com/playlist?list=PLZHQObOWTQDMsr9K-rj53DwVRMYO3t5Yr)


### 🤔 Probability & Statistics

  

![[gambling.gif]]

#### Topics:

- Basic statistics like data summaries and descriptive statistics:

    - mean

    - mode

    - quantile

    - standard deviation

    - variance/ covariance

- Conditioinal probability (for example when you learn about Bayes theorem)

- Probability distributions

- Sampling

- Hypothesis testing

- Central Limit Theorem

  

#### Why learn Prob/ Stats?

  

Because it is the backbone of statistical learning (traditional ML).

  

#### Resources & Courses:

  

1. [An Introduction to Statistical Learning](https://www.statlearning.com/)

2. [📚 Naked Statistics - beginner friendly](https://amzn.to/3CIhwCu)

3. [Practical Statistics for Data Scientists - beginner friendly](https://amzn.to/3CF5Pws)


## 5.4. Machine learning/ Deep learning

### Topics

  

- Feature Selection

- Feature Scaling/ standardizing

- Data Resampling

    - Undersampling

    - Oversampling

- Handling missing values/ Data imputation

- Detecting outliers

- Train-set split, cross validation

- Evaluating a ML model & performance metrics

- Variety of algorithms:

![[mlalgo.png]]

  

### Machine Learning Resources

- [🤖 Machine Learning Specialization by Andrew Ng (Coursera)](https://imp.i384100.net/RyjykN)

- [🤖 Deep Learning Specialization by Andrew Ng (Coursera)](https://imp.i384100.net/zavBA0)

- [📚 Hands-On Machine Learning with Scikit-Learn, Keras, and TensorFlow](https://amzn.to/3OGASvc)

- [📚 Probabilistic Machine Learning: An Introduction (Kevin P. Murphy)](https://amzn.to/3I0DhQS)

- [📚 Deep learning book (Ian Goodfellow and Yoshua Bengio and Aaron Courville)](https://www.deeplearningbook.org/)

  

### Machine Learning Ops

- [(Free) Berkeley Full Stack Deep Learning](https://fall2019.fullstackdeeplearning.com/)

- [📚 Designing Machine Learning Systems (Chip Huyen)](https://amzn.to/3Cajv0Y)

- [📚 Machine Learning Engineering](http://www.mlebook.com/wiki/doku.php)

- [🚀 Awesome MLOps Git repo](https://github.com/visenger/awesome-mlops): This repository contains a curated list of awesome open-source libraries that will help you deploy, monitor, version, scale, and secure your production machine learning.

- [Made with ML](https://madewithml.com/#foundations): Step-by-step tutorials from machine learning to MLOps:

## 5.5. Software Development

### 📔 Git version control

  

Git, invented by Linus Torvalds in 2005, is a version control system that developers use all over the world. It helps you track different versions of your code and collaborate with other developers.

  

Note: Git is NOT equal to GitHub: Git is a version control software. GitHub is a cloud-based hosting service that lets you manage Git repositories.

  

![[git.png]]

  

#### Resources:

- [Git book](https://git-scm.com/book/en/v2/Getting-Started-About-Version-Control)

### 🎨 Coding style

  

It is a good practice to stick to a certain style guide when coding. It helps make the code more readable and easier to maintain. It also makes you look much more professional. 😉

  

- R: [Google's R style guide](https://google.github.io/styleguide/Rguide.html) - based on Tidyverse style guide

- Python: [PEP8](https://peps.python.org/pep-0008/), and [PEP484](https://peps.python.org/pep-0484/) for type hints


### 🧩 Data Structures & Algorithms (CS Fundamentals)

  

For pure data science, it is probably not necessary to learn in-depth DS&A. But when I did network analysis, I found it quite useful to know how graph data structures work and the algorithms on graphs.

  

#### Resources:

- [https://www.programiz.com/dsa]

### 🤖 Unit testing

  

Unit testing is a technique in which particular module/ function is tested to check by developer himself whether there are any errors.

  

- Learn to use `pytest` library in Python

### 🌩 Cloud platforms

  

- get to know the products and services of the popular cloud platforms

- learn to choose among and use application deployment environments

- learn to choose among and use storage options on those platforms

![[clouds.png]]

## 5.6. Other skills
