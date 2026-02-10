/*
Problem:
Write a program that reads a student's mark.
The program should check whether the student has passed or failed.

Rules:
- If the mark is 50 or greater, the student passes.
- Otherwise, the student fails.

Input:
- Mark (integer)

Output:
- "Passed" if the student passes
- "Failed" if the student fails
*/


#include <iostream>

using namespace std;


enum enPassFail  { Pass = 1, Fail = 2 };

int ReadNumber()
{
	int Number;

	cout << "Enter the number: ";
	cin >> Number;

	return Number;
}


enPassFail CheckMark(int Mark)
{

	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}


void PrintResult(int Mark)
{
	if (CheckMark(Mark) == enPassFail::Pass)
	{
		cout << "\nPassed" << endl;
	}
	else
	{
		cout << "\nFailed" << endl;
	}
}



int main()
{

	PrintResult(ReadNumber());

	return 0;
}






