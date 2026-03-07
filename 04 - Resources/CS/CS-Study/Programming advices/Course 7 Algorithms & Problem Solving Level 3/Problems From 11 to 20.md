---
creation_date: 2026-02-12
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Problems From 11 to 20</font>
---
### <font color="#ffff00">(#11):</font>
![[Pasted image 20260208150547.png]]
![[Pasted image 20260208150716.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}

void FillArrayWithRandom(int arr1[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr1[i][j] = ReadRandomNumber(0, 10);
        }

    }

}

void PrintArrayMatrix(int arr1[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr1[i][j]);
        }

        cout << endl;
    }

}
int SumOfMatrix(int arr[3][3], short Rows, short Cols) {

    int Sum = 0;
    
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Sum += arr[i][j];
        }

    }

    return Sum;

}

bool PrintSumOfMatrix(int arr1[3][3], int arr2[3][3], short Rows, short Cols) {
    
    return (SumOfMatrix(arr1, 3, 3) == SumOfMatrix(arr2, 3, 3));

}

int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3], arr2[3][3];

    FillArrayWithRandom(arr1, 3, 3);
    cout << "\nMatrix 1 :\n";
    PrintArrayMatrix(arr1, 3, 3);
    
    FillArrayWithRandom(arr2, 3, 3);
    cout << "\nMatrix 2 :\n";
    PrintArrayMatrix(arr2, 3, 3);
    

    
    if(PrintSumOfMatrix(arr1, arr2, 3, 3))
    {   
        cout << "\n" << "(" << SumOfMatrix(arr1, 3, 3) << " + " << SumOfMatrix(arr2, 3, 3) << ")";
        
        cout << "\nYes, matrix are equal.\n";
    }
    else
    {
        cout << "\n" << "(" << SumOfMatrix(arr1, 3, 3) << " + " << SumOfMatrix(arr2, 3, 3) << ")";

        cout << "\nNo: matrix are NOT equal.\n";
    }

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Matrix 1 :
 10  06  09 
 09  00  08 
 01  05  06 
 
Matrix 2 :
 09  09  05 
 07  10  05 
 00  09  00 

(54 + 54)
Yes, matrix are equal.
```
---
### <font color="#ffff00">(#12):</font>
![[Pasted image 20260208163825.png]]
![[Pasted image 20260208163807.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}

void FillArrayWithRandom(int arr1[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr1[i][j] = ReadRandomNumber(0, 10);
        }

    }

}

void PrintArrayMatrix(int arr1[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr1[i][j]);
        }

        cout << endl;
    }

}
int SumOfMatrix(int arr[3][3], short Rows, short Cols) {

    int Sum = 0;
    
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Sum += arr[i][j];
        }

    }

    return Sum;

}

bool PrintTepicalOfMatrix(int arr1[3][3], int arr2[3][3], short Rows, short Cols) {
    
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr1 != arr2)
            {
                return false;
            }
        }

    }

    return true;
}

int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3], arr2[3][3];

    FillArrayWithRandom(arr1, 3, 3);
    cout << "\nMatrix 1 :\n";
    PrintArrayMatrix(arr1, 3, 3);
    
    FillArrayWithRandom(arr2, 3, 3);
    cout << "\nMatrix 2 :\n";
    PrintArrayMatrix(arr2, 3, 3);
    

    
    if(PrintTepicalOfMatrix(arr1, arr2, 3, 3))
    {   
        cout << "\nYes, matrix are equal.\n";
    }
    else
    {
        cout << "\nNo: matrix are NOT equal.\n";
    }

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Matrix 1 :
 01  10  05 
 07  09  02 
 09  00  04 

Matrix 2 :
 04  03  05 
 01  08  03 
 01  01  01 

No: matrix are NOT equal.
```
---
### <font color="#ffff00">(#13):</font>
![[Pasted image 20260209075327.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}

void FillArrayWithRandom(int arr1[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr1[i][j] = ReadRandomNumber(0, 10);
        }

    }

}

void PrintArrayMatrix(int arr1[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr1[i][j]);
        }

        cout << endl;
    }

}
int SumOfMatrix(int arr[3][3], short Rows, short Cols) {

    int Sum = 0;
    
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Sum += arr[i][j];
        }

    }

    return Sum;

}

bool PrintIdentityOfMatrix(int arr1[3][3], short Rows, short Cols) {
    
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (i == j && arr1[i][j] != 1)
            {
                return false;
            }
            else if (i != j && arr1[i][j] != 0)
            {
                return false;
            }
        }

    }

    return true;
}

int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    
    // int arr2[3][3];

    // FillArrayWithRandom(arr1, 3, 3);
    cout << "\nMatrix 1 :\n";
    PrintArrayMatrix(arr1, 3, 3);
    
    // FillArrayWithRandom(arr2, 3, 3);
    // cout << "\nMatrix 2 :\n";
    // PrintArrayMatrix(arr2, 3, 3);
    

    
    if(PrintIdentityOfMatrix(arr1, 3, 3))
    {   
        cout << "\nYes, matrix are Identity.\n";
    }
    else
    {
        cout << "\nNo: matrix are NOT Identity.\n";
    }

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Matrix 1 :
 01  00  00 
 00  01  00 
 00  00  01 

Yes, matrix are equal.
```
---
### <font color="#ffff00">(#14):</font>
![[Pasted image 20260209081612.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}

void FillArrayWithRandom(int arr1[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr1[i][j] = ReadRandomNumber(0, 10);
        }

    }

}

void PrintArrayMatrix(int arr1[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr1[i][j]);
        }

        cout << endl;
    }

}
int SumOfMatrix(int arr[3][3], short Rows, short Cols) {

    int Sum = 0;
    
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Sum += arr[i][j];
        }

    }

    return Sum;

}

bool PrintScalerOfMatrix(int arr1[3][3], short Rows, short Cols) {
    
    int FirstDiagElemement = arr1[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (i == j && arr1[i][j] != FirstDiagElemement)
            {
                return false;
            }
            else if (i != j && arr1[i][j] != 0)
            {
                return false;
            }
        
        }

    }

    return true;
}

int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    
    // int arr2[3][3];

    // FillArrayWithRandom(arr1, 3, 3);
    cout << "\nMatrix 1 :\n";
    PrintArrayMatrix(arr1, 3, 3);
    
    // FillArrayWithRandom(arr2, 3, 3);
    // cout << "\nMatrix 2 :\n";
    // PrintArrayMatrix(arr2, 3, 3);
    

    
    if(PrintScalerOfMatrix(arr1, 3, 3))
    {   
        cout << "\nYes, matrix are scaler.\n";
    }
    else
    {
        cout << "\nNo: matrix are NOT scaler.\n";
    }

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Matrix 1 :
 01  00  00 
 00  01  00 
 00  00  01 

Yes, matrix are scaler.
```
---
### <font color="#ffff00">(#15):</font>
![[Pasted image 20260209083046.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}

void FillArrayWithRandom(int arr1[3][3], short Rows, short Cols) { // this function not used.

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr1[i][j] = ReadRandomNumber(0, 10);
        }

    }

}

void PrintArrayMatrix(int arr1[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr1[i][j]);
        }

        cout << endl;
    }

}

short PrintScalerOfMatrix(int arr1[3][3], short Numbre, short Rows, short Cols) {

    int counter = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr1[i][j] == Numbre)
            {
                counter++;
            }

        }

    }

    return counter;
}

int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3] = {
        {9, 1, 12},
        {0, 9, 12},
        {0, 9, 9 }
    };
    short Number = 0;

    cout << "\nMatrix 1 :\n";
    PrintArrayMatrix(arr1, 3, 3);

    cout << "\nEnter the number to count in matrix: ";
    cin >> Number;
    

    
    if(PrintScalerOfMatrix(arr1, Number, 3, 3))
    {   
        cout << "\nNumber " << Number << " count in matrix is " << PrintScalerOfMatrix(arr1, Number, 3, 3);
    }
    else
    {
        cout << "\nNumber " << Number << " Are not in matrix.";
    }

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Matrix 1 :
 09  01  12 
 00  09  12 
 00  09  09 

Enter the number to count in matrix: 9

Number 9 count in matrix is 4
```
---
### <font color="#ffff00">(#16):</font>
![[Pasted image 20260209085505.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}

void FillArrayWithRandom(int arr1[3][3], short Rows, short Cols) { // this function not used.

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr1[i][j] = ReadRandomNumber(0, 10);
        }

    }

}

void PrintArrayMatrix(int arr1[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr1[i][j]);
        }

        cout << endl;
    }

}

short GetCounterOfMatrix(int arr1[3][3], short Numbre, short Rows, short Cols) {

    int Counter = 0;
    
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr1[i][j] == 0)
            {
                Counter++;
            }

        }

    }

   return Counter;

}

bool GetFinalResult(int arr1[3][3], short Rows, short Cols) {

    short MatrixSize = Rows * Cols;

    return (GetCounterOfMatrix(arr1, 0, 3, 3) >= (MatrixSize / 2));

}
int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3] = {
        {0, 0, 1},
        {0, 0, 1},
        {0, 0, 9}
    };
    short Number = 0;

    cout << "\nMatrix 1 :\n";
    PrintArrayMatrix(arr1, 3, 3);

    
    if(GetFinalResult(arr1, 3, 3))
    {   
        cout << "\nYes, it's spare.";
    }
    else
    {
        cout << "\nNo, it's not spare.";
    }

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Matrix 1 :
 00  00  01 
 00  00  01 
 00  00  09 

Yes, it's spare.
```
---
### <font color="#ffff00">(#17):</font>
![[Pasted image 20260209091803.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}

void FillArrayWithRandom(int arr1[3][3], short Rows, short Cols) { // this function not used.

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr1[i][j] = ReadRandomNumber(0, 10);
        }

    }

}

void PrintArrayMatrix(int arr1[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr1[i][j]);
        }

        cout << endl;
    }

}

bool GetFinalNumberResult(int arr1[3][3], short Number, short Rows, short Cols) {

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr1[i][j] == Number)
            {
                return true;
            }

        }

    }

    return false;
}
int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3] = {
        {0, 0, 1},
        {0, 0, 1},
        {0, 0, 9}
    };
    short Number = 0;

    cout << "\nMatrix 1 :\n";
    PrintArrayMatrix(arr1, 3, 3);

    cout << "Enter the number to for in the matrix: ";
    cin >> Number;

    
    if(GetFinalNumberResult(arr1, Number, 3, 3))
    {   
        cout << "\nYes, it's there.";
    }
    else
    {
        cout << "\nNo, it's not there.";
    }

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Matrix 1 :
 77  00  01 
 00  00  01 
 00  00  09 
Enter the number to for in the matrix: 77

Yes, it's there.
```
---
### <font color="#ffff00">(#18):</font>
![[Pasted image 20260209094602.png]]
![[Pasted image 20260209094542.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}

void FillArrayWithRandom(int arr1[3][3], short Rows, short Cols) { // this function not used.

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr1[i][j] = ReadRandomNumber(0, 10);
        }

    }

}

void PrintArrayMatrix(int arr1[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr1[i][j]);
        }

        cout << endl;
    }

}

bool CheckFinalNumberResult(int arr1[3][3], short Number, short Rows, short Cols) {

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr1[i][j] == Number)
            {
                return true;
            }

        }

    }

    return false;
}

void GetFinalNumberResult(int arr1[3][3], int arr2[3][3], short Rows, short Cols) {

    short Countainement = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr1[i][j] == arr2[i][j])
            {
                Countainement = arr1[i][j];
                if (CheckFinalNumberResult(arr1, Countainement, 3, 3))
                {
                    cout << setw(3) << Countainement << "     ";
                }
            }

        }

    }


}
int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3], arr2[3][3];

    FillArrayWithRandom(arr1, 3, 3);
    cout << "\nMatrix 1 :\n";
    PrintArrayMatrix(arr1, 3, 3);

    FillArrayWithRandom(arr2, 3, 3);
    cout << "\nMatrix 2 :\n";
    PrintArrayMatrix(arr2, 3, 3);

    cout << "\nIntersected number are: ";
    GetFinalNumberResult(arr1,arr2, 3, 3);

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Matrix 1 :
 00  01  03 
 10  04  07
 09  07  00 

Matrix 2 :
 04  02  04 
 10  06  07 
 03  05  10 

Intersected number are:  10  07 
```
---
### <font color="#ffff00">(#19):</font>
![[Pasted image 20260209101111.png]]
![[Pasted image 20260209101055.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}

void FillArrayWithRandom(int arr1[3][3], short Rows, short Cols) { // this function not used.

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr1[i][j] = ReadRandomNumber(0, 10);
        }

    }

}

void PrintArrayMatrix(int arr1[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr1[i][j]);
        }

        cout << endl;
    }

}

short GetMinimalNumberResult(int arr1[3][3], short Rows, short Cols) {

    short MinimalNum = arr1[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr1[i][j] < MinimalNum)
            {
                MinimalNum = arr1[i][j];
            }

        }

    }

    return MinimalNum;
}

short GetMaxNumberResult(int arr1[3][3], short Rows, short Cols) {

    short MaxNum = arr1[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr1[i][j] > MaxNum)
            {
                MaxNum = arr1[i][j];
            }

        }

    }

    return MaxNum;
}

int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3];

    FillArrayWithRandom(arr1, 3, 3);
    cout << "\nMatrix 1 :\n";
    PrintArrayMatrix(arr1, 3, 3);

    cout << "\nMinimal number are: ";
    cout << GetMinimalNumberResult(arr1, 3, 3);

    cout << "\nMax number are: ";
    cout << GetMaxNumberResult(arr1, 3, 3);

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Matrix 1 :
 01  09  10 
 05  01  01 
 09  08  02 

Minimal number are:
```
---
### <font color="#ffff00">(#20):</font>
![[Pasted image 20260209182451.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void PrintArrayMatrix(int arr1[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr1[i][j]);
        }

        cout << endl;
    }

}

bool IsPalindromNumber(int arr1[3][3], short Rows, short Cols) {

 
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols / 2; j++)
        {
            if (arr1[i][j] != arr1[i][Cols - 1 - j])
            {
                return false;
            }
        }

    }

    return true;
}


int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3] = {
        {1, 0, 1},
        {5, 5, 5},
        {7, 5, 7}
    };

    cout << "\nMatrix 1 :\n";
    PrintArrayMatrix(arr1, 3, 3);

    if (IsPalindromNumber(arr1, 3, 3))
    {
        cout << "\nYes, it's a palindrom number.";
    }
    else
    {
        cout << "\nNo, it's not a palindrom number.";
    }

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Matrix 1 :
 01  00  01 
 05  05  05 
 07  05  07 

Yes, it's a palindrom number.
```
---
