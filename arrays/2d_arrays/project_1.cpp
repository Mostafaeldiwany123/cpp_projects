// This program stores a 3x3 grid of numbers in a 2D array.
// It prints the grid values using nested loops.

#include <iostream>
using namespace std;

int main() {


    int arr [3][3] = {
        
        {1,2,3},
        {4,5,6},
        {7,8,9},
        
    };


    cout << "===Grid values===" << endl;
    
    for ( int i = 0; i < 3; i++){
        
        for ( int j = 0; j < 3; j++){
            
            cout << arr[i][j] << " ";
            
        }
        cout << endl;
    }
    return 0;
}
