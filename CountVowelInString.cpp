// Write a program to read string then count all vowels in the string.


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





short CountVowelInString(string Word)
{
     short Counter = 0;


     for(short i = 0; i < Word.length(); i++)
     {
        if(IsVowel(Word[i]))
        
         Counter++;
        
     }
     
    return Counter;
}



int main()
{


string Word = ReadWord();

    
cout << CountVowelInString(Word);



    return 0;

}