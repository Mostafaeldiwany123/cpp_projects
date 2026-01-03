// Searches for a number in an array using linear search
// Returns index if found, or -1 if not found

#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size];
    int target;
    int result = -1;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cin >> target;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            result = i;
            break;
        }
    }

    if (result == -1)
        cout << "Not found";
    else
        cout << "Found at index " << result;

    return 0;
}
