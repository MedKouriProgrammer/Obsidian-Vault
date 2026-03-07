---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource:
Author: "[[Alzero Wep School]]"
topic: "[[141 - Web Scraping – Control Browser With Selenium]]"
---
> [!summary]-
> 

# <font color="#646a73">141 - Web Scraping – Control Browser With Selenium</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ---------------------------------------------------
# -- Web Scraping => Control Browser With Selenium --
# ---------------------------------------------------
# - Control Browser With Selenium For Automated Testing
# - Download File From The Internet
# - Subtitle Download And Add On Your Movies [ Many Modules ]
# - Get Quotes From Websites
# - Get Gold and Currencies Rate
# - Get News From Websites
# - --------------------------------------------

from selenium import webdriver
from webdriver_manager.chrome import ChromeDriverManager

browser = webdriver.Chrome(ChromeDriverManager().install())

browser.get("https://elzero.org")

browser.find_element_by_css_selector(".search-field").send_keys("Front-End Developer")

browser.find_element_by_css_selector(".search-submit").click()

browser.find_element_by_css_selector(".all-search-posts .search-post:first-of-type h3 a").click()

browser.implicitly_wait(5)

views_count = browser.find_element_by_css_selector(".z-article-info .z-info:last-of-type span:last-child")

browser.implicitly_wait(5)

print(views_count.get_attribute('innerHTML'))

browser.quit()
```
Output:
```

```