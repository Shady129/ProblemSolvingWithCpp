#include <iostream>


using namespace std;



int ReadPositiveNumber(string message)
{

	int Number;

	do
	{
		cout << message;
		cin >> Number;


	} while (Number <= 0);


	return Number;
}




bool IsLeapYear( int Year)
{


	return(Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
	

}

int main()
{

	int Number = ReadPositiveNumber("Enter Positive Number: ");

	if (IsLeapYear(Number))
	{
		cout << "Leap Year";
	}
	else
		cout << "Not Leap Year";




	return 0;


}