
//Task: Write a program print all prime numbers from 1  to N.

#include<iostream>
#include <string>
#include <math.h>

using namespace std;


enum enPrimeNotPrime {Prime = 1, NotPrime = 2};


int ReadPositiveNumber()
{
    short Number = 0;

    do
    {

    cout<< "Enter The Positive Number: ";
    cin >> Number;


    } while (Number <= 0);
    
    return Number;
}




enPrimeNotPrime CheckNumber(int Number)
{
    int M  = round(Number / 2);

    for(int counter = 2; counter <= M; counter++)
    {
        if(Number % counter == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;
}




void PrintAllPrimeNumbers(int Number)
{

    cout << "\n";
    cout <<"Prime Number From: " << 1  << "To" << Number;
    cout << "Are:" << endl;

    for(int i = 1; i <= Number; i++)
    {

        if(CheckNumber(i) == enPrimeNotPrime::Prime)
        {
            cout << i << endl;
        }
    }


}

int main()
{

    int Number = ReadPositiveNumber();

    PrintAllPrimeNumbers(Number);



    return 0;

}