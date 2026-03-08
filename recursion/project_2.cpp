//Using recursion to find a target value in an array.

#include <iostream>
using namespace std;

// Recursive function to search for target value and return its index
int findTarget(int numbers[], int arraySize, int currentIndex, int searchTarget) {
    // Base case: if we've checked all elements
    if (currentIndex == arraySize) {
        return -1;  // Not found
    }
    
    // Check if current element is the target
    if (numbers[currentIndex] == searchTarget) {
        return currentIndex;  // Return the index where target was found
    }
    
    // Recursively check the next element
    return findTarget(numbers, arraySize, currentIndex + 1, searchTarget);
}

int main() {
    int arraySize;
    cout << "Enter array size: ";
    cin >> arraySize;
    
    int numbers[arraySize];
    
    // Get array elements
    for (int i = 0; i < arraySize; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> numbers[i];
    }
    
    int searchTarget;
    cout << "Enter a target: ";
    cin >> searchTarget;
    
    // Call recursive function
    int result = findTarget(numbers, arraySize, 0, searchTarget);
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found in the array!" << endl;
    }
    
    return 0;
}