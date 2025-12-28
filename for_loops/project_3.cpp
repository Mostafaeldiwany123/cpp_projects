// This program reverses a positive integer
// It repeatedly removes the last digit using division by 10

#include <iostream>
using namespace std;

int main() {
    
    int number;
    int digit = 0;
    int reverse = 0;
    
    
    
    cout <<  "Enter a number: ";
    cin >> number;
    
    
    for ( int i = 0; number > 0; i++){
        
        digit = number % 10;
        
        reverse = reverse * 10 + digit;
        
        number = number / 10;
        
        
        
    }
    
    cout << "The reversed number is: " << reverse;
    
    return 0;
}
