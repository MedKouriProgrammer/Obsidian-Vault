
``` tracker
searchType: tag
searchTarget: tagName
folder: /
startDate:
endDate:
summary:
    template: "Average value of tagName is {{average()}}"
    style: "color:white;"
```
``` tracker
searchType: tag
searchTarget: tagName
folder: /
startDate:
endDate:
line:
    title: "Line Chart"
    xAxisLabel: Date
    yAxisLabel: Value
```
```contributionGraph
title: Contributions
graphType: calendar
dateRangeValue: 1
dateRangeType: LATEST_YEAR
startOfWeek: 0
showCellRuleIndicators: true
titleStyle:
  textAlign: center
  fontSize: 15px
  fontWeight: normal
dataSource:
  type: PAGE
  value: "#Weekly_Taskss"
  dateField:
    type: FILE_NAME
  countField:
    type: DEFAULT
fillTheScreen: false
enableMainContainerShadow: false
cellStyleRules: []

```


```contributionGraph
title: Weekly Tasks
graphType: calendar
dateField: date  # سيقرأ التاريخ من الحقل date:: داخل الملف
query: from "01 - Projects/01 Tasks/Weekly_Tasks.md" where contains(text, "")
startOfWeek: 0
showCellRuleIndicators: true

```
```contributionGraph
title: Weekly Tasks
graphType: calendar
dateRangeType: LATEST_DAYS
dateRangeValue: 365
startOfWeek: 0
showCellRuleIndicators: true
dataSource:
  type: PAGE
  value: "[[Weekly_Taskss]]"
  dateField:
    type: FIELD
    value: date
  countField:
    type: DEFAULT
titleStyle:
  fontSize: 16px
cellStyleRules: []

```

```contributionGraph
title: Weekly Tasks
graphType: calendar
dateRangeType: FIXED_DATE_RANGE
fromDate: '2025-09-23'
toDate: '2025-09-29'
startOfWeek: 0
showCellRuleIndicators: true
color:
  start: "#d6e685"
  end: "#1e6823"
dataSource:
  type: PAGE
  value: "[[Weekly_Tasks]]"
  dateField:
    type: FIELD
    value: date
  countField:
    type: DEFAULT
    
```


```contributionGraph
title: Contributions
graphType: calendar
dateRangeValue: 1
dateRangeType: LATEST_DAYS
startOfWeek: "1"
showCellRuleIndicators: true
titleStyle:
  textAlign: left
  fontSize: 15px
  fontWeight: normal
dataSource:
  type: PAGE
  value: "#2025-09-26"
  dateField:
    type: FILE_NAME
fillTheScreen: false
enableMainContainerShadow: false
cellStyle:
  minWidth: 4px
  borderRadius: ""
cellStyleRules: []

```

