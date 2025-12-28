// This program averages test scores.
// It asks the user for the number of students (numStudents) and the number of test scores per student (numTests).

#include <iostream>
using namespace std;


int main() {
    

    int numstudents = 0;
    int numtests = 0;
    double score;
    double total;
    
    cout << "Enter the number of students you have: ";
    cin >> numstudents;
    
    cout << "How many tests for each student: ";
    cin >> numtests;
    
    
    for ( int i = 1; i <= numstudents; i++){
        total = 0;
        
        for ( int j = 1; j <= numtests; j++){
            
            cout << "Enter the score " <<j<< " for student number "<<i<< ": ";
            cin >> score;
            total = total + score;
            
        }

        double average = total / numtests;
        cout << "The average for student number " << i << "is " << average << endl << endl;
        
    }
    
    return 0;
}