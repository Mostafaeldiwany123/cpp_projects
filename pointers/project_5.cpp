

#include <iostream>
using namespace std;

int addArrays(int s, )

int main() {

    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr1 = new int[size];
    int *arr2 = new int[size];

    for ( int i = 0; i < size; i ++){

        cout << "Enter number " << i+1 << " for array 1: ";
        cin >> *arr1[i];


    }
        for ( int i = 0; i < size; i ++){

        cout << "Enter number " << i+1 << " for array 2: ";
        cin >> *arr2[i];
   
    }

   int total = addArrays(size, arr1, arr2);



    return 0;
}