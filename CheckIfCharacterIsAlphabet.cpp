// Replace ___ with your code

#include <iostream>
using namespace std;

int main() {
  
    // get character input
    char alphabet;
    cin >> alphabet;
    
    // check if character is in the range 'a' to 'z' or 'A' to 'Z'
    
    if(isalpha(alphabet))
    {
        cout <<"Alphabet";
    }
    else 
        cout <<"Not Alphabet";
    
    return 0;
}