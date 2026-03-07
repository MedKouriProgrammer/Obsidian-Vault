---
creation_date: 2026-02-07
tags:
  - Resources/Articles
Resource: https://programmingadvices.com/courses/algorithms-and-problem-solving-level-3/lectures/42442193
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Problem #01</font>
---

### <font color="#ffff00">(#1):</font>
![[Pasted image 20260207215112.png]]
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

void FillArrayWithRandom(int arr1[][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr1[i][j] = ReadRandomNumber(0, 100);
        }

    }

}

void PrintArrayMatrix(int arr1[][3], short Rows, short Cols) {

    cout << "The following is a 3x3 random matrix:\n";

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << left << setw(8) << arr1[i][j];
        }

        cout << endl;
    }

}

int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3];

    FillArrayWithRandom(arr1, 3, 3);
    PrintArrayMatrix(arr1, 3, 3);
    
    return 0;
}
```
<font color="#646a73">Output:</font>
```
The following is a 3x3 random matrix:
43      91      84      
72      77      32      
40      97      71
```
---
### <font color="#ffff00">(#2):</font>
![[Pasted image 20260208084448.png]]
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

void FillArrayWithRandom(int arr1[][3], short Rows, short Cols) {


    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr1[i][j] = ReadRandomNumber(0, 100);
        }

    }

}

void PrintArrayMatrix(int arr1[][3], short Rows, short Cols) {
    
    cout << "The following is a 3x3 random matrix:\n";

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << left << setw(8) << arr1[i][j];
        }

        cout << endl;
    }

}
int GetSumOfRows(int arr1[][3], short NewRows, short Cols) {

    int sum = 0;

    for (int j = 0; j < Cols; j++)
    {
        sum += arr1[NewRows][j];
    }

    return sum;
}
void PrintSumOfRows(int arr1[][3], short Rows, short Cols) {

    
    cout << "\nThe following is the sum of each row in the matrix:\n";

    for (int i = 0; i < Rows; i++)
    {   
        cout << "Row " << i + 1 << " Sum = " << GetSumOfRows(arr1, i, 3) << endl;  
    }

}
int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3];

    FillArrayWithRandom(arr1, 3, 3);
    PrintArrayMatrix(arr1, 3, 3);
    PrintSumOfRows(arr1, 3, 3);
    
    return 0;
}
```
<font color="#646a73">Output:</font>
```
The following is a 3x3 random matrix:
61      74      58      
20      57      8       
59      31      35      

The following is the sum of each row in the matrix:
Row 1 Sum = 193
Row 2 Sum = 85
Row 3 Sum = 125
```
---
### <font color="#ffff00">(#3):</font>
![[Pasted image 20260208093822.png]]
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

void FillArrayWithRandom(int arr1[][3], short Rows, short Cols) {


    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr1[i][j] = ReadRandomNumber(0, 100);
        }

    }

}

void PrintArrayMatrix(int arr1[][3], short Rows, short Cols) {
    
    cout << "The following is a 3x3 random matrix:\n";

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << left << setw(8) << arr1[i][j];
        }

        cout << endl;
    }

}
int GetSumOfRows(int arr1[][3], short NewRows, short Cols) {

    int sum = 0;

    for (int j = 0; j < Cols; j++)
    {
        sum += arr1[NewRows][j];
    }

    return sum;
}
void FillSumWithRows(int arr1[][3], int arrSum[3], short Rows) {

    for (int i = 0; i < Rows; i++)
    {   
        arrSum[i] = GetSumOfRows(arr1, i, 3);
    }

}

void PrintArraySumOfRows(int arr1[][3], int arrSum[3], short Rows) {

    cout << "\nThe following is the sum of each row in the matrix:\n";
    
    for (int i = 0; i < Rows; i++)
    {
        cout << "Row " << i + 1 << " Sum " << arrSum[i] << endl;    
    }

}
int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3];
    int arrSum[3];

    FillArrayWithRandom(arr1, 3, 3);
    PrintArrayMatrix(arr1, 3, 3);
   
    FillSumWithRows(arr1, arrSum, 3);
    PrintArraySumOfRows(arr1, arrSum, 3);
    
    return 0;
}
```
<font color="#646a73">Output:</font>
```
The following is a 3x3 random matrix:
1       56      86      
2       35      2       
65      50      2       

The following is the sum of each row in the matrix:
Row 1 Sum 143
Row 2 Sum 39
Row 3 Sum 117
```
---
### <font color="#ffff00">(#4):</font>
![[Pasted image 20260208101132.png]]
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
            arr1[i][j] = ReadRandomNumber(0, 100);
        }

    }

}

void PrintArrayMatrix(int arr1[3][3], short Rows, short Cols) {
    
    cout << "The following is a 3x3 random matrix:\n";

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << left << setw(8) << arr1[i][j];
        }

        cout << endl;
    }

}
int GetSumOfCols(int arr1[3][3], short NewRows, short Cols) {

    int sum = 0;

    for (int i = 0; i < NewRows; i++)
    {
        sum += arr1[i][Cols];
    }

    return sum;
}
void FillSumWithCols(int arr1[3][3], short Cols, short Rows) {

    cout << "\nThe following is the sum of each row in the matrix:\n";
    
    for (int j = 0; j < Cols; j++)
    {   
        cout << "Col " << j + 1 << " Sum = " << GetSumOfCols(arr1, Rows, j) << endl;
    }

}

int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3];

    FillArrayWithRandom(arr1, 3, 3);
    PrintArrayMatrix(arr1, 3, 3);
   
    FillSumWithCols(arr1, 3, 3);
    
    return 0;
}
```
<font color="#646a73">Output:</font>
```
The following is a 3x3 random matrix:
28      18      94      
9       61      55      
50      47      52      

The following is the sum of each row in the matrix:
Col 1 Sum = 87
Col 2 Sum = 126
Col 3 Sum = 201
```
---
### <font color="#ffff00">(#5):</font>
![[Pasted image 20260208123039.png]]
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
            arr1[i][j] = ReadRandomNumber(0, 100);
        }

    }

}

void PrintArrayMatrix(int arr1[3][3], short Rows, short Cols) {
    
    cout << "The following is a 3x3 random matrix:\n";

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << left << setw(8) << arr1[i][j];
        }

        cout << endl;
    }

}

int GetSumOfCols(int arr1[3][3], short NewRows, short Cols) {

    int sum = 0;

    for (int i = 0; i < NewRows; i++)
    {
        sum += arr1[i][Cols];
    }

    return sum;
}

void FillSumWithCols(int arr1[3][3], int arrSum[3], short Cols, short Rows) {
    
    for (int j = 0; j < Cols; j++)
    {   
        arrSum[j] = GetSumOfCols(arr1, Rows, j);
    }

}

void PrintSumOfArray_Matrix(int arrSum[3], short Cols) {

    cout << "\nThe following is the sum of each row in the matrix:\n";
    
    for (int j = 0; j < Cols; j++)
    {   
        cout << arrSum[j] << endl;
    }

}

int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3];
    int arrSum[3];

    FillArrayWithRandom(arr1, 3, 3);
    PrintArrayMatrix(arr1, 3, 3);
   
    FillSumWithCols(arr1, arrSum, 3, 3);
    PrintSumOfArray_Matrix(arrSum, 3);
    
    
    return 0;
}
```
<font color="#646a73">Output:</font>
```
The following is a 3x3 random matrix:
58      14      13      
94      93      89      
9       75      7       

The following is the sum of each row in the matrix:
161
182
109
```
---
### <font color="#ffff00">(#6):</font>
![[Pasted image 20260208124750.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void OrderArrayFrom_1To9(int arr1[3][3], short Rows, short Cols) {

    short Counter = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Counter++;
            arr1[i][j] = Counter;
        }

    }

}

void PrintArrayResult(int arr1[3][3] , short Rows, short Cols) {

    cout << "The folowing is 3x3 ordered matrix\n";

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << left << setw(7) << arr1[i][j];
        }
        cout << endl;
    }

}
int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3];
    
    OrderArrayFrom_1To9(arr1, 3, 3);
    PrintArrayResult(arr1, 3, 3);
    
    
    
    return 0;
}
```
<font color="#646a73">Output:</font>
```
The folowing is 3x3 ordered matrix
1      2      3      
4      5      6      
7      8      9 
```
---
### <font color="#ffff00">(#7):</font>
![[Pasted image 20260208131206.png]]
![[Pasted image 20260208131355.png]]
### <font color="#ffff00">Input:</font>
```cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void OrderArrayFrom_1To9(int arr1[3][3], short Rows, short Cols) {

    short Counter = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Counter++;
            arr1[i][j] = Counter;
        }

    }

}
void PrintArrayRowsResult(int arr1[3][3] , short Rows, short Cols) {

    cout << "The folowing is 3x3 ordered matrix\n";

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << left << setw(7) << arr1[i][j];
        }
        cout << endl;
    }

}
void TronsfereArrayRowsToCols(int arr1[3][3], int arrTronsfere[3][3] , short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arrTronsfere[i][j] = arr1[j][i];
        }
        
    }
    
    
}
void PrintArrayColsResult(int arrTronsfere[3][3] , short Rows, short Cols) {

    cout << "\nThe folowing is the transposed matrix\n";

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << left << setw(7) << arrTronsfere[i][j];
        }
        cout << endl;
    }

}
int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3];
    int arrTronsfere[3][3];
    
    OrderArrayFrom_1To9(arr1, 3, 3);
    PrintArrayRowsResult(arr1, 3, 3);

    TronsfereArrayRowsToCols(arr1, arrTronsfere, 3, 3);
    PrintArrayColsResult(arrTronsfere, 3, 3);
    
    
    
    return 0;
}
```
<font color="#646a73">Output:</font>
```
The folowing is 3x3 ordered matrix
1      2      3      
4      5      6      
7      8      9      

The folowing is the transposed matrix
1      4      7      
2      5      8      
3      6      9      
```
---
### <font color="#ffff00">(#8):</font>
![[Pasted image 20260208141105.png]]
![[Pasted image 20260208141137.png]]
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
            arr1[i][j] = ReadRandomNumber(0, 100);
        }

    }

}
void PrintArrayMatrix(int arr1[][3], short Rows, short Cols) {

    cout << "\nMatrix 1:\n";

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << left << setw(8) << arr1[i][j];
        }

        cout << endl;
    }

}

void GetArray_SumResult(int arr1[3][3], int arr2[3][3], int arrResult[3][3], short Rows, short Cols) {

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arrResult[i][j] = arr1[i][j] * arr2[i][j];
        }

    }

}

void PrintArray_SumResult(int arrResult[3][3], short Rows, short Cols) {

    cout << "\nResult:\n";

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << left << setw(7) << arrResult[i][j];
        }
        cout << endl;
    }

}
int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3], arr2[3][3], arrResult[3][3];

    FillArrayWithRandom(arr1, 3, 3);
    PrintArrayMatrix(arr1, 3, 3);

    FillArrayWithRandom(arr2, 3, 3);
    PrintArrayMatrix(arr2, 3, 3);

    GetArray_SumResult(arr1, arr2, arrResult, 3, 3);
    PrintArray_SumResult(arrResult, 3, 3);    
    
    return 0;
}
```
<font color="#646a73">Output:</font>
```
Matrix 1:
0       37      34      
82      5       87      
56      77      87      

Matrix 1:
24      39      9       
50      5       82      
2       78      25      

Result:
0      1443   306    
4100   25     7134   
112    6006   2175 
```
---
### <font color="#ffff00">(#9):</font>
![[Pasted image 20260208141440.png]]
![[Pasted image 20260208141512.png]]
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

    cout << "Matrix 1 :\n";

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr1[i][j]);
        }

        cout << endl;
    }

}

void PrintMiddleRowOfMatrix(int arr1[3][3], short Rows, short Cols) {

    cout << "\nMiddle row of matrix 1 is: \n";
    short MiddleRow = Rows/2;

    for (int i = 0; i < MiddleRow; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d " , 2, arr1[MiddleRow][j]);
        }

    }

}

void PrintMiddleColsOfMatrix(int arr1[3][3], short Rows, short Cols) {

    cout << "\nMiddle row of matrix 2 is: \n";
    short MiddleCols = Cols/2;

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < MiddleCols; j++)
        {
            printf(" %0*d " , 2, arr1[i][MiddleCols]);
        }

    }

}

int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3];

    FillArrayWithRandom(arr1, 3, 3);
    PrintArrayMatrix(arr1, 3, 3);
    
    PrintMiddleRowOfMatrix(arr1, 3, 3);
    PrintMiddleColsOfMatrix(arr1, 3, 3);

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Matrix 1 :
 02  04  02 
 10  06  01 
 10  08  02 

Middle row of matrix 1 is: 
 10  06  01 
Middle row of matrix 2 is: 
 04  06  08 
```
---
### <font color="#ffff00">(#10):</font>
![[Pasted image 20260208145420.png]]
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

    cout << "Matrix 1 :\n";

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr1[i][j]);
        }

        cout << endl;
    }

}

void PrintSumOfRows(int arr1[3][3], short Rows, short Cols) {

    cout << "\nSum of the matrax is: ";
    
    int sum = 0;
    
    for (int i = 0; i < Rows; i++)
    {    
        for (int j = 0; j < Cols; j++)
        {
            sum += arr1[i][j];
        }

    }   
    cout << sum;

}

int main() {
    
    srand((unsigned)time(NULL));

    int arr1[3][3];

    FillArrayWithRandom(arr1, 3, 3);
    PrintArrayMatrix(arr1, 3, 3);
    
    PrintSumOfRows(arr1, 3, 3);
 

    return 0;
}
```
<font color="#646a73">Output:</font>
```
Matrix 1 :
 01  05  10 
 04  05  10 
 01  05  02 

Sum of the matrax is: 43
```
---
