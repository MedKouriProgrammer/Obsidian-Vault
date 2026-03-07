---
date: 2025-03-03T15:18
tags:
  - Resources/Articles
---
Resource: [Lesson #29 - Nested Structures and Enums - Full Practical Example - YouTube](https://www.youtube.com/watch?v=LV2zF4CG-WA&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=35)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[combine between structure & enums]]
___
# Summary 

---
# Highlights & Notes

- # How to combine between [[Structure]] & [[enum]].

- ## input
```cpp
#include <iostream>
using namespace std;

enum encolore{red,green,yellow};
enum engender{male,female};
enum enstatus{single,married};

struct stadresse
{
	string streetname;
	int street_number;
};
struct stcontact_info
{
	string phone;
	string car;
	stadresse adresse;
};
struct stpersone
{
	string name;
	int age;
	int m_salery;
	int y_saleery;
	stcontact_info contact_info;
	encolore colore;
	engender gender;
	enstatus status;
};
int main()
{
	stpersone persone;

	

	persone.contact_info.adresse.streetname = "machrou3";
	persone.contact_info.adresse.street_number = 44;
	persone.contact_info.phone = "06272658";
	persone.contact_info.car = "ferari";
	persone.colore = encolore::green;
	persone.gender = engender::male;
	persone.status = enstatus::single;
	persone.m_salery = 5000;
	persone.y_saleery = 21.398;

	cout << persone.contact_info.phone << endl;

	return 0;
}

```