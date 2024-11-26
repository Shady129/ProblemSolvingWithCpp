/*
Problem Description:
Create a program to check if a given number falls in the given range.

*/

#include <iostream>
using namespace std;

int main() {

    // create number and range variables
    int number, range;
  
    // get input for number and range
    cin >> number >> range;

    // create and initialize boolean variable to false
    bool in_range = false;

    // use for loop to check if number is within range
    for (int i = 0; i <= number; ++i) {
        
        // change in_range to 1 and break the loop if number is in range
        if(number >= 0 && number <= range){
            in_range = true;
            break;
        }
    }
   
    // use if...else to print appropriate output
    if(in_range)
    {
    
        cout << "Within Range";

    }
    else
    {
        cout << "Out of Range";
    }

    return 0;
}