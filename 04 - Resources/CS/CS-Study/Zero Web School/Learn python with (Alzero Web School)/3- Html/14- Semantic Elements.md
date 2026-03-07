---
creation_date: 2025-12-28
tags:
  - Resources/Articles
Resource: https://elzero.org/html-semantic-elements/
Author: "[[Alzero Wep School]]"
---
> [!summary]-
> 

# <font color="#646a73">Semantic Elements</font>
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
    <header>Head Of Website</header>
    <nav>Link - Link - Link</nav>
    <section>
      <section></section>
      <aside></aside>
    </section>
    <footer>Footer</footer>
  </body>
</html>
```
---
تمام 👌  
سأشرح **Semantic Elements** شرحًا **بسيطًا وواضحًا**، خطوة خطوة، وبأمثلة سهلة.

---

## أولًا: ما معنى Semantic؟

**Semantic** = له معنى

يعني:

> الوسم لا يحدد الشكل فقط، بل **يشرح معنى المحتوى**

---

## قبل Semantic (الطريقة القديمة)

كنا نكتب هكذا:

```html
<div class="header">...</div>
<div class="nav">...</div>
<div class="content">...</div>
<div class="footer">...</div>
```

✔ تعمل  
❌ لكن المتصفح لا يفهم المعنى الحقيقي

---

## بعد Semantic (الطريقة الصحيحة)

```html
<header>...</header>
<nav>...</nav>
<main>...</main>
<footer>...</footer>
```

✔ أوضح  
✔ أفضل لمحركات البحث  
✔ أسهل للمبرمج

---

## لماذا Semantic Elements مهمة؟

1. تجعل الكود **مفهومًا**
    
2. تساعد **Google** في فهم الصفحة
    
3. مفيدة لذوي الاحتياجات الخاصة
    
4. تنظّم الصفحة بشكل احترافي
    

---

## أهم Semantic Elements (واحد واحد)

---

### 1️⃣ `<header>`

```html
<header>
  <h1>Book Store</h1>
</header>
```

- رأس الصفحة أو القسم
    
- يحتوي:
    
    - عنوان
        
    - شعار
        
    - أزرار
        

---

### 2️⃣ `<nav>`

```html
<nav>
  <a href="#">Home</a>
  <a href="#">Books</a>
</nav>
```

- قائمة التنقل
    
- روابط رئيسية فقط
    

---

### 3️⃣ `<main>`

```html
<main>
  محتوى الصفحة الرئيسي
</main>
```

- أهم محتوى في الصفحة
    
- لا يتكرر
    

---

### 4️⃣ `<section>`

```html
<section>
  <h2>Romantic Books</h2>
</section>
```

- قسم منطقي
    
- يحتوي عنوان غالبًا
    

---

### 5️⃣ `<article>`

```html
<article>
  <h3>Book Title</h3>
  <p>Description</p>
</article>
```

- محتوى مستقل
    
- يصلح أن يُعرض وحده
    

---

### 6️⃣ `<aside>`

```html
<aside>
  Ads / Links / Side Content
</aside>
```

- محتوى جانبي
    
- غير أساسي
    

---

### 7️⃣ `<footer>`

```html
<footer>
  © 2025 Book Store
</footer>
```

- ذيل الصفحة
    
- حقوق، روابط، معلومات
    

---

## مقارنة سريعة 🧠

|قديم|Semantic|
|---|---|
|`div`|`header`|
|`div`|`nav`|
|`div`|`section`|
|`div`|`footer`|

---

## مثال كامل بسيط

```html
<body>

<header>
  <h1>Book Store</h1>
</header>

<nav>
  <a href="#">Home</a>
  <a href="#">Books</a>
</nav>

<main>

  <section>
    <h2>Romantic</h2>
    <article>Book 1</article>
    <article>Book 2</article>
  </section>

</main>

<footer>
  © All Rights Reserved
</footer>

</body>
```

---

## متى أستخدم `div`؟

استخدم `div` فقط عندما:

- لا يوجد وسم معنوي مناسب
    
- للتجميع فقط
    

---

## ملخص نهائي ⭐

- Semantic = معنى
    
- تجعل HTML ذكيًا
    
- أفضل للترتيب و SEO
    
- `div` ليس خطأ، لكن ليس دائمًا الأفضل
    

---

🎯 الآن أنت فهمت **Semantic Elements**.

لو تحب:

- نعيد نفس مثال الكتب باستخدام Semantic
    
- أو نعمل تمرين صغير
    
- أو ننتقل لمرحلة CSS
    

قل لي ماذا تحب نكمل 😊
---
![[2025-12-29.png]]