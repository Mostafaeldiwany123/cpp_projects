//program that takes 2 chars and if they are the same outputs that they are the same.

#include <iostream>
using namespace std;

int main() {
    
    const int maxLetters = 100;
    bool isTrue = true;
    char arrLetter1[maxLetters];
    char arrLetter2[maxLetters];
    
    
    cout << "Enter a string number 1 (smaller than 100): ";
    cin >> arrLetter1;
    cout << "Enter a string number 2 (smaller than 100): ";
    cin >> arrLetter2;
    
    for ( int i = 0; arrLetter1[i] != '\0'|| arrLetter2[i] != '\0';i++){
       
        if (arrLetter1[i] != arrLetter2[i]){
            isTrue = false;
            break;
            
        }
    }
    
    if (isTrue){
        
        cout << "String 1 and 2 are the same";
        
    }
    else {
              cout << "String 1 and 2 are not the  same";
    }
    
    
    return 0;
}
