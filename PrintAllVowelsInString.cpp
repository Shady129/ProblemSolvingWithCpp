//Write a program to read string then print vowels.


#include <iostream>
#include <string>
using namespace std;


string ReadWord()
{

    string Word;

    cout <<"Enter The Word: ";
    getline(cin, Word);
    
    return Word;
}




bool IsVowel(char letter)
{
    letter = tolower(letter);

    return((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o')|| (letter == 'u'));
}


void PrintVowels(string letter)
{

    for(short i = 0; i < letter.length(); i++)
    {
        if(IsVowel(letter[i]))
        {
            cout << letter[i] << endl;
        }
    }
}




int main()
{
    string word = ReadWord();
    PrintVowels(word);


}