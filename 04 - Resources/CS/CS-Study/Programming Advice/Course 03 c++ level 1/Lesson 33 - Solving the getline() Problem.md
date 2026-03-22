---
date: 2025-03-05T11:38
tags:
  - Resources/Articles
---
Resource: [Lesson #33 - Solving the getline() Problem - YouTube](https://www.youtube.com/watch?v=kGcRQfr6DMc&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=40)
Author: [[abu-hedhoud]]
Topics: [[c++]] [[ Solving the getline() Problem]]
___
# Summary 

---
# Highlights & Notes

- # What’s mean cin.ignore(1,’\n’);
- means ignore 1 character, ignore newline ‘\n’.
- --
- # Let's see this in action
- ## input
```cpp
#include <iostream>
#include<string>
using namespace std;

int main()
{
	int namber;
	string name;
	string name2;

	cout << "what's your number\n";
	cin >> namber;
	
	cout << "what's your name\n";
	cin.ignore(1, '\n');
	getline(cin, name);
	
	cout << "please a number 2\n";
	cin >> name2;

	cout << "your number is " << namber << " and your name is " << name << " name2 is " << " number 2 is " << name2 << endl;
		
	return 0;
}
```

## output
```cpp
what's your number
19
what's your name
zakaria medkouri
please a number 2
mohemmed
your number is 19 and your name is zakaria medkouri name2 is number 2 is mohemmed

```