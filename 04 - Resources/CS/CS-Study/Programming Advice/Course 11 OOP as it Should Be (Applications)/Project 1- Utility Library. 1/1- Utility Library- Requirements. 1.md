---
creation_date: 2026-04-23
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Utility Library: Requirements.</font> 

## <font color="#bfbfbf"><u>My Code</u>:</font>
### <font color="#ffff00">Input: Main.cpp</font>
```cpp
#include <iostream>
#include "clsUtil.h"
#include "clsDate.h"

using namespace std;


int main() {

    clsUtil::Srand();
    cout << clsUtil::ReadRandomNumber(1, 10) << endl;
    cout << clsUtil::enCharType(clsUtil::enCharType::CapitalLetter) << endl;
    cout << clsUtil::GenerateWord(clsUtil::MixChar, 8) << endl;
    cout
    << clsUtil::GenerateKey(clsUtil::MixChar) << endl;
    clsUtil::GenerateKeys(10, clsUtil::MixChar);

    cout << endl;
    int x = 10, y = 20;
    cout << x << " " << y << endl;
    clsUtil::Swap_Number(x, y);
    cout << x << " " << y << endl;

    cout << endl;
    double d1 = 10.5, d2 = 20.5;
    cout << d1 << " " << d2 << endl;
    clsUtil::Swap_Double(d1, d2);
    cout << d1 << " " << d2 << endl;

    cout << endl;
    string S1 = "Ali", S2 = "Ahmed";
    cout << S1 << " " << S2 << endl;
    clsUtil::Swap_String(S1, S2);
    cout << S1 << " " << S2 << endl;

    cout << endl;
    clsDate D1(1, 10, 2022), D2(1, 1, 2022);
    cout << clsDate::DateToString(D1) << " " << clsDate::DateToString(D2) << endl;
    clsUtil::SwapDates(D1, D2);
    cout << clsDate::DateToString(D1) << " " << clsDate::DateToString(D2) << endl;

    cout << endl;
    int ArrNumber[5] = {1, 2, 3, 4, 5};
    clsUtil::ShuffleArray(ArrNumber, 5);
    cout << "Array After Shuffle:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << ArrNumber[i] << endl;
    }

    cout << endl;
    string Arr2[5] = {"Ali", "Fadi", "Ahmed", "Quasim", "Khalid"};
    clsUtil::ShuffleArray(Arr2, 5);
    cout << "Array After Shuffle:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << Arr2[i] << endl;
    }

    cout << endl;
    int Arr3[5];
    clsUtil::FillArrayWithRandomNumber(Arr3, 5, 20, 50);
    cout << "Array After Fill:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << Arr3[i] << endl;
    }

    cout << endl;
    string Arr4[5];
    clsUtil::FillArrayWithRandomWords(Arr4, 5, clsUtil::MixChar, 8);
    cout << "Array After Fill:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << Arr4[i] << endl;
    }

    cout << endl;
    string Arr5[5];
    clsUtil::FillArrayWithRandomKeys(Arr5, 5, clsUtil::MixChar);
    cout << "Array After Fillying Keys:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << Arr5[i] << endl;
    }

    cout << "\nText1" << clsUtil::GetTabs(5) << "Text2" << endl;

    const short EncryptionKey = 2;

    string TextAfterEncryption, TextAfterDecryption;
    string Text = "Mohemmed Abu-Hedhoud";
    TextAfterEncryption = clsUtil::ReverseNametoCode(Text, EncryptionKey);
    TextAfterDecryption = clsUtil::ReturnCodetoName(TextAfterEncryption, EncryptionKey);

    cout << "Text Before Encryption: " << TextAfterDecryption << "\n";
    cout << "Text After Encryption: " << TextAfterEncryption << "\n";
    cout << "Text After Decryption: " << TextAfterDecryption << endl;


    return 0;
}
```
### <font color="#ffff00">Input: clsUtil.h</font>
```cpp
#pragma once
#include <iostream>
#include <cstdlib>
#include<string>
#include<vector>
#include <ctime>

#include "clsDate.h"
using namespace std;

class clsUtil {

    public:

    static void Srand() {
        srand((unsigned)time(NULL));
    }

    static int ReadRandomNumber(int from, int to) {

        int RandNamer = rand() % (to - from + 1) + from;

        return RandNamer;
    }

    enum enCharType {

        SmallLetter = 1,
        CapitalLetter = 2,
        SpecialCharacter = 3,
        Digit = 4,
        MixChar = 5
    };

    static char GetRandomCharacter(enCharType chartype) {

		if (chartype == MixChar)
		{
			int r = ReadRandomNumber(1, 3);

			switch (r)
			{
			case 1: chartype = SmallLetter; break;
			case 2: chartype = CapitalLetter; break;
			case 3: chartype = Digit; break;
			}
		}

		switch (chartype)
		{
		case SmallLetter:
			return char(ReadRandomNumber(97, 122));

		case CapitalLetter:
			return char(ReadRandomNumber(65, 90));

		case Digit:
			return char(ReadRandomNumber(48, 57));

		case SpecialCharacter:
			return char(ReadRandomNumber(33, 47));

		default:
			return char(ReadRandomNumber(65, 90));
		}
	}

    static string GenerateWord(enCharType chartype, short length) {

        string word;

        for (int i = 1;i <= length;i++)
        {
            word = word + GetRandomCharacter(chartype);
        }
        return word;
    }

    static string GenerateKey(enCharType CharType) {

        string key = "";

        key = GenerateWord(CharType, 4) + "-";
        key = key + GenerateWord(CharType, 4) + "-";
        key = key + GenerateWord(CharType, 4) + "-";
        key = key + GenerateWord(CharType, 4);

        return key;
    }
    static void GenerateKeys(short NumberOfKey, enCharType CharType) {

        cout << "\n";

        for (int i = 1; i <= NumberOfKey; i++)
        {
            cout << "Key [" << i << "]:";
            cout << GenerateKey(CharType) << endl;
        }

    }

    static void Swap_Number(int &num1,int &num2) {

        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    static void Swap_Double(double &D1, double &D2) {

        double temp = D1;
        D1 = D2;
        D2 = temp;
    }

    static void Swap_String(string &S1,string &S2) {

        string temp = S1;
        S1 = S2;
        S2 = temp;
    }

    static void SwapDates(clsDate & Date1, clsDate & Date2){

		clsDate TempDate;
		TempDate = Date1;
		Date1 = Date2;
		Date2 = TempDate;

	}

    static void ShuffleArray(int arr[100], int arrLength) {

        for (int i = 0; i < arrLength; i++)
        {
            Swap_Number(arr[ReadRandomNumber(1, arrLength) - 1], arr[ReadRandomNumber(1, arrLength) - 1]);
        }
    }

    static void ShuffleArray(string arr[100], int arrLength) {

        for (int i = 0; i < arrLength; i++)
        {
            Swap_String(arr[ReadRandomNumber(1, arrLength) - 1], arr[ReadRandomNumber(1, arrLength) - 1]);
        }
    }

    static void FillArrayWithRandomNumber(int arr3[100], int arrLenght, short From, short To) {

        for (int i = 0; i < arrLenght; i++)
        {
            arr3[i] = ReadRandomNumber(From, To);
        }

    }

    static void FillArrayWithRandomWords(string arr4[100], int arrLenght,enCharType CharType, short To) {

        for (int i = 0; i < arrLenght; i++)
        {
            arr4[i] = GenerateWord(CharType, To);
        }

    }

    static void FillArrayWithRandomKeys(string arr5[100], int arrLenght,enCharType CharType) {

        for (int i = 0; i < arrLenght; i++)
        {
            arr5[i] = GenerateKey(CharType);
        }

    }

    static string GetTabs(short Number0fTabs) {

        string t = "";

        for (int i = 1; i <= Number0fTabs; i++)
        {
            t = t + "\t";

        }

        return t;
    }

    static string ReverseNametoCode(string name, int EncryptionKey) {

        cout << "\n";

        for (int i = 0;i <= name.length();i++)
        {
            name[i] = char((int)name[i] + EncryptionKey);
        }

        return name;
    }
    static string ReturnCodetoName(string name, int EncryptionKey) {

        cout << "\n";

        for (int i = 0;i <= name.length(); i++)
        {
            name[i] = char((int)name[i] - EncryptionKey);
        }

        return name;
    }
    
};
```
### <font color="#ffff00">Input: clsDate.h</font>
```cpp
#pragma once

#include <iostream>
#include <cstdlib>
#include<string>
#include<vector>
#include <ctime>

using namespace std;

class clsDate
{

private:

	short _Day = 1;
	short _Month = 1;
	short _Year = 1900;

public:

	clsDate()
	{
		time_t t = time(0);
		tm* now = localtime(&t);
		_Day = now->tm_mday;
		_Month = now->tm_mon + 1;
		_Year = now->tm_year + 1900;
	}

	// clsDate(string sDate)
	// {

	// 	vector <string> vDate;
	// 	vDate = clsString::Split(sDate, "/");

	// 	_Day = stoi(vDate[0]);
	// 	_Month = stoi(vDate[1]);
	// 	_Year = stoi(vDate[2]);

	// }

	clsDate(short Day, short Month, short Year)
	{

		_Day = Day;
		_Month = Month;
		_Year = Year;

	}

	clsDate(short DateOrderInYear, short Year)
	{
		clsDate Date1 = GetDateFromDayOrderInYear(DateOrderInYear, Year);
		_Day = Date1.GetDay();
		_Month = Date1.GetMonth();
		_Year = Date1.GetYear();
	}

	void SetDay(short Day) {
		_Day = Day;
	}

	short GetDay() {
		return _Day;
	}
    // تم حذف سطر __declspec هنا

	void SetMonth(short Month) {
		_Month = Month;
	}

	short GetMonth() {
		return _Month;
	}
    // تم حذف سطر __declspec هنا


	void SetYear(short Year) {
		_Year = Year;
	}

	short GetYear() {
		return _Year;
	}
    // تم حذف سطر __declspec هنا

   void Print()
	{
		cout << DateToString() << endl;
	}

	static clsDate GetSystemDate()
	{
		time_t t = time(0);
		tm* now = localtime(&t);

		short Day, Month, Year;

		Year = now->tm_year + 1900;
		Month = now->tm_mon + 1;
		Day = now->tm_mday;

		return clsDate(Day, Month, Year);
	}

    static	bool IsValidDate(clsDate Date)
	{

		if (Date.GetDay() < 1 || Date.GetDay() > 31)
			return false;

		if (Date.GetMonth() < 1 || Date.GetMonth() > 12)
			return false;

		if (Date.GetMonth() == 2)
		{
			if (isLeapYear(Date.GetYear()))
			{
				if (Date.GetDay() > 29)
					return false;
			}
			else
			{
				if (Date.GetDay() > 28)
					return false;
			}
		}

		short DaysInMonth = NumberOfDaysInAMonth(Date.GetMonth(), Date.GetYear());

		if (Date.GetDay() > DaysInMonth)
			return false;

		return true;

	}

	bool IsValid()
	{
		return IsValidDate(*this);
	}

	static string DateToString(clsDate Date)
	{
		return  to_string(Date.GetDay()) + "/" + to_string(Date.GetMonth()) + "/" + to_string(Date.GetYear());
	}

    string DateToString()
	{
		return  DateToString(*this);
	}

	static bool isLeapYear(short Year)
	{
		return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
	}

	bool isLeapYear()
	{
		return isLeapYear(_Year);
	}

	static short NumberOfDaysInAYear(short Year)
	{
		return  isLeapYear(Year) ? 366 : 365; // تصحيح بسيط: السنة الكبيسة 366 والبسيطة 365
	}

	short NumberOfDaysInAYear()
	{
		return  NumberOfDaysInAYear(_Year);
	}

	static short NumberOfHoursInAYear(short Year)
	{
		return  NumberOfDaysInAYear(Year) * 24;
	}

	short NumberOfHoursInAYear()
	{
		return  NumberOfHoursInAYear(_Year);
	}

	static int NumberOfMinutesInAYear(short Year)
	{
		return  NumberOfHoursInAYear(Year) * 60;
	}

	int NumberOfMinutesInAYear()
	{
		return  NumberOfMinutesInAYear(_Year);
	}

	static int NumberOfSecondsInAYear(short Year)
	{
		return  NumberOfMinutesInAYear(Year) * 60;
	}

	int NumberOfSecondsInAYear()
	{
		return  NumberOfSecondsInAYear(_Year);
	}

	static short NumberOfDaysInAMonth(short Month, short Year)
	{

		if (Month < 1 || Month>12)
			return  0;

		int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];

	}

	short NumberOfDaysInAMonth()
	{
		return NumberOfDaysInAMonth(_Month, _Year);
	}

	static short DayOfWeekOrder(short Day, short Month, short Year)
	{
		short a, y, m;
		a = (14 - Month) / 12;
		y = Year - a;
		m = Month + (12 * a) - 2;
		return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
	}

	short DayOfWeekOrder()
	{
		return DayOfWeekOrder(_Day, _Month, _Year);
	}

	static string DayShortName(short DayOfWeekOrder)
	{
		string arrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
		return arrDayNames[DayOfWeekOrder];
	}

	static string MonthShortName(short MonthNumber)
	{
		string Months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
		return (Months[MonthNumber - 1]);
	}

	static void PrintMonthCalendar(short Month, short Year)
	{
		int NumberOfDays;
		int current = DayOfWeekOrder(1, Month, Year);
		NumberOfDays = NumberOfDaysInAMonth(Month, Year);

		printf("\n  _______________%s_______________\n\n", MonthShortName(Month).c_str());
		printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

		int i;
		for (i = 0; i < current; i++)
			printf("     ");

		for (int j = 1; j <= NumberOfDays; j++)
		{
			printf("%5d", j);
			if (++i == 7)
			{
				i = 0;
				printf("\n");
			}
		}
		printf("\n  _________________________________\n");
	}

	static clsDate GetDateFromDayOrderInYear(short DateOrderInYear, short Year)
	{
		clsDate Date;
		short RemainingDays = DateOrderInYear;
		short MonthDays = 0;

		Date.SetYear(Year);
		Date.SetMonth(1);

		while (true)
		{
			MonthDays = NumberOfDaysInAMonth(Date.GetMonth(), Year);
			if (RemainingDays > MonthDays)
			{
				RemainingDays -= MonthDays;
				Date.SetMonth(Date.GetMonth() + 1);
			}
			else
			{
				Date.SetDay(RemainingDays);
				break;
			}
		}
		return Date;
	}

	static bool IsDate1BeforeDate2(clsDate Date1, clsDate Date2)
	{
		return  (Date1.GetYear() < Date2.GetYear()) ? true : ((Date1.GetYear() == Date2.GetYear()) ? (Date1.GetMonth() < Date2.GetMonth() ? true : (Date1.GetMonth() == Date2.GetMonth() ? Date1.GetDay() < Date2.GetDay() : false)) : false);
	}

	static bool IsDate1EqualDate2(clsDate Date1, clsDate Date2)
	{
		return (Date1.GetYear() == Date2.GetYear() && Date1.GetMonth() == Date2.GetMonth() && Date1.GetDay() == Date2.GetDay());
	}

	static bool IsLastDayInMonth(clsDate Date)
	{
		return (Date.GetDay() == NumberOfDaysInAMonth(Date.GetMonth(), Date.GetYear()));
	}

	static clsDate AddOneDay(clsDate Date)
	{
		if (IsLastDayInMonth(Date))
		{
			if (Date.GetMonth() == 12)
			{
				Date.SetMonth(1);
				Date.SetDay(1);
				Date.SetYear(Date.GetYear() + 1);
			}
			else
			{
				Date.SetDay(1);
				Date.SetMonth(Date.GetMonth() + 1);
			}
		}
		else
		{
			Date.SetDay(Date.GetDay() + 1);
		}
		return Date;
	}

	static void SwapDates(clsDate & Date1, clsDate & Date2)
	{
		clsDate TempDate = Date1;
		Date1 = Date2;
		Date2 = TempDate;
	}

	static int GetDifferenceInDays(clsDate Date1, clsDate Date2, bool IncludeEndDay = false)
	{
		int Days = 0;
		short SawpFlagValue = 1;

		if (!IsDate1BeforeDate2(Date1, Date2))
		{
			SwapDates(Date1, Date2);
			SawpFlagValue = -1;
		}

		while (IsDate1BeforeDate2(Date1, Date2))
		{
			Days++;
			Date1 = AddOneDay(Date1);
		}

		return IncludeEndDay ? ++Days * SawpFlagValue : Days * SawpFlagValue;
	}

	enum enDateCompare { Before = -1, Equal = 0, After = 1 };

	static enDateCompare CompareDates(clsDate Date1, clsDate Date2)
	{
		if (IsDate1BeforeDate2(Date1, Date2))
			return enDateCompare::Before;

		if (IsDate1EqualDate2(Date1, Date2))
			return enDateCompare::Equal;

		return enDateCompare::After;
	}

};
```
---

## <font color="#bfbfbf"><u>Abu-Hedhoud Code</u>:</font>

### <font color="#ffff00">Input: Main.cpp</font>
```cpp
#include <iostream>
#include "clsUtil.h"

int main()

{
    clsUtil::Srand();
    cout << clsUtil::RandomNumber(1, 10) << endl;
    cout << clsUtil::GetRandomCharacter(clsUtil::CapitalLetter) << endl;
    cout << clsUtil::GenerateWord(clsUtil::MixChars, 8) << endl;
    cout << clsUtil::GenerateKey(clsUtil::MixChars) << endl;
    clsUtil::GenerateKeys(10, clsUtil::MixChars);

    cout << "\n";

    //Swap Int
    int x = 10, y = 20;
    cout << x << " " << y << endl;
    clsUtil::Swap(x, y);
    cout << x << " " << y << endl << endl;

    //Swap double
    double a = 10.5, b = 20.5;
    cout << a << " " << b << endl;
    clsUtil::Swap(a, b);
    cout << a << " " << b << endl << endl;

    //Swap String
    string s1 = "Ali", s2 = "Ahmed";
    cout << s1 << " " << s2 << endl;
    clsUtil::Swap(s1, s2);
    cout << s1 << " " << s2 << endl << endl;

    //Swap Dates
    clsDate d1(1, 10, 2022), d2(1, 1, 2022);
    cout << d1.DateToString() << " " << d2.DateToString() << endl;
    clsUtil::Swap(d1, d2);
    cout << d1.DateToString() << " " << d2.DateToString() << endl;

    //Shuffl Array

    //int array
    int Arr1[5] = { 1,2,3,4,5 };
    clsUtil::ShuffleArray(Arr1, 5);
    cout << "\nArray after shuffle:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr1[i] << endl;
    }

    //string array
    string Arr2[5] = { "Ali","Fadi","Ahmed","Qasem","Khalid" };
    clsUtil::ShuffleArray(Arr2, 5);
    cout << "\nArray after shuffle:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr2[i] << endl;
    }

    int Arr3[5];
    clsUtil::FillArrayWithRandomNumbers(Arr3, 5, 20, 50);
    cout << "\nArray after fill:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr3[i] << endl;
    }


    string Arr4[5];
    clsUtil::FillArrayWithRandomWords(Arr4, 5, clsUtil::MixChars, 8);
    cout << "\nArray after fill:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr4[i] << endl;
    }


    string Arr5[5];
    clsUtil::FillArrayWithRandomKeys(Arr5, 5, clsUtil::MixChars);
    cout << "\nArray after filling keys:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr5[i] << endl;
    }

    cout << "\nText1 " << clsUtil::Tabs(5) << "Text2\n";

    const short EncryptionKey = 2; //this is the key.

    string TextAfterEncryption, TextAfterDecryption;
    string Text = "Mohammed Abu-Hadhoud";
    TextAfterEncryption = clsUtil::EncryptText(Text, EncryptionKey);
    TextAfterDecryption = clsUtil::DecryptText(TextAfterEncryption, EncryptionKey);

    cout << "\nText Before Encryption : ";
    cout << Text << endl;
    cout << "Text After Encryption  : ";
    cout << TextAfterEncryption << endl;
    cout << "Text After Decryption  : ";
    cout << TextAfterDecryption << endl;

    system("pause>0");

    return 0;
}
```
### <font color="#ffff00">Input: clsUtil.h</font>
```cpp
#pragma once
#include <iostream>
#include <string>
#include "clsDate.h"

using namespace std;

class clsUtil
{
   
public:
    enum enCharType {
        SamallLetter = 1, CapitalLetter = 2,
        Digit = 3, MixChars = 4, SpecialCharacter = 5
    };

    static void  Srand()
    {
        //Seeds the random number generator in C++, called only once
        srand((unsigned)time(NULL));
    }

    static  int RandomNumber(int From, int To)
    {
        //Function to generate a random number
        int randNum = rand() % (To - From + 1) + From;
        return randNum;
    }

    static char GetRandomCharacter(enCharType CharType)
    {

        //updated this method to accept mixchars
        if (CharType == MixChars)
        {
            //Capital/Samll/Digits only
            CharType = (enCharType)RandomNumber(1, 3);

        }

        switch (CharType)
        {

        case enCharType::SamallLetter:
        {
            return char(RandomNumber(97, 122));
            break;
        }
        case enCharType::CapitalLetter:
        {
            return char(RandomNumber(65, 90));
            break;
        }
        case enCharType::SpecialCharacter:
        {
            return char(RandomNumber(33, 47));
            break;
        }
        case enCharType::Digit:
        {
            return char(RandomNumber(48, 57));
            break;
        }
    defualt:
        {
            return char(RandomNumber(65, 90));
            break;
        }
        }
    }

    static  string GenerateWord(enCharType CharType, short Length)

    {
        string Word;

        for (int i = 1; i <= Length; i++)

        {

            Word = Word + GetRandomCharacter(CharType);

        }
        return Word;
    }

    static string  GenerateKey(enCharType CharType = CapitalLetter)
    {

        string Key = "";


        Key = GenerateWord(CharType, 4) + "-";
        Key = Key + GenerateWord(CharType, 4) + "-";
        Key = Key + GenerateWord(CharType, 4) + "-";
        Key = Key + GenerateWord(CharType, 4);


        return Key;
    }

    static void GenerateKeys(short NumberOfKeys, enCharType CharType)
    {

        for (int i = 1; i <= NumberOfKeys; i++)

        {
            cout << "Key [" << i << "] : ";
            cout << GenerateKey(CharType) << endl;
        }

    }

    static void FillArrayWithRandomNumbers(int arr[100], int arrLength, int From, int To)
    {
        for (int i = 0; i < arrLength; i++)
            arr[i] = RandomNumber(From, To);
    }

    static void FillArrayWithRandomWords(string arr[100], int arrLength, enCharType CharType, short Wordlength)
    {
        for (int i = 0; i < arrLength; i++)
            arr[i] = GenerateWord(CharType, Wordlength);

    }

    static void FillArrayWithRandomKeys(string arr[100], int arrLength, enCharType CharType)
    {
        for (int i = 0; i < arrLength; i++)
            arr[i] = GenerateKey(CharType);
    }

    static  void Swap(int& A, int& B)
    {
        int Temp;

        Temp = A;
        A = B;
        B = Temp;
    }

    static  void Swap(double& A, double& B)
    {
        double Temp;

        Temp = A;
        A = B;
        B = Temp;
    }

    static  void Swap(bool& A, bool& B)
    {
        bool Temp;

        Temp = A;
        A = B;
        B = Temp;
    }

    static  void Swap(char& A, char& B)
    {
        char Temp;

        Temp = A;
        A = B;
        B = Temp;
    }

    static  void Swap(string& A, string& B)
    {
        string Temp;

        Temp = A;
        A = B;
        B = Temp;
    }

    static  void Swap(clsDate& A, clsDate& B)
    {
        clsDate::SwapDates(A, B);

    }

    static  void ShuffleArray(int arr[100], int arrLength)
    {

        for (int i = 0; i < arrLength; i++)
        {
            Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
        }

    }

    static  void ShuffleArray(string arr[100], int arrLength)
    {

        for (int i = 0; i < arrLength; i++)
        {
            Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
        }

    }

    static string  Tabs(short NumberOfTabs)
    {
        string t = "";

        for (int i = 1; i < NumberOfTabs; i++)
        {
            t = t + "\t";
            cout << t;
        }
        return t;

    }

    static string  EncryptText(string Text, short EncryptionKey)
    {

        for (int i = 0; i <= Text.length(); i++)
        {

            Text[i] = char((int)Text[i] + EncryptionKey);

        }

        return Text;

    }

    static string  DecryptText(string Text, short EncryptionKey)
    {

        for (int i = 0; i <= Text.length(); i++)
        {

            Text[i] = char((int)Text[i] - EncryptionKey);

        }
        return Text;

    }

};
```
### <font color="#ffff00">Input: clsDate.h</font>
```cpp
#pragma once

#include <iostream>
#include <cstdlib>
#include<string>
#include<vector>
#include <ctime>

using namespace std;

class clsDate
{

private:

	short _Day = 1;
	short _Month = 1;
	short _Year = 1900;

public:

	clsDate()
	{
		time_t t = time(0);
		tm* now = localtime(&t);
		_Day = now->tm_mday;
		_Month = now->tm_mon + 1;
		_Year = now->tm_year + 1900;
	}

	// clsDate(string sDate)
	// {

	// 	vector <string> vDate;
	// 	vDate = clsString::Split(sDate, "/");

	// 	_Day = stoi(vDate[0]);
	// 	_Month = stoi(vDate[1]);
	// 	_Year = stoi(vDate[2]);

	// }

	clsDate(short Day, short Month, short Year)
	{

		_Day = Day;
		_Month = Month;
		_Year = Year;

	}

	clsDate(short DateOrderInYear, short Year)
	{
		clsDate Date1 = GetDateFromDayOrderInYear(DateOrderInYear, Year);
		_Day = Date1.GetDay();
		_Month = Date1.GetMonth();
		_Year = Date1.GetYear();
	}

	void SetDay(short Day) {
		_Day = Day;
	}

	short GetDay() {
		return _Day;
	}
    // تم حذف سطر __declspec هنا

	void SetMonth(short Month) {
		_Month = Month;
	}

	short GetMonth() {
		return _Month;
	}
    // تم حذف سطر __declspec هنا


	void SetYear(short Year) {
		_Year = Year;
	}

	short GetYear() {
		return _Year;
	}
    // تم حذف سطر __declspec هنا

   void Print()
	{
		cout << DateToString() << endl;
	}

	static clsDate GetSystemDate()
	{
		time_t t = time(0);
		tm* now = localtime(&t);

		short Day, Month, Year;

		Year = now->tm_year + 1900;
		Month = now->tm_mon + 1;
		Day = now->tm_mday;

		return clsDate(Day, Month, Year);
	}

    static	bool IsValidDate(clsDate Date)
	{

		if (Date.GetDay() < 1 || Date.GetDay() > 31)
			return false;

		if (Date.GetMonth() < 1 || Date.GetMonth() > 12)
			return false;

		if (Date.GetMonth() == 2)
		{
			if (isLeapYear(Date.GetYear()))
			{
				if (Date.GetDay() > 29)
					return false;
			}
			else
			{
				if (Date.GetDay() > 28)
					return false;
			}
		}

		short DaysInMonth = NumberOfDaysInAMonth(Date.GetMonth(), Date.GetYear());

		if (Date.GetDay() > DaysInMonth)
			return false;

		return true;

	}

	bool IsValid()
	{
		return IsValidDate(*this);
	}

	static string DateToString(clsDate Date)
	{
		return  to_string(Date.GetDay()) + "/" + to_string(Date.GetMonth()) + "/" + to_string(Date.GetYear());
	}

    string DateToString()
	{
		return  DateToString(*this);
	}

	static bool isLeapYear(short Year)
	{
		return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
	}

	bool isLeapYear()
	{
		return isLeapYear(_Year);
	}

	static short NumberOfDaysInAYear(short Year)
	{
		return  isLeapYear(Year) ? 366 : 365; // تصحيح بسيط: السنة الكبيسة 366 والبسيطة 365
	}

	short NumberOfDaysInAYear()
	{
		return  NumberOfDaysInAYear(_Year);
	}

	static short NumberOfHoursInAYear(short Year)
	{
		return  NumberOfDaysInAYear(Year) * 24;
	}

	short NumberOfHoursInAYear()
	{
		return  NumberOfHoursInAYear(_Year);
	}

	static int NumberOfMinutesInAYear(short Year)
	{
		return  NumberOfHoursInAYear(Year) * 60;
	}

	int NumberOfMinutesInAYear()
	{
		return  NumberOfMinutesInAYear(_Year);
	}

	static int NumberOfSecondsInAYear(short Year)
	{
		return  NumberOfMinutesInAYear(Year) * 60;
	}

	int NumberOfSecondsInAYear()
	{
		return  NumberOfSecondsInAYear(_Year);
	}

	static short NumberOfDaysInAMonth(short Month, short Year)
	{

		if (Month < 1 || Month>12)
			return  0;

		int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];

	}

	short NumberOfDaysInAMonth()
	{
		return NumberOfDaysInAMonth(_Month, _Year);
	}

	static short DayOfWeekOrder(short Day, short Month, short Year)
	{
		short a, y, m;
		a = (14 - Month) / 12;
		y = Year - a;
		m = Month + (12 * a) - 2;
		return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
	}

	short DayOfWeekOrder()
	{
		return DayOfWeekOrder(_Day, _Month, _Year);
	}

	static string DayShortName(short DayOfWeekOrder)
	{
		string arrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
		return arrDayNames[DayOfWeekOrder];
	}

	static string MonthShortName(short MonthNumber)
	{
		string Months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
		return (Months[MonthNumber - 1]);
	}

	static void PrintMonthCalendar(short Month, short Year)
	{
		int NumberOfDays;
		int current = DayOfWeekOrder(1, Month, Year);
		NumberOfDays = NumberOfDaysInAMonth(Month, Year);

		printf("\n  _______________%s_______________\n\n", MonthShortName(Month).c_str());
		printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

		int i;
		for (i = 0; i < current; i++)
			printf("     ");

		for (int j = 1; j <= NumberOfDays; j++)
		{
			printf("%5d", j);
			if (++i == 7)
			{
				i = 0;
				printf("\n");
			}
		}
		printf("\n  _________________________________\n");
	}

	static clsDate GetDateFromDayOrderInYear(short DateOrderInYear, short Year)
	{
		clsDate Date;
		short RemainingDays = DateOrderInYear;
		short MonthDays = 0;

		Date.SetYear(Year);
		Date.SetMonth(1);

		while (true)
		{
			MonthDays = NumberOfDaysInAMonth(Date.GetMonth(), Year);
			if (RemainingDays > MonthDays)
			{
				RemainingDays -= MonthDays;
				Date.SetMonth(Date.GetMonth() + 1);
			}
			else
			{
				Date.SetDay(RemainingDays);
				break;
			}
		}
		return Date;
	}

	static bool IsDate1BeforeDate2(clsDate Date1, clsDate Date2)
	{
		return  (Date1.GetYear() < Date2.GetYear()) ? true : ((Date1.GetYear() == Date2.GetYear()) ? (Date1.GetMonth() < Date2.GetMonth() ? true : (Date1.GetMonth() == Date2.GetMonth() ? Date1.GetDay() < Date2.GetDay() : false)) : false);
	}

	static bool IsDate1EqualDate2(clsDate Date1, clsDate Date2)
	{
		return (Date1.GetYear() == Date2.GetYear() && Date1.GetMonth() == Date2.GetMonth() && Date1.GetDay() == Date2.GetDay());
	}

	static bool IsLastDayInMonth(clsDate Date)
	{
		return (Date.GetDay() == NumberOfDaysInAMonth(Date.GetMonth(), Date.GetYear()));
	}

	static clsDate AddOneDay(clsDate Date)
	{
		if (IsLastDayInMonth(Date))
		{
			if (Date.GetMonth() == 12)
			{
				Date.SetMonth(1);
				Date.SetDay(1);
				Date.SetYear(Date.GetYear() + 1);
			}
			else
			{
				Date.SetDay(1);
				Date.SetMonth(Date.GetMonth() + 1);
			}
		}
		else
		{
			Date.SetDay(Date.GetDay() + 1);
		}
		return Date;
	}

	static void SwapDates(clsDate & Date1, clsDate & Date2)
	{
		clsDate TempDate = Date1;
		Date1 = Date2;
		Date2 = TempDate;
	}

	static int GetDifferenceInDays(clsDate Date1, clsDate Date2, bool IncludeEndDay = false)
	{
		int Days = 0;
		short SawpFlagValue = 1;

		if (!IsDate1BeforeDate2(Date1, Date2))
		{
			SwapDates(Date1, Date2);
			SawpFlagValue = -1;
		}

		while (IsDate1BeforeDate2(Date1, Date2))
		{
			Days++;
			Date1 = AddOneDay(Date1);
		}

		return IncludeEndDay ? ++Days * SawpFlagValue : Days * SawpFlagValue;
	}

	enum enDateCompare { Before = -1, Equal = 0, After = 1 };

	static enDateCompare CompareDates(clsDate Date1, clsDate Date2)
	{
		if (IsDate1BeforeDate2(Date1, Date2))
			return enDateCompare::Before;

		if (IsDate1EqualDate2(Date1, Date2))
			return enDateCompare::Equal;

		return enDateCompare::After;
	}

};
```
---

Output:
```
2
2
9LA4bNX4
vb66-3Y6L-yJl1-9iIm

Key [1]:ZpN2-j5hf-1emB-ALO5
Key [2]:PPw9-e4Lr-K0g3-Pq2x
Key [3]:iv11-7Nt4-1dYu-MWqb
Key [4]:96M9-nTDl-MwG1-6ftx
Key [5]:6d16-F4PS-5P49-6ohJ
Key [6]:9n18-T45o-c160-d32d
Key [7]:YLjg-z0Ju-KDpv-2g49
Key [8]:BBLR-IOQJ-t9a7-8kW2
Key [9]:zO70-1wY5-Ud0i-uw9S
Key [10]:juQh-Kq79-sbpI-f9i6

10 20
20 10

10.5 20.5
20.5 10.5

Ali Ahmed
Ahmed Ali

1/10/2022 1/1/2022
1/1/2022 1/10/2022

Array After Shuffle:
3
4
5
2
1

Array After Shuffle:
Ahmed
Quasim
Ali
Khalid
Fadi

Array After Fill:
20
29
43
31
42

Array After Fill:
yH0gD97z
wkGAjK31
eD9vre9S
flG1XScj
A2A5j0tr

Array After Fillying Keys:
2Nqy-f7iR-S9n0-TMON
5uS1-J81e-SCJe-L2ZN
i1a3-RfMo-p5kh-IZj3
xWPn-1pFC-3x1f-G1UK
Fu0F-b013-8cH5-qGIF

Text1					Text2


Text Before Encryption: Mohemmed Abu-Hedhoud
Text After Encryption: Oqjgoogf"Cdw/Jgfjqwf
Text After Decryption: Mohemmed Abu-Hedhoud
