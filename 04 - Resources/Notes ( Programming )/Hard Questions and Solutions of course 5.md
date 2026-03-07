# <font color="#646a73">Course 5 exercise ( 1 ).</font>
## <font color="#92d050">Input :</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

void PrintVerticalNumbers() {

	cout << "\n\t\t\tMultiplication Taple From 1 to 10.\n\n";
	for (int i = 1;i <= 10;i++)
	{
		cout << "\t" << i;

	}
	cout << "\n___________________________________________________________________________________\n";
}
string ColumSperator(int i) {

	if (i < 10)
	{
		return "   |";
	}
	else
	{
		return "  |";
	}

}
void PrintHorizontalNumber() {

	PrintVerticalNumbers();

	for (int i = 1;i <= 10;i++)
	{
		cout << " " << i << ColumSperator(i) << "\t";

		for (int j = 1;j <= 10;j++)
		{
			cout << i * j << "\t";
		}

		cout << endl;
	}
	
}
int main() {

	PrintHorizontalNumber();

	return 0;
}
```
---
<font color="#ffc000">1. why in the seconds function we should use string, not char ?</font>
<font color="#00b050">1. Simplify because the output is a lot of letters, not only one little.</font>

---
<font color="#ffc000">1. why in the truth function when we called seconds function we put ``i - ColumSperator(i)`` ?</font>
<font color="#00b050">1. To identify it in a specific function.</font>

---
<font color="#ffc000">1. why in the truth function, we write ``ColumSperator(i)`` before “\t“ ?</font>
1. ??

---
<font color="#ffc000">1. why in the main we called only truth function, But also we have to call the first function ?</font>
<font color="#00b050">1. Because we identify the first function inside the truth function.</font>

---
# <font color="#646a73">Course 5 exercise ( 2 ).</font>
## <font color="#92d050">Input :</font>
```cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

enum enPrimeNOTPrime { Prime = 1, NotPrime = 2 };
int Read_Positive_Numbers(string message)
{
	int num;
	do
	{
		cout << message;
		cin >> num;

	} while (num <= 0);

	return num;
}
enPrimeNOTPrime CheckNumber(int num)
{
	int C = round(num / 2);
	for (int counter = 2;counter <= C;counter++)
	{
		if (num % counter == 0)
			return enPrimeNOTPrime::NotPrime;
	}
	return enPrimeNOTPrime::Prime;
}
void PrintPrimeNumber_Result(int num)
{
	cout << "_____________________________________________________";
	cout << "\nThe Number You enter from 1 " << " to " << num << "\n";
	cout << " are ....\n";

	for (int s = 1;s <= num;s++)
	{
		if (CheckNumber(s) == enPrimeNOTPrime::Prime)
		{
			cout << s << endl;
		}

	}

}
int main()
{
	PrintPrimeNumber_Result(Read_Positive_Numbers("Please enter a Positive number: "));

	return 0;
}
```
---
<font color="#ffc000">1. What’s mean prime number, and what’s the equation of the exercise ?</font>
<font color="#92d050">1. The prime number it is the number that, when we divided by his smaller numbers, the results will contain decimals, except 1 and itself. </font>

---
<font color="#ffc000">1. What do you understand about second function ?</font>
1. <font color="#92d050">Firstly</font> ` enPrimeNOTPrime Check_Number(int num) `<font color="#92d050">we called enum, And we defined it, and we called the number into the equals, This function is for Check</font> <u>individually</u> <font color="#92d050">if the number is prime or not. </font>
2. <font color="#92d050">Also we use this line</font> `int C = round(num / 2);` <font color="#92d050">to divide the number, because to know if the number is prime or not we don’t should to divide it from 2 to number, we just have to divide it from 2 to his half.</font>
3. <font color="#92d050">In this stage</font> ` for (int counter = 2;counter <= C;counter++) ` <font color="#92d050">we have for loop started from 2 and end to C ( the half of number) and The counter increases by one in each loop, then we have into it condition</font> ` if (num % counter == 0) `, <font color="#92d050">That’s mean if the module of number = 0, The number it will not a</font> <u>prime number</u><font color="#92d050">, Otherwise is prime number.</font>

---
<font color="#ffc000">1. What do know about truth function ?</font>
1. <font color="#92d050">We have here</font> ` void PrintPrimeNumber_Result(int num)` <font color="#92d050">procedures to print the prime numbers.</font>
2. <font color="#92d050">This for loop</font> ` for (int s = 1;s <= num;s++) ` <font color="#92d050">has variable of integral s started from s (1) to number and The counter increases by one in each loop, Also we have a condition </font>` if (CheckNumber(s) == enPrimeNOTPrime::Prime) ` , <font color="#92d050">This condition called the second function by his name</font> ` (CheckNumber(s) ` <font color="#92d050">and we put the variable s from for loop into the equals and this</font> ` == enPrimeNOTPrime::Prime)` <font color="#92d050">to give us only the prime numbers, That’s mean all the number into the for loop from s (1) to number will go to the second function and will passé of all these stages </font><u>individually</u><font color="#92d050">.</font>

---
<font color="#ffc000">1. Why when we called second function ``( CheckNUmber )`` in truth function, we put integral s In parentheses``CheckNUmber(s)``.</font>
1. <font color="#92d050">Simplify to take all the numbers from s (1) to number to the second function to passé of all the stages individually.</font>

---
<font color="#ffc000">1. what the common relationship between the two ends functions.</font>
```cpp
void PrintPrimeNumber_Result(int num)
{
	cout << "_____________________________________________________";
	cout << "\nThe Number You enter from 1 " << " to " << num << "\n";
	cout << " are ....\n";

	for (int s = 1;s <= num;s++)
	{
		if (CheckNumber(s) == enPrimeNOTPrime::Prime)
		{
			cout << s << endl;
		}

	}

}
```
1. <font color="#00b050">Firstly lets started from the truth procedures, we have for loop started from 1 to number and The counter increases by one in each loop, into the loop we have condition called the second function and the conditions require the second function to give him only prime numbers to print it.</font>
______________________________________________________________________
```cpp
enPrimeNOTPrime CheckNumber(int num)
{
	int C = round(num / 2);
	for (int counter = 2;counter <= C;counter++)
	{
		if (num % counter == 0)
			return enPrimeNOTPrime::NotPrime;
	}
	return enPrimeNOTPrime::Prime;
}
```
1. <font color="#00b050">And here we have function of enum his name `CheckNumber` to check the prime numbers individually.</font>
2. <font color="#00b050">Into the function, We have a variable of integral called C to divide the number by 2, because like I say before to know if the number is prime or not we don’t should to divide it from 2 to number, We just have to divide it from 2 to his half.</font>
3. <font color="#00b050">In this stage we have for loop started from 2 to C → ( the half of number) and The counter increases by one in each loop.</font>
4. <font color="#00b050">Into the for loop we have condition to check if the number % counter = 0, return it Not Prime Number Otherwise return Prime number.</font>
______________________________________________________________________
1. <font color="#ffc000">Now let's gather the data: </font>
2. <font color="#00b050">In the truth function the loop started from 1 to number into it, we have a condition to return only prime number, Then the number go to the second function individually the number passé in the first line</font> ` int C = round(num / 2); ` <font color="#00b050">this variable called C divide the number by 2, then the variable C passé to the for loop the for loop started from 2 to C and The counter increases by one in each loop, into it, we have a condition</font> ` if (num % counter == 0) ` <font color="#00b050">to return check the prime number by take the number and module on the counter and see if the remainder equal 0 return not prime otherwise return prime number.</font>
----


