// Create a program to find the greatest element in an array.

#include <iostream>
using namespace std;

// function that takes num array as argument
// returns an integer address/pointer
int* find_greatest(int num[3])
{

    int* greatest_num = &num[0];


    for (int i = 0; i < 3; i++)
    {

        if (num[i] > *greatest_num)
        {

            *greatest_num = num[i];

        }
    }


    return greatest_num;
}



int main()
{

    // create an int array of size 3
    int num[3];

    // get input for array elements
    cin >> num[0] >> num[1] >> num[2];

    // call the find_greatest() function
    // pass marks[] as argument
    int* ptr = find_greatest(num);



    // print the greatest element by dereferencing ptr
    cout << *ptr;

    return 0;
}