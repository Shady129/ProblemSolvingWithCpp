
// Task: Count Each Word In String

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



short CountWord(string Word)
    {

        vector<string> vString;
        string Delim = " ";
        short pos = 0;
        string sWord; // define a string variable  
        short counter = 0;



        // use find() function to get the position of the delimiters  
        while ((pos = Word.find(Delim)) != std::string::npos)
        {
            sWord = Word.substr(0, pos); // store the word   
           if (sWord != "")
           {
                counter++;
           }

            Word.erase(0, pos + Delim.length());  /* erase() until positon and move to next word. */
        }

        if (Word != "")
        {
            counter++;
        }

        return counter;

    }

    int main()
    {

        cout << CountWord(ReadWord());

        return 0;

    }