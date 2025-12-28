// Counts the number of words and letters in a sentence input by the user
// Uses spaces to separate words and loops through each character to count letters
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    
    string str;
    
    cout << "Enter a sentence: ";
    getline (cin, str);
    
    
    int wordcount = 0;
    int lettercount = 0;
    
    
    for ( int i = 0; i < str.length(); i++){
        
        if ( str[i] == ' '){
            
            wordcount++;
            
        }
        
        else {
            
            lettercount++;
            
        }
    }
    
    
    wordcount += 1;
    
    cout << "Amount of words is: " << wordcount << endl;
    cout << "Amount of letters is: " << lettercount << endl;
    

    return 0;
}
