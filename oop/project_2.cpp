#include <iostream>
using namespace std;

class Registration {
private:
    // Declare the required data members here
    string studentName;
    string *courseName;

public:
    // Complete the following function definitions
    // Default constructor
    Registration() {
        studentName = "None";
        courseName = new string ("Empty");

    }

    Registration(const Registration &other) {
    studentName = other.studentName;
    courseName = new string(*other.courseName);  
}


void setRegistration() {
    cin >> studentName;
    string temp;
    cin >> temp;
    courseName = new string(temp); 
}

void displayRegistration() {
    cout << "Student: " << studentName << " Course: " << *courseName << endl;
}

void update(string c) {
    *courseName = c;  
}

~Registration() {
    delete courseName;
    cout << "Deleted: " << studentName << endl;
}
};

int main() {

    Registration r1; 

    Registration r2;
    
    r2.setRegistration();

    // Create the third registration using a copy of r2 via the copy constructor here
Registration r3(r2);  // Create r3 as a copy of r2 using copy constructor

    r2.update("UPDATED");

    r2.displayRegistration();
    r3.displayRegistration();

    return 0;
}