تمام 👍  
هذا **شرح شامل وكامل لمكتبة `schedule`** من **الصفر → الاحتراف**، وبأسلوب **مبرمج أتمتة عملي** (وليس شرحًا نظريًا فقط).

---

# ما هي `schedule` ؟

`schedule` هي **مكتبة Python** تُستخدم لـ:

> **تشغيل مهام (Functions) في أوقات محددة أو بشكل متكرر**

📌 هي بديل بسيط لـ:

- `cron` (في لينكس)
    
- Task Scheduler (في ويندوز)
    

لكن **داخل بايثون وبسهولة كبيرة**

---

## الفرق بينها وبين `time`

|المكتبة|ماذا تفعل|
|---|---|
|`time.sleep()`|يوقف التنفيذ فقط|
|`datetime`|حساب التاريخ والوقت|
|`schedule`|يقرر _متى_ ينفّذ الكود|

❌ `time` ≠ جدولة  
✅ `schedule` = جدولة حقيقية

---

# تثبيت المكتبة

`schedule` **ليست built-in**

```bash
pip install schedule
```

ثم:

```python
import schedule
```

---

# الفكرة الأساسية لـ `schedule`

أي جدولة تتكوّن من 3 أشياء:

1️⃣ مهمة (function)  
2️⃣ توقيت  
3️⃣ Loop يشغّل الجدولة

---

## أبسط مثال ممكن

```python
import schedule
import time

def job():
    print("Hello Automation")

schedule.every(5).seconds.do(job)

while True:
    schedule.run_pending()
    time.sleep(1)
```

📌 بدون `while True` → **schedule لا تعمل**

---

# أنواع الجدولة بالتفصيل

---

## ⏱️ 1️⃣ بالثواني

```python
schedule.every(10).seconds.do(job)
```

---

## ⏰ 2️⃣ بالدقائق

```python
schedule.every(5).minutes.do(job)
```

---

## 🕒 3️⃣ بالساعات

```python
schedule.every().hour.do(job)
schedule.every(2).hours.do(job)
```

---

## 📅 4️⃣ بالأيام

```python
schedule.every().day.do(job)
```

---

## 🕘 5️⃣ وقت محدد في اليوم

```python
schedule.every().day.at("10:30").do(job)
```

⚠️ الصيغة **HH:MM**

---

## 📆 6️⃣ أيام الأسبوع

```python
schedule.every().monday.do(job)
schedule.every().friday.at("18:00").do(job)
```

---

# تمرير بيانات إلى المهمة

```python
def send_email(name):
    print(f"Email sent to {name}")

schedule.every().day.do(send_email, "Ziko")
```

---

# تشغيل أكثر من مهمة

```python
schedule.every(5).seconds.do(job)
schedule.every().hour.do(job2)
schedule.every().day.at("09:00").do(job3)
```

`schedule` تديرهم تلقائيًا 👌

---

# إيقاف مهمة

```python
job = schedule.every(10).seconds.do(my_job)
schedule.cancel_job(job)
```

---

# إيقاف كل المهام

```python
schedule.clear()
```

---

# معرفة المهام المسجلة

```python
print(schedule.jobs)
```

---

# التحكم الاحترافي في الـ Loop

❌ خطأ شائع:

```python
while True:
    schedule.run_pending()
```

✅ الأفضل:

```python
while True:
    schedule.run_pending()
    time.sleep(1)
```

📌 يقلل استهلاك المعالج

---

# مثال أتمتة حقيقي 🔥

### نسخ احتياطي يومي

```python
import schedule
import time
import shutil

def backup():
    shutil.copy2("data.db", "backup/data.db")
    print("Backup Done")

schedule.every().day.at("02:00").do(backup)

while True:
    schedule.run_pending()
    time.sleep(60)
```

---

# استخدام `schedule` مع `try / except`

```python
def job():
    try:
        print("Running job")
    except Exception as e:
        print("Error:", e)
```

📌 مهم جدًا في الإنتاج

---

# متى لا تستعمل `schedule`؟

❌ لو:

- البرنامج يجب أن يعمل حتى بعد إغلاقه
    
- النظام يعيد التشغيل
    
- سكربت طويل جدًا
    

📌 هنا تستعمل:

- cron
    
- Windows Task Scheduler
    

---

# مقارنة مهمة

|feature|schedule|cron|
|---|---|---|
|سهل|✅|❌|
|Python|✅|❌|
|يحتاج terminal مفتوح|✅|❌|
|production server|❌|✅|

---

# أخطاء شائعة ❌

1️⃣ نسيان `while True`  
2️⃣ نسيان `time.sleep()`  
3️⃣ توقيت خاطئ (`"25:00"`)  
4️⃣ سكربت ثقيل داخل job  
5️⃣ استخدامه بدل cron في السيرفر

---

# Best Practices (احتراف)

✅ كل job تكون function  
✅ لا تضع كود طويل داخل loop  
✅ استخدم logging  
✅ اجعل السكربت خفيف  
✅ تأكد من التوقيت (timezone)

---

# هل `schedule` ضرورية لك؟

🔵 كمبرمج أتمتة:

> **نعم، ضرورية جدًا**

ستستعملها في:

- backups
    
- bots
    
- cleaners
    
- monitors
    
- automation scripts
    

---

# خلاصة نهائية 🧠

- `schedule` = **قلب الجدولة في Python**
    
- سهلة لكنها قوية
    
- ليست بديلًا للـ cron
    
- ممتازة للأتمتة المحلية والسكربتات
    

---

## الخطوة التالية لك 🚀

لكي تكون **احترافيًا فعلًا**:  
1️⃣ `schedule` ✔️  
2️⃣ `shutil` ✔️  
3️⃣ `pathlib`  
4️⃣ `logging`  
5️⃣ مشاريع حقيقية

---

لو تحب:

- 🔹 مشروع تطبيقي بـ `schedule`
    
- 🔹 دمج `schedule + shutil`
    
- 🔹 مقارنة احترافية مع cron
    
- 🔹 تمارين مع حلول
    

قلّي ماذا تريد وأنا أبدأ فورًا 💪