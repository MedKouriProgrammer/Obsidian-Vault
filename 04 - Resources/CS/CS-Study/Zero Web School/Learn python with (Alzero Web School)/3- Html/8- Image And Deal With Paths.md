---
creation_date: 2025-12-28
tags:
  - Resources/Articles
Resource: https://elzero.org/html-image-and-deal-with-paths/
Author: "[[Alzero Wep School]]"
---
> [!summary]-
> 

# <font color="#646a73">Image And Deal With Paths</font>
---
### Input:
```html
<!doctype html>
<html>
  <head>
    <meta charset="UTF-8" />
    <title>Book Store</title>
    <meta name="description" content="This Is Our Book Store" />
  </head>
  <body>
    <!--
      src => Source
      alt => Alternate Text
     -->
    <h1>Book Store</h1>
    <p>This Is My <b>Book Store</b>, Welcome</p>
    <img decoding="async"
      src="https://elzero.org/wp-content/uploads/2018/06/cover-speed-website.png"
      alt=""
      width="200px"
      height="200px">
    <img decoding="async" src="imgs/home/cover-speed-website.png" alt="">
    <img decoding="async" src="../cover-speed-website.png" alt="Will Not Show">
    <img decoding="async" src="missing-image.png" alt="Logo Testing">
  </body>
</html>
```