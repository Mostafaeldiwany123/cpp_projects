// This program removes a user-specified digit from a number.
// It stores the number’s digits in an array, skips the chosen digit, and outputs the new number.


#include <iostream>
using namespace std;

int main() {


    int number, n_remove, last_digit, digits = 0;
    
    
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "Enter the number to remove: ";
    cin >> n_remove;
    
    
    int temp_number = number;
    
    while (temp_number > 0){
        
        temp_number /= 10;
        digits++;
    }
    
    temp_number = number;
    int arr[digits];
    
    for ( int i = digits - 1; i >= 0; i--){
        
        arr[i] = temp_number % 10;
        temp_number /= 10;
        
        
    }
    
    
    for ( int i = 0; i < digits; i++){
        
        if ( arr[i] != n_remove){
            
            cout << arr[i];
            
        }
    
    }
    

    return 0;
}
