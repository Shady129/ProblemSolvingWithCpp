
//Task: Write a program to read a date, and print the day name of week.


#include <iostream>

using namespace std;


short ReadYear(string Message)
{
    short Year;
    cout << Message;

    cin >> Year;

    return  Year;
}


short ReadMonth(string Message)
{
    short Month;

    cout << Message;

    cin >> Month;

    return Month;
}



short ReadDay(string Message)
{
    short Day;

    cout << Message;

    cin >> Day;

    return Day;
}



short DayOfWeekOrder(short Day, short Month, short Year)
{
    short a, y, m;

    a = ( 14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;


    return(Day + y + (y /4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

}


string DayShortName(short DayOfWeekOrder)
{

    string arrDayNames[] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};

    return arrDayNames[DayOfWeekOrder];
    
}



int main()
{

    short Year = ReadYear("Enter The Year: ");
    short Month = ReadMonth("Enter The Month: ");
    short Day = ReadDay("Enter The Day: ");

    short DayOrder = DayOfWeekOrder(Day, Month, Year);

    cout << DayShortName(DayOrder);



    return 0;


}