#include<iostream>
#include<vector>
#include<string>

using namespace std;


short GetNumOfdayByCalculate(short Year, short Month, short Day) {

    short a = 0, y = 0, m = 0, d = 0;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + 12 * a -2;
    
	return (Day + y + (y/4) - (y/100) + (y/400) + (31 * m/12)) % 7;

}
string GetShortNameOfDay(short NumOfdayByCalculate) {

    string ArrDayNames[7] = {
        "Sun","Mon","Tue","Wed","Thu","Fri","Sat"
    };

    return ArrDayNames[NumOfdayByCalculate];
}

short ReadYearNumber() {
    
    short Year = 0;
    cout << "Enter the year: ";
    cin >> Year;

    return Year;
}
short ReadMonthNumber() {

    short Month = 0;
    cout << "\nEnter the month: ";
    cin >> Month;

    return Month;
}
short ReadDayNumber() {
    
    short Day = 0;
    cout << "\nEnter the day: ";
    cin >> Day;

    return Day;
}

int main() {

    short Year = ReadYearNumber();
    short Month = ReadMonthNumber();
    short Day = ReadDayNumber();
    
    cout << "\nDate      : " << Day << "/" << Month << "/" << Year;
    cout << "\nDay Order : " << GetNumOfdayByCalculate(Year, Month, Day);
    cout << "\nDay Names : " << GetShortNameOfDay(GetNumOfdayByCalculate(Year, Month, Day));

    return 0;
}