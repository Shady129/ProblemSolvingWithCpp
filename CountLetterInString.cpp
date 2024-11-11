// Write a program to read a string and read character then count the character in that string(Match Case Or Not)


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



char ReadLetter()
{
    char Letter;

    cout <<"Enter The Letter: ";
    cin >> Letter;

    return Letter;
}



int CountLettersInString(string Word, char Letter)
{

    short Counter = 0;

    for(int i = 0; i < Word.length(); ++i)
    {
        if(Word[i] == Letter)
        {
            Counter++;
        }
    }

    return Counter;
}




int main()
{
    
    string Word = ReadWord();


    char Letter = ReadLetter();



    cout << "\nThe numbers of "<< Letter << " letter you have entered is: "<< CountLettersInString(Word, Letter);

    return 0;
}