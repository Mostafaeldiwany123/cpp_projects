// Array Member Check
// Write a recursive function that returns true if a value exists in an array.

#include <iostream>
using namespace std;

bool isMember(int arr[], int arrSize, int searchVal) {
    // 1. Base Case: If size is 0, we have checked everything and found nothing.
    if (arrSize == 0) {
        return false;
    }

    // 2. Check: Is the last element the one we are looking for?
    if (arr[arrSize - 1] == searchVal) {
        return true;
    }

    // 3. Recursive Call: If not found, check the smaller array.
    return isMember(arr, arrSize - 1, searchVal);
}

int main() {
    const int arrSize = 5;
    int arr[arrSize];
    int search;

    for (int i = 0; i < arrSize; i++) {
        cout << "Enter number " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "Enter the number to search for: ";
    cin >> search;

    // Changed 'int' to 'bool' for correctness, though int works too.
    bool found = isMember(arr, arrSize, search);

    if (found) {
        cout << "The number is in the array";
    } else {
        cout << "The number is not in the array";
    }

    return 0;
}

/*

 First Call: isMember(arr, 3, 20)

Check: Is size 0? No.
Check: Is last element (arr[2] which is 30) equal to 20? No.
Action: Call function again for smaller size.
Status: Pause this call. Waiting for result...

Second Call: isMember(arr, 2, 20)

Check: Is size 0? No.
Check: Is last element (arr[1] which is 20) equal to 20? YES!
Action: Return true.
Status: Finished.
Unwinding (Going Back)

The Second Call returns true to the First Call.
The First Call receives true and immediately returns true to main.
Result: The computer prints "The number is in the array."
*/