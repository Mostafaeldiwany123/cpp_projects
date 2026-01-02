

// Prints a hollow pyramis
// It uses nested loops to create the pattern.

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    

    for (int row = 1; row <= n; row++) {

        for (int sp = 1; sp <= n - row; sp++) {
            cout << " ";
        }

        for (int str = 1; str <= row * 2 - 1; str++) {

            if (str == 1 || row == n || str == row * 2 -1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
