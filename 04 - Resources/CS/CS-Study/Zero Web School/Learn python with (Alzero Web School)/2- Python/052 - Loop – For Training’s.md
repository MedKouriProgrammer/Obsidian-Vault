---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=4YolrVX6f1Q&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=51
Author: "[[Alzero Wep School]]"
topic: "[[052 - Loop – For Training’s]]"
---
> [!summary]-
> 

# <font color="#646a73">052 - Loop – For Training’s</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# -----------------
# -- Loop => For --
# --  Trainings  --
# -----------------

# Range

myRange = range(1, 101)

for number in myRange:

  print(number)

# Dictionary

mySkills = {
  "Html": "90%",
  "Css": "60%",
  "PHP": "70%",
  "JS": "80%",
  "Python": "90%",
  "MySQL": "60%"
}

print(mySkills['JS'])
print(mySkills.get("Python"))

for skill in mySkills:

  # print(skill)

  print(f"My Progress in Lang {skill} Is: {mySkills.get(skill)}")
```
Output:
```
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
80%
90%
My Progress in Lang Html Is: 90%
My Progress in Lang Css Is: 60%
My Progress in Lang PHP Is: 70%
My Progress in Lang JS Is: 80%
My Progress in Lang Python Is: 90%
My Progress in Lang MySQL Is: 60%
```