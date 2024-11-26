/*
Problem Description:
Create a program to find the youngest brother among 3 based on their ages.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  
    int Jack;
    int Roman;
    int Johnny;

    // get age input for jack, roman and johnny
    
    cin >> Jack >> Roman >> Johnny;

    // use if else to find the youngest brother
    
    if(Jack < Roman && Jack < Johnny)
    {
        cout << "Jack";
    }
    else if(Roman < Jack && Roman < Johnny)
    {
        cout << "Roman";
    }
     else
        cout << "Johnny";
 

    return 0;
}