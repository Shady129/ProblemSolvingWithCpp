/*
Problem:
Write a program that reads a person's first name and last name.
The program should combine the first name and the last name into one full name.

Input:
- FirstName (string)
- LastName (string)

Output:
- FullName (string)
*/


#include <iostream>

using namespace std;



struct stInfo
{
	string FirstName;
	string LastName;
};



stInfo ReadInfo()
{

	stInfo Info;

	cout << "Enter your first name: " << endl;
	cin >> Info.FirstName;


	cout << "Enter your last name: " << endl;
	cin >> Info.LastName;

	
	return Info;
}



string GetFullName(stInfo Info)
{
	string FullName =  Info.FirstName + " " + Info.LastName;

	return FullName;
}



void PrintFullName(string FullName)
{
	cout << FullName;
}





int main()
{

	PrintFullName(GetFullName(ReadInfo()));

	return 0;

}












