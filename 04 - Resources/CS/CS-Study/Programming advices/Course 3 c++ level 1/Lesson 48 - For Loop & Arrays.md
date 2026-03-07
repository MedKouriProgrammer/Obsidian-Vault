---
date: 2025-03-09T14:20
tags:
  - Resources/Articles
---
Resource: [Title Unavailable \| Site Unreachable](https://www.youtube.com/watch?v=Sq1hLzNdyeQ&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=56)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[For Loop & Arrays]]
___
# Summary 

---
# Highlights & Notes

- # [[For Loop & Arrays]].
- ## Input
```cpp
#include <iostream>
using namespace std;

void ReadArrayData(int Arr1[100], int& Length)
{


	cout << "How Many Numbers do you want to enter? 1 to 100?\n";
	cin >> Length;

	for (int i = 0; i <= Length - 1; i++)
	{

		cout << "Please enter Number " << i + 1 << endl;
		cin >> Arr1[i];

	}

}

void PrintArrayData(int Arr1[100], int Length)
{

	cout << "\nArray Data...\n";

	for (int i = 0; i <= Length - 1; i++)
	{

		cout << "Number [" << i + 1 << "] : " << Arr1[i] << endl;

	}

}

int CalculateArraySum(int Arr1[100], int Length)
{
	int Sum = 0;

	for (int i = 0; i <= Length - 1; i++)
	{
		Sum += Arr1[i];

	}

	return Sum;

}

float CalculateArrayAverage(int Arr1[100], int Length)
{
	return  (float)CalculateArraySum(Arr1, Length) / Length;
}

int main()


{
	int Arr1[100], Length = 0;
	ReadArrayData(Arr1, Length);
	PrintArrayData(Arr1, Length);

	cout << "\n************************************\n";
	cout << "Sum = " << CalculateArraySum(Arr1, Length) << endl;
	cout << "Average = " << CalculateArrayAverage(Arr1, Length) << endl;

	return 0;
}
```
## output
```cpp
How Many Numbers do you want to enter? 1 to 100?
3
Please enter Number 1
55
Please enter Number 2
88
Please enter Number 3
90

Array Data...
Number [1] : 55
Number [2] : 88
Number [3] : 90

************************************
Sum = 233
Average = 77.6667
```
# How the code works.
هذا الكود عبارة عن برنامج بلغة C++ يقوم بما يلي:

قراءة مجموعة من الأعداد من المستخدم وتخزينها في مصفوفة.

طباعة الأعداد المدخلة.

حساب مجموع الأعداد.

حساب متوسط الأعداد.

شرح تفصيلي للبرنامج

1. تعريف الدوال

✅ دالة ReadArrayData

تأخذ مصفوفة Arr1[100] كمدخل لتخزين الأرقام، ومتغير Length لحفظ عدد الأرقام المدخلة.

تسأل المستخدم عن عدد الأرقام التي يريد إدخالها (بين 1 و100).

تستخدم حلقة for لقراءة الأرقام وإدخالها في المصفوفة.

✅ دالة PrintArrayData

تأخذ المصفوفة Arr1[100] و Length كمدخلات.

تطبع الأرقام المخزنة في المصفوفة باستخدام for loop.

✅ دالة CalculateArraySum

تحسب مجموع عناصر المصفوفة باستخدام for loop.

✅ دالة CalculateArrayAverage

تستدعي CalculateArraySum لحساب المجموع ثم تقسمه على Length للحصول على المتوسط.

يتم تحويل Sum إلى float لضمان عدم حدوث قسمة عدد صحيح على عدد صحيح.

2. دالة main

تعرّف المصفوفة Arr1[100] والمتغير Length.

تستدعي ReadArrayData لقراءة البيانات.

تستدعي PrintArrayData لعرض البيانات المدخلة.

تطبع المجموع (Sum) والمتوسط (Average).

كيف يعمل الكود عمليًا؟

مثلاً، عند تشغيل البرنامج وإدخال القيم التالية:
How Many Numbers do you want to enter? 1 to 100? 3 Please enter Number 1 10 Please enter Number 2 20 Please enter Number 3 30 
ستكون المخرجات:
Array Data... Number [1] : 10 Number [2] : 20 Number [3] : 30 ************************************ Sum = 60 Average = 20 

أهم الملاحظات

يستخدم Length - 1 في الحلقات لأن المصفوفات تبدأ من الفهرس 0.

يجب التأكد من أن Length لا تتجاوز 100 حتى لا يحدث تجاوز للذاكرة.

التحويل (float) يضمن الحصول على ناتج دقيق عند حساب المتوسط.

إذا كان لديك أي استفسار إضافي، أخبرني بذلك!
