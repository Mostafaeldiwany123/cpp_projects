// DESCRIPTION: Write a function named 'addNumbers' that takes two integers 
// as parameters and returns their sum. Then call this function from main()
// and print the result.

#include <iostream>
using namespace std;

int addNumbers(int, int);

int main () {
    int num1, num2;

    cin >> num1 >> num2;

    cout << addNumbers(num1, num2);

    return 0;
    
}

int addNumbers (int num1, int num2){

    int sum = num1+num2;

    return sum;
    
}