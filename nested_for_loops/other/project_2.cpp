// Ask for number of students and weeks, then record hours studied each week.
// Calculate and print the average study hours per student using nested loops.
#include <iostream>
using namespace std;


int main() {
    

    int numstudents = 0;
    int numweeks = 0;
    double hours;
    double total;
    
    cout << "Enter the number of students you have: ";
    cin >> numstudents;
    
    cout << "Enter the number of weeks: ";
    cin >> numweeks;
    
    for ( int i = 1; i <= numstudents; i++){
        total = 0; // total has to be reset for each student to make sure the average is calulated correctly
        
        for ( int j = 1; j <= numweeks; j++){
            
            cout << "Enter hours studied for student number " << i << " in week " << j << " :";
            cin >> hours;
            
            total = total + hours;
            
        }
        
        double average = total / numweeks;
        cout << "Average study hours for student " << i << " is " << average << endl << endl;
        
        
    }
    return 0;
}
