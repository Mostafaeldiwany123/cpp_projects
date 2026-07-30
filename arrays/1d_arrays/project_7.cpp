#include <iostream>
using namespace std;

// Function to filter and copy odd numbers
void OddArray(const int inputArray[], int inputArraySize, int oddArray[], int& oddSize) {
    oddSize = 0; // Start the counter for the odd array at 0

    for (int i = 0; i < inputArraySize; i++) {
        // Check if the number is odd (remainder when divided by 2 is not 0)
        if (inputArray[i] % 2 != 0) {
            oddArray[oddSize] = inputArray[i]; // Copy the odd number
            oddSize++;                         // Move to the next index in oddArray
        }
    }
}

int main() {
    const int SIZE = 7;
    int myInput[SIZE] = {12, 5, 8, 3, 14, 7, 9};
    int myOdds[SIZE]; // Make it the same max size to be safe
    int actualOddCount = 0;

    // Call the function
    OddArray(myInput, SIZE, myOdds, actualOddCount);

    // Print the results
    cout << "Original Array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << myInput[i] << " ";
    }
    cout << endl;

    cout << "Odd Array: ";
    for (int i = 0; i < actualOddCount; i++) {
        cout << myOdds[i] << " ";
    }
    cout << endl;

    cout << "Total odd numbers found: " << actualOddCount << endl;

    return 0;
}
