---
date: 2025-03-04T16:27
tags:
  - Resources/Articles
---
Resource: [Lesson #31 - Strings - YouTube](https://www.youtube.com/watch?v=NzB-s4TxWss&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=37)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[Strings]]
___
# Summary 

---
# Highlights & Notes

- # What’s string & what’s there use.
- A string variable contains a collection of characters surrounded by double quotes.
- String is array of characters.

- # How to print full name  in variable string without error.
- Firstly, instead write ``` cin >> namevarible;``` I should write  ``` getline(cin,namevarible) ```.
- ---
- # Let's see this in reality
- ## input
```cpp
#include <iostream>
#include<string>
using namespace std;

int main()
{
	string fullname;
	string number, number2;

    cout << "please enter the fullname\n";
	getline(cin, fullname);// between cin and fullname should be ( , )not( . )

	cout << "please enter string1\n";
	cin >> number;
	cout << "please enter string2\n";
	cin >> number2;
	
	cout << "*********************************\n";
	cout << "your fullname is " << fullname << "\n";
	cout << "the length of fullname is " << fullname.length() << "\n";
	cout << "concotonition of string 1 and string 2 is " << number + number2 << "\n";
	
	int giga = stoi(number) + stoi(number2);
	cout << "the resoult of numbers is " << giga << endl;

	return 0;
}
```
## output
```cpp
please enter the fullname
zakria medkouri
please enter string1
12
please enter string2
12
*********************************
your fullname is zakria medkouri
the length of fullname is 15
concotonition of string 1 and string 2 is 1212
the resoult of numbers is 24

```