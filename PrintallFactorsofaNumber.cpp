/*
Print all Factors of a Number:
Create a program to find the factors of a number.
*/

#include <iostream>

using namespace std;


int ReadIntger()
{
    int Number;

    cout << "Enter The Number: ";
    cin >> Number;


    return Number;
}


void PrintallFactorsofaNumber(int Number)
{
    for(int i = 1; i <= Number; i++)
    {
        if(Number % i == 0)
        {
            cout << i << endl;
        }
    }
}


int main()
{

    int Number =  ReadIntger();

    PrintallFactorsofaNumber(Number);

    return 0;

}
