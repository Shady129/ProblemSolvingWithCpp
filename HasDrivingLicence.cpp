/*
Problem:
Write a program that reads a person's age and whether they have a driving license.
The program should decide if the person is accepted or rejected based on the following rules:

1- The person's age must be 21 or older.
2- The person must have a valid driving license.

If both conditions are true, print "Hired".
Otherwise, print "Rejected".

Input:
- Age (integer)
- HasDrivingLicence (1 for Yes, 0 for No)

Output:
- "Hired" or "Rejected"
*/

#include <iostream>
using namespace std;




struct stInfo
{
	int Age;
	bool HasDrivingLicence;

};


stInfo ReadInfo()
{
	stInfo Info;
	int hasLicence;

	cout << "Enter your age: " << endl;
	cin >> Info.Age;


	cout << "Do you have driving licence ? (1 = Yes, 0 = No) : " << endl;
	cin >> hasLicence;


	Info.HasDrivingLicence = (hasLicence == 1);
	

	return Info;

};



bool IsAccepted(stInfo Info)
{

	return (Info.Age >= 21 && Info.HasDrivingLicence);
}


void PrintResult(stInfo Info)
{
	if (IsAccepted(Info))
	{
		cout << "\nHired";
	}
	else
	{
		cout << "\nRejected";
	}
}




int main()
{

	PrintResult(ReadInfo());

	return 0;

}