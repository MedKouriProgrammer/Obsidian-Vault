---
Status: 
Tags: Journal📆/Quaterly
creation_date: <%tp.date.now("YYYY-MM-DD")%>T<%tp.date.now("HH:mm")%>
---
Links: [[Quarterly Reviews]]
___
# QUARTERLY Review

```calendar-nav
mode: quarter
```

For the quarter of {{date:YYYY-[Q]Q}}
<% tp.date.now("YYYY-MM-DD [Q]Q", "P-3M") %> 
<% tp.date.now("YYYY-MM-DD [Q]Q") %> 
<% tp.date.now("YYYY-MM-DD [Q]Q", "P3M") %> 

- [ ] Remind yourself about the plans in higher-view reviews

> “Your decisions about allocating your personal time, energy, and talent ultimately shape your life’s strategy.”
## Months
```dataview
table Sentence, Happiness, Productivity, Relationships, Focus
from [[monthlyReview]] AND [[Math assignment]]
sort file.name asc
```
