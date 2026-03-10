// Function that converts Celsius to Fahrenheit using pointers
// Takes two float pointers: one for input temperature (Celsius)
// and another to store the converted temperature (Fahrenheit)
// Formula: F = (C * 9/5) + 32

#include <iostream>
using namespace std;

void Temperature (float *celsius, float *fahrenheit){

    *fahrenheit = *celsius * 9.0/5 + 32;

    cout << "To fahrenheit is: " << *fahrenheit;


}
int main() {

    float *temp = new float;
    float *fahrenheit = new float;


    cout << "Enter the temp: ";
    cin >> *temp;

    Temperature(temp, fahrenheit);

    delete temp;
    delete fahrenheit;

    return 0;
}