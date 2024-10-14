#include <iostream>
#include <string>


using namespace std;


struct stDate
{
    short Year;
    short Month;
    short Day;
};


stDate ReadData()
{
    stDate Date;

    cout <<"\nEnter The Day: ";
    cin >> Date.Day;

    cout <<"Enter The Month: ";
    cin >> Date.Month;

    cout <<"Enter The Year: ";
    cin >> Date.Year;

    return Date;

}





bool IsDate1BeforDate2(stDate Date1, stDate Date2)
{

    return (Date1.Year < Date2.Year)?true: ((Date1.Year == Date2.Year) ?(Date1.Month < Date2.Month? true :
    (Date1.Month == Date2.Month? Date1.Day < Date2.Day: false )): false);

}

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
    return(Date1.Year == Date2.Year)? ((Date1.Month == Date2.Month)? ((Date1.Day == Date2.Day)? true: false):false):false;
}

bool IsDateAfterDate2(stDate Date1, stDate Date2)
{
    
   return(!IsDate1BeforDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));

}


int main()
{

    stDate Date1, Date2;

    cout<<"Enter The Date1: ";
    Date1 = ReadData();


    cout<<"\nEnter The Date2";
    Date1 = ReadData();


    if  (IsDateAfterDate2(Date1, Date2))

        cout << "\nYes, Date1 is After Date2.";
    else
        cout << "\nNo, Date1 is NOT After Date2.";




    return 0;
}