---
creation date: <% tp.file.creation_date() %>
modification date: <% tp.file.last_modified_date("dddd Do MMMM YYYY HH:mm:ss") %>
Status:
Cover:
Tags: Journal📆/Weekly
videos: <% tp.file.cursor(0) %>
Enjoyment:
---
# WEEKLY NOTE
---
Links: [[Weekly..]]
___
# <% tp.file.title %>
[[<% tp.date.weekday("YYYY-[W]ww", -7) %>]] | [[<% tp.date.now("Y-[M]MM") %>]] | [[<% tp.date.weekday("YYYY-[W]ww", 7) %>]]

## Week Quote
<% tp.web.daily_quote() %>
# Summary of this Week - <% tp.date.weekday("YYYY-MM-DD", 0) %> to <% tp.date.weekday("YYYY-MM-DD", 6) %>

## Week Notes
- [[<% tp.date.weekday("YYYY-MM-DD", 0) %>]]
- [[<% tp.date.weekday("YYYY-MM-DD", 1) %>]]
- [[<% tp.date.weekday("YYYY-MM-DD", 2) %>]]
- [[<% tp.date.weekday("YYYY-MM-DD", 3) %>]]
- [[<% tp.date.weekday("YYYY-MM-DD", 4) %>]]
- [[<% tp.date.weekday("YYYY-MM-DD", 5) %>]]
- [[<% tp.date.weekday("YYYY-MM-DD", 6) %>]]
---
# Summary of the Weekly
- 
