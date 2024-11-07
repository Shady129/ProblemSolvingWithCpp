#include <iostream>
#include <string>


using namespace std;


string ReadWord()
{
    string Word;

    cout <<"Enter The Word:";
    getline(cin, Word);

    return Word;
}


int CountCapitalLetter(string Cword)
{
    int Counter = 0;

    for(int i = 0; i < Cword.length(); i++)
    {
        if(isupper(Cword[i]))
        {
            Counter++;
        }
    }
    return Counter;
}



int CountSmallLetter(string Sword)
{
    int Counter = 0;

    for(int i = 0; i < Sword.length(); i++)
    {
        if(islower(Sword[i]))
        {
            Counter++;
        }
    }
    return Counter;
}








int main()
{
    cout << "\nNumber Of Capital letters is: \n"<< CountCapitalLetter(ReadWord());
    cout << "\n\nNumber Of Small letters is:  \n"<< CountSmallLetter(ReadWord());

    return 0;
}