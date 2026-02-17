// A program where i enter a number and it find the fibonacci sequence
#include <iostream>
using namespace std;
int getFibonacci (int);


    
int main () {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    int result = getFibonacci(number);
    cout << "The fibonacci of 7 is: " << result;
}

int getFibonacci(int n){
    
    int arr[n+1];
    arr[0] = 0;
    arr[1] = 1;
    
    
    for ( int i = 2; i <=n; i++){
        arr[i] = arr[i-1] + arr[i-2];
        
    }
    
    return arr[n];
    
}