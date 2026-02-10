/*
Problem:
Write a program that reads a person's age and whether they have previous work experience.
The program should decide if the person is accepted for a job or not based on the following rules:

1- The person's age must be 25 or older.
2- The person must have work experience.

If both conditions are true, print "Accepted".
Otherwise, print "Rejected".

Input:
- Age (integer)
- HasExperience (1 for Yes, 0 for No)

Output:
- "Accepted" or "Rejected"
*/



#include <iostream>
using namespace std;



struct stInfo
{

	int Age;
	bool HasWorkExperience;

};


stInfo ReadInfo()
{

	stInfo Info;

	int hasExperience;

	cout << "\n Please enter your age? " << endl;
	cin >> Info.Age;


	cout << "Do you have work experience ? (1 = Yes, 0 = No) : " << endl;
	cin >> hasExperience;



	Info.HasWorkExperience = (hasExperience == 1);

	return Info;
}




bool IsAccepted(stInfo Info)
{
	return (Info.Age >= 25 && Info.HasWorkExperience);
}





void PrintResult(stInfo Info)
{

	if (IsAccepted(Info))
	{

		cout << "\nAccepted";

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






