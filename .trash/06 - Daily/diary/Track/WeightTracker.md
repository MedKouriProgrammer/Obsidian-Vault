---
created: 2023-03-16T00:24
updated: 2024-06-08T22:29
---
# Weight Tracker

``` tracker
searchType: tag
searchTarget: weight
folder: diary
startDate: 2021-01-01
endDate: 2021-01-31
line:
    title: Weight Log
    yAxisLabel: Weight
    yAxisUnit: kg
    lineColor: yellow
```

## Summary
``` tracker
searchType: tag
searchTarget: weight
folder: diary
summary:
    template: "Minimum: {{min()}}kg\nMaximum: {{max()}}kg\nMedian: {{median()}}kg\nAverage: {{average()}}kg"
```

``` tracker
searchType: tag
searchTarget: weight
folder: diary
line:
    title: Weight Log
    yAxisLabel: Weight
    yAxisUnit: kg
    showPoint: false
    lineColor: "#b16286"
```

Please also check those search targets in markdown files under folder 'diary'.









