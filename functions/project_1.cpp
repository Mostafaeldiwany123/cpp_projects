// Creates an isEven function that detects if the number is odd or even.

#include <iostream>
using namespace std;

bool isEven(int num1){
    
    if (num1 % 2 == 0) {
        
        return true;
        
    }
    else {
        return false;
        
    }
}

    int main (){
        int number;
        bool even;
        
        cout << "Enter a number: ";
        cin >> number;
        
        even = isEven(number);
        
        if (even == true){
            cout << "This number is even";
            
        }
        else {
            cout << "This is an odd number";
        }
        
        
    }