//Using recursion to find the binary form of a number.

#include <iostream>
using namespace std;

void getBinary(int n){
    // Base case: if n is greater than 1, recursively process n/2 first
    if (n > 1) {
        getBinary(n / 2);
    }
    // Print the remainder (binary digit)
    cout << (n % 2);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Here is its binary form: ";
    getBinary(num);
    cout << endl;
    
    return 0;
}