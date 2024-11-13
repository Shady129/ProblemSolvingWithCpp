/*Create a double array marks with length 4 to store the marks obtained by the student.
Get input values for the array.
Find the sum of all obtained marks.
Create a total_marks variable and assign value 400.0 to it.
Find the percentage obtained by the student and print it.*/


#include <iostream>
using namespace std;

int main() {

    double marks[4];
    double obtained_marks = 0.0;

    // get input value for obtained marks
    
    for(int i = 0; i < 4; ++i)
    {
        cin >> marks[i];

        obtained_marks = obtained_marks + marks[i];

    }


    //initiialize total and obtained marks
    double total_marks = 400.0;
  
    // find the percentage and print it
    

       double percentage =  (obtained_marks / total_marks) * 100;

       cout << percentage;


    return 0;
}