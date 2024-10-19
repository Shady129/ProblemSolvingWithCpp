#include <iostream>

using namespace std;


short ReadYear(string Message)
{
    short Number;
    cout << Message;

    cin >> Number;

    return Number;
}


short ReadMonth(string Message)
{
    short Number;
    cout << Message;

    cin >> Number;

    return Number;
}




bool IsLeapYear(short Year)
{
    return(Year % 4 == 0 && Year % 100 != 0  || Year % 4 == 0);
}


short NumberOfDayMonth(short Month , short Year)
{
    if(Month<1 || Month>12)

    return 0;

    int NumberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return(Month == 2)? (IsLeapYear(Year)? 29: 28) :  NumberOfDays[Month - 1]; 

}



int main()
{

    short Year = ReadYear("Enter The Year: ");
    short Month = ReadMonth("Enter The Month: ");


    cout << "\n Number Of Days In Month ["<< Month << "] is "<< NumberOfDayMonth(Month , Year);


}  


