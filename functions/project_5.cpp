// DESCRIPTION: Write a program that:
// 1. Declares an integer array of size 10 with values {12, 7, 19, 3, 25, 8, 14, 2, 21, 6}
// 2. Writes a function 'printArray' that prints all elements (use const int[] to prevent modification)
// 3. Writes a function 'containsEven' that returns bool: true if array has ANY even number
// 4. Writes a function 'doubleEvens' that modifies the array: doubles every even number (pass by reference behavior)
// 5. In main(): print original → check for evens → double evens → print modified

#include <iostream>
using namespace std;

// Prototypes with const where appropriate
void printArray(const int[], int);
bool containsEven(const int[], int);
void doubleEvens(int[], int);  // NOT const - we modify it!

int main() {
    const int SIZE = 10;
    int numbers[SIZE] = {12, 7, 19, 3, 25, 8, 14, 2, 21, 6};
    
    cout << "Original array: ";
    printArray(numbers, SIZE);
    
    if (containsEven(numbers, SIZE)) {
        cout << "Contains even number? Yes" << endl;
    } else {
        cout << "Contains even number? No" << endl;
    }
    
    doubleEvens(numbers, SIZE);
    
    cout << "Modified array: ";
    printArray(numbers, SIZE);
    
    return 0;
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {  // ✅ i < size, not <=
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool containsEven(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            return true;  // ✅ Return immediately when found
        }
    }
    return false;  // ✅ None found after full loop
}

void doubleEvens(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = arr[i] * 2;  // ✅ Modify the original array
        }
    }
}

/* my wrong code 

#include <iostream>
using namespace std;

void printArray (int[], int size);
bool containsEven (int[], int size );
void doubleEvens (int[], int size);


int main() {
    const int SIZE = 10;
    int numbers[SIZE] = {12, 7, 19, 3, 25, 8, 14, 2, 21, 6};
    
    printArray();

    if (containsEven(numbers); == true){

        cout << "Has even numbers";

    }
    else {

        cout << "Does not have even numbers";

    }

    doubleEvens();
    
    return 0;
}

void printArray ( int arr[], int size){

    for (int i = 0; i <= size; i++){

        cout << arr[i] << " ";

    }
    }

    bool containsEven (int arr[], int size){

        bool HasEven = true;

        for ( int i = 0; i <= size; i++){

            if (arr[i] % 2 == 0){
                HasEven = true;

            }
            else {
                HasEven = false
            }
        }

        return HasEven;

    }

    void doubleEvens(int arr[], int size){

        for ( int i = 0; i <= size; i++){

            if ( arr[i] % 2 == 0) {

                cout << arr[i] * 2;

            }

            else {

                cout << arr[i];
                
            }
        }
    }
 */