---
creation_date: 2026-04-23
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">My Input Sulution:</font> 
---

### <font color="#ffff00">My Input:</font>
```cpp
#include <iostream>
#include <cstdlib>
#include<string>
#include<vector>
#include <ctime>
#include <limits>

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

class clsValidateDate {

public:

	static bool IsNumberBetween(short NumberFrom, short NumberBetween, short NumberTo) {
		return (NumberBetween > NumberFrom) && (NumberBetween < NumberTo);
	}
	static bool IsNumberBetween(int NumberFrom, int NumberBetween, int NumberTo) {
		return (NumberBetween > NumberFrom) && (NumberBetween < NumberTo);
	}
	static bool IsNumberBetween(float NumberFrom, float NumberBetween, float NumberTo) {
		return (NumberBetween > NumberFrom) && (NumberBetween < NumberTo);
	}
	static bool IsNumberBetween(double NumberFrom, double NumberBetween, double NumberTo) {
		return (NumberBetween > NumberFrom) && (NumberBetween < NumberTo);


    static bool IsDateBetweenTwoDates( clsDate Date, clsDate FromDate, clsDate ToDate) {

		if(clsDate::IsDate1BeforeDate2(ToDate, FromDate))
		{
			clsDate::SwapDates(FromDate, ToDate);
		}
        return (clsDate::CompareDates(Date, FromDate) == clsDate::enDateCompare::After || clsDate::CompareDates(Date, FromDate) == clsDate::enDateCompare::Equal) &&
			(clsDate::CompareDates(Date, ToDate) == clsDate::enDateCompare::Before || clsDate::CompareDates(Date, ToDate) == clsDate::enDateCompare::Equal);
    }
	
	static int ReadIntNumber(string InvalideMessage = "Invalide Int Number, Enter again:") {

		int Number = 0;
		cin >> Number;

		while(cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

			cout << InvalideMessage;
			cin >> Number;
		}

		return  Number;
	}

	static int ReadIntNumberBetween(int FromNumber, int NumberTo, string InvalideMessage) {

		int Number = ReadIntNumber();
		
		while(!IsNumberBetween(Number, FromNumber, NumberTo))
		{
			cout << InvalideMessage;
			cin >> Number;
		}

		return Number;
	}

	static double ReadDBNumber(string InvalideMessage = "Invalide Double Number, Enter again: ") {

		double Db = 0;
		cin >> Db;

		int a = Db;

		while (a == Db)
		{
			cout << InvalideMessage;
			cin >> Db;
		}

		return  Db;
	}	

	static double ReadDoubleNumberBetween(double FromNumber, double NumberTo, string InvalideMessage) {

		double Number = ReadDBNumber();
		int IntNum = Number;

		while(!IsNumberBetween(Number, FromNumber, NumberTo) && Number == IntNum)
		{
			cout << InvalideMessage;
			cin >> Number;
		}

		return Number;
	}


};

int main() {

	cout << clsValidateDate::IsNumberBetween(5, 1, 10) << endl;
    cout << clsValidateDate::IsNumberBetween(5.1, 1.1, 10.1) << endl;


	cout << clsValidateDate::IsDateBetweenTwoDates(clsDate(), clsDate(1, 2, 2026), clsDate(1,12,2026)) << endl;
	cout << clsValidateDate::IsDateBetweenTwoDates(clsDate(), clsDate(1,12,2026), clsDate(1, 2, 2026)) << endl;
	
	cout << "\nEnter a valide Number: \n";
	int Num = clsValidateDate::ReadIntNumber("Invalide Int Number, Enter again: \n");
	cout << "Number is: " << Num << endl;

	cout << "\nEnter a Number Between 1 and 5: \n";
	int Num2 = clsValidateDate::ReadIntNumberBetween(1, 5, "Number is not within the range, Enter again: \n");
	cout << "Number is: " << Num2 << endl;
	
	cout << "\nEnter a valide Double Number: \n";
	double Db = clsValidateDate::ReadDBNumber("Invalide Double Number, Enter again: \n");
	cout << "Number is: " << Db << endl;

	cout << "\nEnter a Double Number Between 1 and 5: \n";
	double Db2 = clsValidateDate::ReadDoubleNumberBetween(1.1, 5.5, "Number is not within the range, Enter again: \n");
	cout << "Number is: " << Db2 << endl;


	
	
    return 0;
}
```

