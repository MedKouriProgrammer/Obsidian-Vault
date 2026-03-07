```int main()
{
	float num1 = 43.63;
	double num2 = 56772.72782;

	int giga1 = (int)num1;
	int giga2 = (int)num2;

	cout << giga1 << " " << giga2 << endl;

	return 0;
}
```

```
int main()
{
	string num1 = "12334.4567";

	int giga1 = stoi(num1);
	float giga2 = stof(num1);
	double giga3 = stod(num1);

	cout << giga1 << " " << giga2 << " " << giga3 << endl;

	return 0;
}
```

```
int main()
{
	int num1 = 45;
	float num2 = 45.52;
	double num3 = 234.65658;

	string giga1, giga2;
	giga1 = to_string(num1);
	giga2 = to_string(num2);
	string giga3 = to_string(num3);

	cout << giga1 << " " << giga2 << " " << giga3 << endl;

	return 0;
}
```

```

int main()
{
	string stcharacter = "qwertyuiopasdfghjklzxcvbnm";
	cout << "the length of stcharacter is " << stcharacter.length() << endl;
	cout << "number 4 of stcharacter is " << stcharacter[4] << endl;

	string s1 = "10", s2 = "10";
	string s3 = s1 + s2;
	cout << s3 << endl;

	int giga = stoi(s1) + stoi(s2);
	cout << giga << endl;

	return 0;
}

```

```
#include <iostream>
#include<string>
using namespace std;

void myfunction1()
{
	int number, number1;
	cout << "enter first number";
	cin >> number;
	cout << "enter number 2\n";
		cin >> number1;
		cout << "***********************\n";
		cout << number + number1 << endl;
}
int mysum()
{
	int sum1, sum2;
	cout << "enter sum1\n";
	cin >> sum1;
	cout << "enter sum2\n";
	cin >> sum2;
	cout << "***********************\n";
	return sum1 + sum2;
}
int main()
{	
	//myfunction1();
	cout << mysum() << endl;

	return 0;
}

```

```
void read_gradestudents_info(int gradstudents[3])
{
	cout << "please enter your first grade\n";
	cin >> gradstudents[0];
	cout << "and secande grade\n";
	cin >> gradstudents[1];
	cout << "and thurt grade\n";
	cin >> gradstudents[2];
}
void print_gradestudents_info(int gradstudents[3])
{
	cout << "\n";
	cout << "your first grade is " << gradstudents[0] << "\n";
	cout << "and your secand grade is " << gradstudents[1] << "\n";
	cout << "and your thurt grade is " << gradstudents[2] << endl;
}
int main()
{
	int gradstudents[3];
	read_gradestudents_info(gradstudents);
	print_gradestudents_info(gradstudents);

	return 0;
}

```

```
#include<iostream>
using namespace std;

enum enfood_menu_choise { sald = 1, tajin = 2, fruit = 3, oronge_juise = 4, pizza = 5, other_type = 6 };
int main()
{
	cout << "*********************************\n";
	cout << "chose your food\n";
	cout << "salat = 1\n";
	cout << "tajin = 2\n";
	cout << "fruit = 3\n";
	cout << "orange_juise = 4\n";
	cout << "pizza = 5\n";
	cout << "other type = 6\n";
	cout << "*********************************\n";

	int a;// here i have to print int a to converst it in the next step.
	enfood_menu_choise food_menu;

	cin >> a;
	food_menu = (enfood_menu_choise)a;// here i have to convers (a) to food_menu to ask user with enum
	if (food_menu == enfood_menu_choise::sald)// here i should type (==) instead (=).
	{
		cout << "your salad has comming soon\n";
	}
	
	else if (food_menu == enfood_menu_choise::tajin)
	{
		cout << "your tajin will comming soon!\n";
	}
	
	else if (food_menu == enfood_menu_choise::fruit)
	{
		cout << "your fruit will comming soon!\n";
	}
	
	else if (food_menu == enfood_menu_choise::oronge_juise)
	{
		cout << "your orange juise will comming soon!\n";
	}
	
	else if (food_menu == enfood_menu_choise::pizza)
	{
		cout << "your pizza will comming soon\n";
	}
	else
	{
		cout << "your other type will come\n";
	}
	cout << "thank you\n";

	return 0;
}
```

```
#include<iostream>
using namespace std;

int main()
{
	int day = 5;
	switch (day)
	{
	case 1:
		cout << "monday\n";
		break;
	case 2:
		cout << "thusday\n";
		break;
	case 3:
		cout << "wensday\n";
		break;
	case 4:
		cout << "thursday\n";
		break;
	case 5:
		cout << "friday\n";
		break;
	case 6:
		cout << "saturday\n";
		break;
	case 7:
		cout << "sanday\n";
		break;
	default:
		cout << "please write a number day and try again\n";
	}


	return 0;
}
```

```cpp
#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "please enter a positive number\n";
	cin >> num;

	while (num < 1)
	{
		cout << "wrong number, plz enter a positive number\n";
		cin >> num;
	}
	cout << "your positive number is " << num << endl;

	return 0;
}
```
```
#include <iostream>
#include <string>
using namespace std;

void Read_mark(int& mark1, int& mark2, int& mark3)
{
	cout << "Please enter mark 1\n";
	cin >> mark1;
	cout << "Please enter mark 2\n";
	cin >> mark2;
	cout << "Please enter mark 3\n";
	cin >> mark3;
}
float Calc_Average_of_Mark(int mark1, int mark2, int mark3)
{
	return (float)(mark1 + mark2 + mark3) / 3;
}
void Print_Result_of_Mark(float result)
{
	cout << "The average of marks is: " << result;
}
int main()
{
	int mark1, mark2, mark3;
	Read_mark(mark1, mark2, mark3);
	Print_Result_of_Mark(Calc_Average_of_Mark(mark1, mark2, mark3));

	return 0;
}
```