تمام 👍  
سأشرح لك **`shutil` شرحًا كاملًا ومنظّمًا** من **الصفر → الاحتراف**، وبأسلوب **مبرمج أتمتة** لا أسلوب درس نظري.

---

# ما هي `shutil` ؟

`shutil` هي **مكتبة قياسية في بايثون** (built-in)  
اسمها اختصار لـ **Shell Utilities**

📌 وظيفتها:

> **التعامل مع الملفات والمجلدات على مستوى عالي**  
> (نسخ – نقل – حذف – ضغط – تفريغ – نسخ مجلدات كاملة)

---

## لماذا `shutil` مهمة جدًا؟

لأن:

- `open()` → يتعامل مع **ملف واحد**
    
- `os` → يتعامل مع **النظام**
    
- `shutil` → يتعامل مع **الملفات والمجلدات ككيانات كاملة**
    

🔥 **أي أتمتة حقيقية = shutil**

---

# أهم استخدامات `shutil` (مع أمثلة)

---

## 1️⃣ نسخ ملف — `copy()`

```python
import shutil

shutil.copy("data.txt", "backup/data.txt")
```

✔️ ينسخ:

- محتوى الملف
    
- الصلاحيات (permissions)
    

📌 لا ينسخ metadata كامل

---

## 2️⃣ نسخ ملف مع كل المعلومات — `copy2()`

```python
shutil.copy2("data.txt", "backup/data.txt")
```

✔️ ينسخ:

- المحتوى
    
- الصلاحيات
    
- وقت التعديل
    
- metadata
    

📌 **الأفضل في النسخ الاحتياطي**

---

## 3️⃣ نسخ مجلد كامل — `copytree()`

```python
shutil.copytree("project", "project_backup")
```

✔️ ينسخ:

- المجلد
    
- كل الملفات
    
- كل المجلدات الفرعية
    

❌ يعطي خطأ إذا كان الهدف موجودًا

🔧 حل:

```python
shutil.copytree("project", "project_backup", dirs_exist_ok=True)
```

---

## 4️⃣ نقل ملف أو مجلد — `move()`

```python
shutil.move("report.pdf", "archive/report.pdf")
```

✔️ يعمل كـ:

- cut + paste
    
- rename
    

📌 لو نفس المسار → Rename

---

## 5️⃣ حذف مجلد كامل — `rmtree()`

```python
shutil.rmtree("old_logs")
```

⚠️ **خطر جدًا**

- لا سلة مهملات
    
- لا رجوع
    

📌 المحترفون يستعملونه بحذر شديد

---

## 6️⃣ ضغط مجلد — `make_archive()`

```python
shutil.make_archive("backup", "zip", "project")
```

ينشئ:

```
backup.zip
```

✔️ يدعم:

- zip
    
- tar
    
- gztar
    

---

## 7️⃣ فك الضغط — `unpack_archive()`

```python
shutil.unpack_archive("backup.zip", "extracted")
```

---

## 8️⃣ معرفة مساحة القرص — `disk_usage()`

```python
usage = shutil.disk_usage("C:/")

print(usage.total)
print(usage.used)
print(usage.free)
```

📌 مفيد في:

- مراقبة السيرفرات
    
- منع امتلاء القرص
    

---

## 9️⃣ نسخ محتوى ملف إلى ملف — `copyfile()`

```python
shutil.copyfile("a.txt", "b.txt")
```

❌ لا ينسخ صلاحيات  
✔️ سريع

---

# مقارنة سريعة (مهمة جدًا)

|الوظيفة|open|os|shutil|
|---|---|---|---|
|قراءة ملف|✅|❌|❌|
|كتابة ملف|✅|❌|❌|
|نسخ ملف|❌|❌|✅|
|نسخ مجلد|❌|❌|✅|
|حذف مجلد|❌|⚠️|✅|
|نقل ملفات|❌|⚠️|✅|
|Backup|❌|❌|✅|

---

# مثال أتمتة حقيقي 🔥

### تنظيم الملفات حسب الامتداد

```python
import os
import shutil

source = "Downloads"

for file in os.listdir(source):
    if file.endswith(".pdf"):
        shutil.move(f"{source}/{file}", "PDFs")
    elif file.endswith(".jpg"):
        shutil.move(f"{source}/{file}", "Images")
```

📌 هذا **مشروع سوق حقيقي**

---

# أخطاء شائعة يجب تجنبها ❌

1️⃣ حذف مجلد بدون تأكد:

```python
shutil.rmtree("/")
```

2️⃣ نسيان التحقق من وجود الملف  
3️⃣ استعمال `copytree` بدون فهم  
4️⃣ عدم استخدام `os.path.exists`

---

# أفضل الممارسات (احتراف)

```python
import os
import shutil

if os.path.exists("data.txt"):
    shutil.copy2("data.txt", "backup/data.txt")
```

✔️ تحقق دائمًا  
✔️ لا تحذف مباشرة  
✔️ استعمل logging

---

# هل `shutil` وحدها كافية؟

❌ لا  
لكن مع:

- `os`
    
- `pathlib`
    
- `schedule`
    
- `logging`
    

🔥 تصبح **Automation Developer حقيقي**

---

# خلاصة نهائية 🧠

- `shutil` = **قلب أتمتة الملفات**
    
- بدونها = سكربتات بسيطة
    
- معها = مشاريع + Freelance + Production
    

---

إذا تحب:

- 🔹 خريطة حفظ `shutil`
    
- 🔹 مشروع تطبيقي كامل
    
- 🔹 تمارين + حلول
    
- 🔹 مقارنة `shutil` vs `pathlib`
    

اختر وسأكمل معك خطوة بخطوة 💪