// Question 2: Modifying via Pointer
// Use a pointer to change the value of a variable.

#include <iostream>
using namespace std;

int main() {

    int score = 10;
    int *ptr = &score;

    *ptr = 99;

    cout << score;
    

    return 0;
}