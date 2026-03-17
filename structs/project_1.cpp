// Write a program that uses a struct to store the three sides of two triangles (a, b, c), then computes and compares their areas using Heron's formula.
// Heron's formula for area is defined as:

// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

struct Triangle {
        
    double a, b, c;
    
};

int main() {
        
    Triangle t1, t2;
    
    cin >> t1.a >> t1.b >> t1.c;
    cin >> t2.a >> t2.b >> t2.c;
    
    double s1 = (t1.a + t1.b + t1.c) / 2;
    double area1 = sqrt (s1 *(s1 - t1.a) * (s1 - t1.b) * (s1 - t1.c));
    
    double s2 = (t2.a + t2.b + t2.c) / 2;
    double area2 = sqrt (s2 *(s2 - t2.a) * (s2 - t2.b) * (s2 - t2.c));
    
    cout << "Triangle 1 area = " << area1 << endl;
    cout << "Triangle 2 area = " << area2 << endl;
    
    if (area1 > area2){
        
        cout << "Triangle 1 is larger";
        
    }
    else if (area1 < area2) {
        cout << "Triangle 2 is larger";
    }
    else {
        cout << "Equal areas";
        
    }
    return 0;
}
