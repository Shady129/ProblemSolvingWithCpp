#include <iostream>
#include <string>
#include <vector>

using namespace std;


string ReadString()
{
    string Word;
    cout <<"Enter The String: ";

    getline(cin, Word);

    return Word;
}



vector <string> SplitString(string Word)
{
    vector <string> vString;
    string delima = " "; // delimiater.
    short pos = 0;
    string sWord;


    while ((pos = Word.find(delima))!= std::string::npos)
    {
        sWord = Word.substr(0, pos);

        if(sWord != "")
        {
            vString.push_back(sWord);
        }

        Word.erase(0, pos + delima.length());
    }

    if(Word != "")
    {
        vString.push_back(Word);
    }

    return vString;
    
}



int main()
{


    vector <string> vString;
    vString = SplitString(ReadString());

    for(string S: vString)
    {
        cout << S << endl;
    }


    return 0;
}