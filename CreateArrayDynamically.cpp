//Create a program to dynamically allocate memory to an array.

#include <iostream>

using namespace std;

int main() {

    // int variable to determine number of array elements
    int n;
    cin >> n;

    // dynamically create array with n elements
  int* marks = new int[n];

    // loop that runs from 0 to n-1
    for (int i = 0; i < n; ++i)
    {

        // input array element
        cin >> *(marks + i);
    }

    // print the values
    for (int i = 0; i < n; ++i) {
        cout << *(marks + i) << endl;
    }

    // deallocate memory
    delete marks;

    return 0;
}