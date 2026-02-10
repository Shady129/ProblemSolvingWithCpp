/*
Problem:
Write a program that reads an integer number from the user.
The program should calculate half of the entered number.

Input:
- Number (integer)

Output:
- Half of the number (floating-point value)
*/


#include <iostream>
#include <string>

using namespace std;


int ReadNumber()
{
	int Number;

	cout << "Enter the number: ";
	cin >> Number;


	return Number;
}


float CalculateHalfNumber(int Number)
{

	return (float)Number / 2;


}



void PrintResult(int Number)
{

	cout << "Half of " << Number << " is " << (CalculateHalfNumber(Number));
}




int main()
{
	//int Number = ReadNumber();
	PrintResult(ReadNumber());

	return 0;
}


