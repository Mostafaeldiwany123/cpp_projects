// This program stores grades for multiple students in a 2D array
// and calculates the average grade for each student

#include <iostream>
using namespace std;

int main() {

    const int students = 2;
    const int grades = 2;
    
    double s_avg[students]; // to store student averages
    
    int arr[students][grades]; // 2D array for student grades
    
    // Input grades for each student
    for (int i = 0; i < students; i++) {
        cout << "==Student " << i + 1 << "==" << endl;
        for (int j = 0; j < grades; j++) {
            cout << "Enter grade number " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }
    
    // Calculate average for each student
    for (int i = 0; i < students; i++) {
        int sum = 0; // reset sum for each student
        for (int j = 0; j < grades; j++) {
            sum += arr[i][j];
        }
        s_avg[i] = (double)sum / grades;
    }
    
    // Display student averages
    cout << "==Students averages==" << endl;
    for (int i = 0; i < students; i++) {
        cout << "Student " << i + 1 << ": " << s_avg[i] << endl;
    }

    return 0;
}
