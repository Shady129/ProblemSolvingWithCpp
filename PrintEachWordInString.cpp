// Task: Print EachWord In String



#include <iostream>
#include <string>
#include <string>
#include <vector>

using namespace std;

string ReadWord()
{

    string Word;

    cout <<"Enter The Word: ";
    getline(cin, Word);
    return Word;

}


void PrintEachWordInString(string S1)
{
    string Delima = " ";

    cout << "\nYour string wrords are: \n\n";
    short pos = 0;
    string sWord;

    while ((pos = S1.find(Delima))!= std::string::npos)
    {
        
        sWord = S1.substr(0, pos);

        if(sWord != "")
        {
            cout << sWord << endl;
        }
        S1.erase(0, pos + Delima.length());

    }
        if(S1 != "")
        {
            cout << S1 << endl; 
        }
    
}




int main()
{

    PrintEachWordInString(ReadWord());

    return 0;

}