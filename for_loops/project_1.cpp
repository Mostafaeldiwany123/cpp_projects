// This program counts how many digits are in a positive integer
// It repeatedly removes the last digit using division by 10

#include <iostream>
using namespace std;

int main() {
    
    int number;
    int digits = 0; //needs to be initialized to 0 to start the count
    
    
    
    cout <<  "Enter a number: ";
    cin >> number;
    
    
    for ( int i = 0; number > 0; i++){
        
        number = number / 10;
        digits++;
        
    }
    
    cout << "This is the amount of digits: " << digits;
    
    return 0;
}
