// A program that stores a set of numbes in an array and displays the even and odd alone.

#include <iostream>
using namespace std;

int main() {
    
    int number;
    
    cout << "Enter the value of the array: ";
    cin >> number;
    
    int arr [number];
    
    for (int i = 0; i < number; i++){
        
        cout << "Enter the value number " << i+1 << ": ";
        cin >> arr[i];
        
    }
    cout << "Even numbers are: ";
    
    for ( int i = 0; i < number; i++){
        
        if (arr[i] % 2 == 0){
            cout << arr[i];
            
        }
        else {
            continue;
            
        }
    }
            cout << endl;
            cout << "odd numbers are: ";
    
    for ( int i = 0; i < number; i++){
        
        if (arr[i] % 2 != 0){
            cout << arr[i];
            
        }
        else {
            continue;
            
        }
        
    }
    return 0;
}
