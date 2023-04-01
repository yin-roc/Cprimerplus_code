#include <iostream>
#include <cctype>
#include <string>
using namespace std;

const int ArSize = 20;

int main()
{
    // char word[ArSize];
    string word;
    char ch;
    int others = 0;
    int vowels = 0;
    int consonants = 0;

    cout << "Enter words (q to quit):" << endl;
    while ((cin >> word)&& (word != "q"))
    {
        if(isalpha(word[0]))
        {
            switch (word[0])
            {
                case 'a':
                case 'u':
                case 'e':
                case 'i':
                case 'o':
                case 'A':
                case 'U':
                case 'E':
                case 'I':
                case 'O':
                        vowels++;
                        break;
                default: consonants++;
                        break;
            }
        }
        
        else
            others++;
    }
    
    cout << vowels << " words beginning with vowels." << endl;
    cout << consonants << " words beginning with consonants." << endl;
    cout << others << " others." << endl;
   
    return 0;
}