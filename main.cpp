//
//  main.cpp
//  
//  Member 1:
//  Member 2:
//  Member 3:
//  Member 4: DCamp4
//
//  Created by William Smith on 10/2/19.
//
#include <iostream>
#include <string>
using namespace std;
void GetNumOfNonWSCharacters(string x);
void GetNumOfWords(string x);
void FindText(string x, string y);
void ReplaceExclamation(string x); //pre-declaration
void ShortenSpace(string x);

void PrintMenu(string x){
    string q;
    cout << "MENU" << endl << "c - Number of non-whitespace characters" << endl << "w - Number of words" << endl << "f - Find text" << endl;
    cout << "r - Replace all !'s"  << endl << "s - Shorten spaces"  << endl << "q - Quit"  << endl << "Choose an option:" << endl;
    char choice;
    cin >> choice;
    switch(choice){
        case 'c':
            GetNumOfNonWSCharacters(x);
            break;
        case 'w':
            GetNumOfWords(x);
            break;
        case 'f':
            cout << "Enter a word or phrase to be found:";
            cin.ignore();
            cin >> q;
            FindText(x,q);
            break;
        case 'r':
            ReplaceExclamation(x);
            break;
        case 's':
            ShortenSpace(x);
            break;
        case 'q':
            break;
    }
}
void GetNumOfNonWSCharacters(string x){
    int ws = 0;
    for (unsigned int i = 0; i < x.size(); i++){
        if (x.at(i) != ' '){
            ws++;
        }
    }
    cout << "Number of non-whitespace characters: " << ws << endl;
}
void GetNumOfWords(string x){
    int w = 1;
    for (unsigned int i = 0; i < x.size(); i++){
        if (x.at(i) == ' '){
            w++;
        }
    }
    cout << "Number of words: " << w << endl;
}
void FindText(string x, string y){
    cout << endl;
    int z, fond;
    z = x.find(y);
    while (z != string::npos){              // My code was messed up here. I was in the middle of trying to fix it
        fond++;                                //  but ill leave it to ya
        x.find(y,z);
    }
    cout << fond;
}


//My, DCamp4's function.
void ReplaceExclamation(string x)
{

    char ch1 = "!";
    char ch2 = ".";


    for(int i = 0; i < x.length(); ++i)
    {

        if(x.at(i) == ch1)
        {

            x.replace(i, 1, ch2);

        }

    }

}

//my other function
void ShortenSpace(string x)
{


    char ch1 = " ";


    for(int i = 0; i < x.length(); ++i)
    {

        if(x.at(i) == ch1)
        {

            if(x.at(i+1) == ch1)
            {

                x.replace(i, 2, ch1);

            }

        }

    }



}


int main(){

    cout << "Enter a sample text:" << endl;
    string word;
    getline(cin, word);
    cout << endl << "You entered: " << word << endl;
    PrintMenu(word);
    return 0;
}