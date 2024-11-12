// Write a program to read string and count each word.

#include <iostream>
#include <string>

using namespace std;


string ReadString()
{
    string Word;
    cout <<"Enter The String: ";

    getline(cin, Word);

    return Word;
}


short PrintEachWord(string S1)
{
    string delima = " "; // delimiater.
    short pos = 0;
    string sWord;

    short Counter = 0;

    // use find() function to get the position of the delimiaters
    while ((pos = S1.find(delima))!= std::string::npos)
    {
        sWord = S1.substr(0,pos); // stroe the word

        if(sWord !=  "")
        {
            Counter ++;
        }

        S1.erase(0, pos + delima.length()); // erase() until postion and move to next word.

    }   

    if(S1 != "")
    {
        Counter ++;
    }

    return Counter;
    
}
    

int main()
{

    cout << PrintEachWord(ReadString());


    return 0;
}