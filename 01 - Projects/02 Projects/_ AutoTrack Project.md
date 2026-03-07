---
tags: Projects
alias:
  - AutoTrack Project
status: In Progress
subtitle: For demo.
created: 2023-03-08T14:11
updated: 2024-06-08T22:29
---
%%
Goal:: [[2022-07-25 - AutoTracking test|AutoTracking test]]
Bar:: `$= dv.view('total-progress-bar', {file: "; AutoTrack Project"})`
%%

`$= dv.view('total-progress-bar', {file: "; AutoTrack Project", alignLeft: true})`
# AutoTrack Project

## Project Info

## Thoughts 

## Resources

## Review questions

## Tasks
- [ ] 1
- [x] 2
- [ ] 3
- [x] d


```dataview
list
WHERE any(map(file.tasks, (task) => !task.completed))
```