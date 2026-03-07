---
creation_date: 2025-12-28
tags:
  - Resources/Articles
Resource: https://elzero.org/html-form-part2-required-placeholder-value/
Author: "[[Alzero Wep School]]"
---
> [!summary]-
> 

# <font color="#646a73">Form Part 2 – Required, Placeholder, Value</font>
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
    <div>
      <h1>Book Store</h1>
      <p>This Is My Book Store, Welcome</p>
    </div>
    <form>
      <div>
        <label>Username</label>
        <input type="text" required placeholder="Username">
      </div>
      <br>
      <div>
        <label>Subject</label>
        <input type="text">
      </div>
      <br>
      <div>
        <label>Password</label>
        <input type="password" required placeholder="Write A Complex Password">
      </div>
      <br>
      <div>
        <label>Email</label>
        <input type="email" required placeholder="Write A Valid Email" value="o@nn.sa">
      </div>
      <input type="submit" value="Save">
    </form>
  </body>
</html>
```