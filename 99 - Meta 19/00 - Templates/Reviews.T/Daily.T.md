---
publish: false
aliases: 
mood: 
date: <%tp.date.now("YYYY-MM-DD")%>T<%tp.date.now("HH:mm")%>
Tags: Journal📆/Daily 
cssclasses:
  - daily
  <% "- " + tp.date.now("dddd", 0, tp.file.title, "YYYYMMDD").toLowerCase() %>
---
Links: [[+Daily]]
___
# <% tp.file.title %>
[[<% moment(tp.file.title,'YYYY-MM-DD').add(-1,'days').format("YYYY-MM-DD") %>]] | [[<% tp.date.weekday("YYYY-[W]ww", 0) %>]] | [[<% moment(tp.file.title,'YYYY-MM-DD').add(1,'days').format("YYYY-MM-DD") %>]]

<< <% moment(tp.file.title,'YYYY-MM-DD').add(0,'days').format("dddd") %> >>

---
## Day Quote
<% tp.web.daily_quote() %>

---
# [[My day routine|DAY ROUTINE ]]
---
# 3 things I'm grateful for
- 
- 
- 
---
# To Do
1. [ ] <font color=" #ff0000 ">🧑‍💻 CS</font>
2. [ ] <font color="#ff0000">🇺🇸 EN</font>
3. [ ] 🤸‍♂️ **==CT==**
---
# Highlight of the day
- 
