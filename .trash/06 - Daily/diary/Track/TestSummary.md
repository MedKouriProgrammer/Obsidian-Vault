---
created: 2023-03-16T00:24
updated: 2024-06-08T22:29
---
# Test Summary

## Multiple Lines

``` tracker
searchType: tag
searchTarget: weight
folder: diary
summary:
    template: "Minimum: {{min()}}kg\nMaximum: {{max()}}kg\nMedian: {{median()}}kg\nAverage: {{average()}}kg"
```

## Styling

``` tracker
searchType: text
searchTarget: ⭐
folder: diary
summary:
    template: "I have {{sum()}} stars in total."
    style: "font-size:20px;color:yellow;margin-left: 50px;margin-top:00px;"
```

## Using Expressions

Please check [expression examples](https://github.com/pyrochlore/obsidian-tracker/blob/master/examples/TestExpression.md) for more examples.