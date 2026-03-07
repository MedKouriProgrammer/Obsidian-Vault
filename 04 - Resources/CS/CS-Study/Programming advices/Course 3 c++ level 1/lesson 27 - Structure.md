---
date: 2025-03-03T06:01
tags:
  - Resources/Articles
---
Resource: 
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Structure ]]
___
# Summary 

---
# Highlights & Notes

- # What’s structure
- structure also called struct is a type of data types exactly [[User-defined]], structure are a way to groups several related variable into one place, it will make me faster in programming and also structure make the program easy to read.
## input
```cpp
#include<iostream>
using namespace std;

struct stcar
{
string name;
string model;
int sale;
};
int main()
{
stcar mycar
mycar.name = "toyota";
mycar.model = "1999 md";
mycar.sale = 100.000;

cout << "his car name is " << mycar.name << " and his model name is "
<< mycar.model << " and his sale is " << mycar.sale << "\n";
------------------------------------------------------------------------------
//i can also ask the user enter the informainformation.
cout << "what's your car name ? \n";
cin >> mycar.name;
cout << "your car name is " << mycar.name << endl;

return 0;
}
```

## output
```cpp
his car name is toyota and his model name is 1999 md amd his sale is 100.000
what's your car name ?
firari
your car name is firari

```
---
# I can also make structure into the structure, let's see that.

## input
```cpp
#include <iostream>
using namespace std;

struct stadresse
{
	string contry;
	string city;
	string adresse;
};
struct ststatus
{
	string worke;
	stadresse personnel;
};
struct stinformation
{
	string name;
	int age;
	int m_salery;
	int y_salery;
	char gender;
	bool merr;
	ststatus status;
};
int main()
{
	stinformation person1;

	person1.name = "zakaria";
	person1.age = 18;
	person1.m_salery = 4000;
	person1.y_salery = 140000;
	person1.gender = 'M';
	person1.merr = true;
	person1.status.worke = "yes";
	person1.status.personnel.contry = "morocco";
	person1.status.personnel.city = "rehmma";
	person1.status.personnel.adresse = "block 22";

	cout << "******************************\n";
	cout << "the name is " << person1.name << endl;
	cout << "age is " << person1.age << endl;
	cout << "monthly salery is " << person1.m_salery << endl;
	cout << "yearly salery is " << person1.y_salery << endl;
	cout << "his gender is " << person1.gender << endl;
	cout << "married ? " << person1.merr << endl;
	cout << "is he work " << person1.status.worke << endl;
	cout << "where he from " << person1.status.personnel.contry << endl;
	cout << "where exactly " << person1.status.personnel.city << endl;
	cout << "the addresse " << person1.status.personnel.adresse << endl;
    cout << "*******************************\n";

	return 0;
}
```

## Output
```cpp
************************************
the name is zakaria
age is 18
Monthly salery is 4000
Yearly salery is 140000
his gender is M
married ? true
is he work yes
where he frome morocco
where exactly rehmma
the addresse block 22
************************************
```