---
created: 2023-03-16T00:58
updated: 2024-06-08T22:29
---
# Test Commands

``` tracker
searchType: tag
searchTarget: weight
folder: /
startDate: 2021-01-01
endDate: 2021-01-31
line:
    title: "Line Chart"
    xAxisLabel: Date
    yAxisLabel: Value
```


``` tracker
searchType: tag
searchTarget: weight
folder: /
startDate: 2021-01-01
endDate: 2021-01-31
bar:
    title: "Bar Chart"
    xAxisLabel: Date
    yAxisLabel: Value
```


``` tracker
searchType: tag
searchTarget: weight
folder: /
startDate: 2021-01-01
endDate: 2021-01-31
summary:
    template: "Average value of tagName is {{average()}}"
    style: "color:white;"
```