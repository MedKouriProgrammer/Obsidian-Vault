# <font color="#de7802">Question: What’s the different of calling functions in one line of code?</font>
### <font color="#92d050">The Answers:</font>
##### <font color="#92d050"> When I have two procedures or Procedures first then function, I can’t call them in one line of code like this: Print_name(Read_name()), this just for function & Procedure or function & function.</font>

---
# <font color="#de7802">Question: Propleme (31): How to calling The same function but it’s deffrent</font>
## <font color="#ffff00">Code</font> 
```cpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
int ReadPositiveNumber(string Message)
{
	int Number = 0;  
	do
	{
		cout << Message << endl;  
		cin >> Number;            
	} while (Number <= 0);        

	return Number;  
}
int Swap(int& A, int& B) {

	int Temp = A;
	A = B;
	B = Temp;

	return Temp;
}
void FillArrayfor1toN(int arr1[100], int arrlength) {

	for (int i = 0; i < arrlength; i++)
	{
		 arr1[i] = i + 1;
	}

}
void ArrayAfterShuffle(int arr1[100], int arrlength) {

	for (int i = 1; i < arrlength; i++)
	{
		int Shuffle1 = ReadRandomNumber(1, arrlength) - 1;
		int Shuffle2 = ReadRandomNumber(1, arrlength) - 1;

		Swap(arr1[Shuffle1], arr1[Shuffle2]);
	}

}
void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";  
}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100];
	int arrlength = ReadPositiveNumber("Enter Positive Number: ");

	FillArrayfor1toN(arr1, arrlength);

	cout << "\nArray 1 elements:\n";
	PrintArray(arr1, arrlength);

	ArrayAfterShuffle(arr1, arrlength);

	cout << "\n\nArray element after shuffle: \n";
	PrintArray(arr1, arrlength);

	return 0;
}
```
### <font color="#92d050">The Answers: Because we calle an function between PrintArray</font>
##### <font color="#92d050"> </font>
```
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	int arr1[100] = { 50,50,50,30,30,20,10 };
	int length = 7;

	for (int i = 0; i < length; i++)
	{
		cout << arr1[i] << " ";
	}
	
	return 0;
}
```