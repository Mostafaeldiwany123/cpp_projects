#include <iostream>
#include <string>
using namespace std;

string *doubleArray(string names[], int size) {
    string *arr2 = new string[size * 2];
    
    for (int i = 0; i < size; i++) {
        arr2[i * 2] = names[i];    // First occurrence
        arr2[i * 2 + 1] = names[i]; // Second occurrence
    }
    
    return arr2;
}

int main() {
    int n;
    cin >> n;
    string *arr = new string[n];

    // Read the strings from the user
    for (int i = 0; i < n; i++) {
        cout << "Enter string number " << i + 1 << ": ";
        getline(cin, arr[i]);
    }

    // Call the doubleArray function
    string *doubledArray = doubleArray(arr, n);

    // Print the doubled array
    for (int i = 0; i < n * 2; i++) {
        cout << doubledArray[i] << " ";
    }
    cout << endl;

    // Clean up dynamically allocated memory
    delete[] arr;
    delete[] doubledArray;

    return 0;
}