// Ask the user for a number n and print two number patterns using nested loops.
// The first pattern is ascending (1 to row number), the second is descending (row number down to 1).


#include <iostream>
using namespace std;


int main() {
    
    int n;
    
    cout << "Enter a number: ";
    cin >> n;
    
    
    for ( int i = 1; i <=n; i++){
        
        for( int j = 1; j <= i; j++){ //j has to be less than or equal to i to print the ascending pattern
            
            cout << j;
            
        }
        cout << endl;
        
    }
    return 0;
}