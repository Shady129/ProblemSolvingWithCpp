#include <iostream>


using namespace std;



int ReadPositiveNumber(string message)
{

	int Number;

	do
	{
		cout << "Enter The Number: ";
		cin >> Number;


	} while (Number <= 0);


	return Number;
}




int CountNumber(int Number, int DigitCheck)
{

	int Reminder = 0;
	int FreqCount = 0;

	while (Number > 0)
	{

		Reminder = Number % 10;
		Number = Number / 10;

		if (DigitCheck == Reminder)
		{
			FreqCount += 1;
		}

	}

	return FreqCount;

}

int main()
{

	int Number = ReadPositiveNumber("Enter The Number: ");
	int DigitCheck = ReadPositiveNumber("Enter The Digit: ");

	cout << CountNumber(Number, DigitCheck);


	return 0;


}