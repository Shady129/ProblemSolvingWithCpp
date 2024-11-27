/*
Print all Factors of a Number:
Create a program to find the factors of a number.
*/
#include <iostream>
using namespace std;

int main() {

    int number;
    cin >> number;

    // loop from 1 to number
    for (int i = 1; i <= number; i++) {

        // check if number is divisible by i

        if(number % i == 0)
        {
            cout << i << endl;
        }

    }

    return 0;
}