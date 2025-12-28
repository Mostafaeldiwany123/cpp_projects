// This program calculates the sum of digits in a positive integer
// It repeatedly removes the last digit using division by 10

#include <iostream>
using namespace std;

int main() {
    
    int number;
    int digits = 0;
    int total = 0;
    
    
    
    cout <<  "Enter a number: ";
    cin >> number;
    
    
    for ( int i = 0; number > 0; i++){
        
        digits = number % 10;
        
        total +=digits;
        
        number = number / 10;
        
        
        
    }
    
    cout << "The sum of digits are: " << total;
    
    return 0;
}
