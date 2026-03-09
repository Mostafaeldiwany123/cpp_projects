// Question 1: Basic Pointer
// Declare a pointer, point it to an integer, and print the value using the pointer.

#include <iostream>
using namespace std;

int main() {

    int num = 42;
    int *ptr = &num;

    cout << "Address of num variable: " << ptr << endl;
    cout << "Value of the num in the pointer: " << *ptr;


    return 0;
}