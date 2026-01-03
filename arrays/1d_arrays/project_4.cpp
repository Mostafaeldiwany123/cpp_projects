// Displays array elements in reverse order
// Does not modify the array, only changes reading direction

#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i];
        if (i != 0)
            cout << ", ";
    }

    return 0;
}
