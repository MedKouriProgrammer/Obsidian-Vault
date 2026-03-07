```python
Title_Div = countainer.select_one("div.et-grid-product-name a[title]")

Clean_Title = Title_Div["title"]

Price_Div = countainer.select_one("div.et-price")

Price_Digit = Price_Div.select("span.ty-price-num")[0].text

Price_Country = Price_Div.select("span.ty-price-num")[1].text
```