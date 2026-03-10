//Allocates memory for 2 double vars representing width and rectangle
//Reads the value and calculates the area and perimeter, then deletes

#include <iostream>
using namespace std;

int main() {

    double *length = new double;
    double *width = new double;

    double area, perimeter;


    cout << "Enter a length: ";
    cin >> *length;
    cout << "Enter a width: ";
    cin >> *width;

    area = *length * *width;
    perimeter = 2 * (*length + *width);


    cout << "area: " << area << endl;
    cout << "perimeter: " << perimeter << endl;

    delete length;
    delete width;


    return 0;
}