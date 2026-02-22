/*
   Print the first N Fibonacci numbers using a loop.
   Each number = sum of the previous two numbers.
*/


#include <iostream>
using namespace std;


void PrintFibonacciNumberByLoop(short Number)
{


	int FibNumber = 10;
	int prev2 = 0;
	int prev1 = 1;


	cout << "1 ";

	for (short i = 2; i <= Number; i++)
	{

		FibNumber = prev2 + prev1;
		
		cout << FibNumber << " ";


		prev2 = prev1;

		prev1 = FibNumber;

	}

}


int main()
{
	PrintFibonacciNumberByLoop(10);

	return 0;

}