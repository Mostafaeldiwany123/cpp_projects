#include <iostream>
using namespace std;

int getSum(int n) {
    // Base Case: If the number is 0, the sum of its digits is 0.
    if (n == 0) 
        return 0;
    
    // Recursive Case: (Last Digit) + (Sum of the rest of the digits)
    // We must return the result of the calculation.
    return (n % 10) + getSum(n / 10);
}

int main() {
    int number;     
    cout << "Enter a number: ";
    cin >> number;
    
    int resultSum = getSum(number);
    
    cout << "The sum of the digits are: " << resultSum;
    
    return 0;
}

// Nice visualization for this (    return (n % 10) + getSum(n / 10);)
/*

Call getSum(123)s

123 % 10 is 3.
Pauses and asks: "Hey, getSum(12), what's your answer?"
Waiting...
Call getSum(12)

12 % 10 is 2.
Pauses and asks: "Hey, getSum(1), what's your answer?"
Waiting...
Call getSum(1)

1 % 10 is 1.
Pauses and asks: "Hey, getSum(0), what's your answer?"
Waiting...
Call getSum(0) -> BASE CASE

n == 0, so return 0.
Unwinding begins.
Back to getSum(1)

Receives 0. Calculates: 1 + 0 = 1. Returns 1.
Back to getSum(12)

Receives 1. Calculates: 2 + 1 = 3. Returns 3.
Back to getSum(123)

Receives 3. Calculates: 3 + 3 = 6. Returns 6.
Final Result: 6.



*/