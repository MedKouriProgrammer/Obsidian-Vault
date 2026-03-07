---
tags:
publish: false
aliases:
aliases:
created:
updated:
---

# Annual Review:

[[2014-Y]] <== <button class='date_button_today'>This Month</button> ==> [[2016-Y]]

## Aliases

```dataview
TABLE aliases
FROM "Journal"
WHERE aliases != null
WHERE length(aliases) > 1
WHERE file.day.year = 2015
```

## Highlights

```dataview
TABLE WITHOUT ID dateformat(file.ctime, "yyyy-MM") AS Month, file.day.weekyear AS Week, highlights
FROM "Journal"
WHERE highlights != null
WHERE file.day.year = 2015
SORT file.day.weekyear
```







---
Links: [[Yearly Reviews]]
___
# Math assignment
[[2024]] | [[2025]] | [[2026]]


## Quarters
```dataview
table Sentence, Happiness, Productivity, Relationships, Focus
from [[quaterlyReview]] AND [[2023-02-21.png]]
sort file.name asc
```
 