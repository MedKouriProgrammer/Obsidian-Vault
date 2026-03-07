---
date: 2025-03-07T14:16
tags:
  - Resources/Articles
---
Resource: [Lesson #41 - Arrays of Structure - YouTube](https://www.youtube.com/watch?v=fKrO5FiMLxw&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=48)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Arrays of Structure]]
___
# Summary 

---
# Highlights & Notes

- # How I can collect between structure and array.

## Input
```cpp
#include<iostream>
using namespace std;

struct info
{
	string name;
	int age;
	string contry;
};
int main()
{
	info persone[2];
	persone[0].name = "zakaria";
	persone[0].age = 21;
	persone[0].contry = "morocco";

	persone[1].name = "ahmed";
	persone[1].age = 20;
	persone[1].contry = "morroco";

	cout << "his name is " << persone[0].name << " the other persone is " << persone[1].name << endl;
	return 0;
}
```
## output 
```cpp
his name is zakaria the other persone is ahmed
```
---
# New let’s collect between [[Structure]] & [[arrays]] & [[functions & procedures]].
## Link of homework :[✂️ homework - YouTube](https://youtube.com/clip/UgkxzwEs3P9vsfNIytz0kyaGxgkaG96G0J1q?si=AaWwK03bq8SCeZbY)
## Input
```cpp
#include<iostream>
using namespace std;

struct strinfo
{
	string firstname;
	string lastname;
	int age;
	string phone;
};
void readinfo(strinfo& info)
{
	cout << "enter first name\n";
	cin >> info.firstname;
	cout << "and lastname\n";
	cin >> info.lastname;
	cout << "and age\n";
	cin >> info.age;
	cout << "and phone number\n";
	cin >> info.phone;
	cout << "**************************************\n";
}
void printinfo(strinfo info)
{
	cout << "*****************************************\n";
	cout << "firstname is " << info.firstname << "\n";
	cout << "lastname is " << info.lastname << "\n";
	cout << "age is " << info.age << "\n";
	cout << "phone : " << info.phone << "\n";
	cout << "*****************************************\n";
}
void read_personinfo(strinfo persone[2])
{
	readinfo(persone[0]);
	readinfo(persone[1]);
}
void print_personeinfo(strinfo persone[2])
{
	cout << "******************************\n";
	printinfo(persone[0]);
	printinfo(persone[1]);
	cout << "******************************\n";
}
int main()
{
	strinfo persone[2];
	read_personinfo(persone);
	print_personeinfo(persone);

	return 0;
}
```

## output
```cpp
******************************
enter first name
zakaria
and lastname
medkouri
and age
19
and phone number
06347464
******************************
enter first name
ahmed
and lastname
medkouri
and age
50
and phone number
07464464
*****************************************
firstname is zakaria
lastname is medkouri
age is 19
phone :06347464
*****************************************
firstname is ahmed
lastname is medkouri
age is 50
phone :07464464
******************************
```
