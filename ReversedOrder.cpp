#include<iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
    int Number;

    do{

        cout << message << endl;

        cin >> Number;
    }while(Number <= 0);

    return Number;
}

void PrintingReversedNumber(int Number)
{

    while(Number > 0)
    {
        int Reminder;

        Reminder = Number % 10;
        Number = Number / 10;

        cout << Reminder;
    }
}


int main()
{
    PrintingReversedNumber(ReadPositiveNumber("Enter The Number: "));
    
    return 0;
}