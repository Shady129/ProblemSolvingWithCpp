// // Write a program to read character and then check if that character is vowel or not. 


#include <iostream>
#include <string>
using namespace std;


char ReadLetter()
{

    char letter;

    cout <<"Enter The Word: ";
    cin >> letter;
    
    return letter;
}


bool IsVowel(char letter)
{
    letter = tolower(letter);

    return((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o')|| (letter == 'u'));
}


int main()
{


    char letter = ReadLetter();

    if(IsVowel(letter))
    
        cout <<"\nYes letter " << letter << " is vowel";
    
    else
        cout <<"\nNo letter " << letter << " is not vowel";

        return 0;

}