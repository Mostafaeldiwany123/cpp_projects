// This program stores student names and their grades in arrays.
// It calculates and displays each student’s average grade.


#include <iostream>
#include <string>
using namespace std;


int main() {
    
    
    int students;
    
    cout << "Enter number of students: ";
    cin >> students;
    
    string names [students];
    int grades [students];
    
    for ( int i = 0; i < students; i++){
        
        cout << "Enter name of student number " << i+1 << ": ";
        cin >> names[i];
        
        cout << "Enter grade for " << names[i] << " : ";
        cin >> grades[i];
        
        
    }
    
    cout << endl;
    
    cout << "___Students grades are___" << endl;
    
    for (int i = 0; i < students; i++){
        
        cout << "Grade for " << names[i] << " is: " << grades[i] << endl;
        
    }
    
    
    
    return 0;
}