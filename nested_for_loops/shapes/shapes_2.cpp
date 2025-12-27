// Ask the user for a number n.
// Print a square of n rows and n columns made of * characters.

#include <iostream>
using namespace std;


int main() {
    
    int n;
    
    cout << "Enter a number: ";
    cin >> n;
    
    
    for ( int i = 1; i <=n; i++){
        
        for( int j = 1; j <= n; j++){
            
            cout << "*";
            
        }
        cout << endl;
        
    }
    return 0;
}