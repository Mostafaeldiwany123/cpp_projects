// This program counts the number of vowels in a sentence
// It uses a nested loop to compare each character with an array of vowels

#include <iostream>
#include <string>
using namespace std;

int main() {
    string sent;
    int vowels = 0;
    
    char arr[5] = {'a','e','i','o','u'};
    cout << "Enter a sentence: ";
    getline (cin, sent);
    
    
    for ( int i = 0; i < sent.length(); i++){
        
        for ( int j = 0; j < 5; j++){
            
            if ( sent[i] == arr[j]){
                
                vowels++;
            }
        }
    }
    
    cout << endl;
    cout << "Amount of vowels are: " << vowels;
    
    return 0;
}
