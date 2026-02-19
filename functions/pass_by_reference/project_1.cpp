// DESCRIPTION: Write a function named 'swapValues' that swaps two integers 
// using PASS-BY-REFERENCE. The function should NOT return anything (void).
// After calling the function, the original variables in main() should be swapped.

#include <iostream>
using namespace std;

void swapValues (int&, int&);

int main() {

    int x, y;

    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;

    swapValues(x,y);


    return 0;
}

void swapValues(int &x, int &y){

    int temp;

    temp = x;
    x = y;
    y = temp;

    cout << "New value of x = " << x << endl;
    cout << "New value of y = " << y;



}