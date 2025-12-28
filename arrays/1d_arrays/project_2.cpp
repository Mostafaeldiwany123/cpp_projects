// This program stores numbers in an array and analyzes them using loops.
// It finds the maximum, minimum, and average value entered by the user.

#include <iostream>
using namespace std;


int main() {
    
    
    int store;
    
    cout << "How many numbers to store: ";
    cin >> store;
    
    
    int num [store];
    int total = 0;
    int max, min;
    
    for (int i = 0; i < store; i++){
        
        cout << "Enter number " << i + 1 << ": ";
        cin >> num [i];
        
        total += num [i];
        
        if ( i == 0 ){
            
            max = num [i];
            min = num [i];
            
        }
        
        else {
            
            if ( num [i] > max){
                
                max = num [i];
                
            }
            
            if ( num [i] < min){
                
                min = num [i];
                
            }
        }
        
    }
    double avg = (double) total / store;
        
        cout << endl;
        cout << "======STATS=======" <<endl;
        
        cout << "Average is: " << avg << endl;
        cout << "Max is: " << max <<endl;
        cout << "Min is: "<< min << endl;
    return 0;
}