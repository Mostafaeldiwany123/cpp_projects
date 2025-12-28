// This program checks if a number is a palindrome
// It repeatedly removes the last digit using division by 10

#include <iostream>
using namespace std;

int main() {
    
    int number;
    int main_number;
    int digit = 0;
    int reverse = 0;
    
    
    
    cout <<  "Enter a number: ";
    cin >> number;
    
    main_number = number;
    
    for ( int i = 0; number > 0; i++){
        
        digit = number % 10;
        
        reverse = reverse * 10 + digit;
        
        number = number / 10;
        
        
        
    }
    
    if (main_number == reverse){
        
        cout << "This is a palindrome!";
        
    }

    else {
        
        cout << "This is not a palindrome!";
        
    }
    return 0;
}
