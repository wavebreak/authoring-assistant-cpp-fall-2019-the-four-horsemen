//
//  main.cpp
//  
//
//  Created by William Smith on 10/2/19.
//
#include <iostream>
#include <string>
using namespace std;
void GetNumOfNonWSCharacters(string x);
void GetNumOfWords(string x);
void FindText(string x, string y);

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
            break;
        case 's':
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
int main(){

    cout << "Enter a sample text:" << endl;
    string word;
    getline(cin, word);
    cout << endl << "You entered: " << word << endl;
    PrintMenu(word);
    return 0;
}