//Problem: Hospital Patient
//Define a structure named Patient with the following members:
//name (string), age (int), temperature (double), heartRate (int)
//Write a function bool isCritical(const Patient &p) that returns true if the patient's temperature is above 39.5 OR their heart rate is above 120, otherwise returns false.

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

struct Patient {

    string name;
    int age;
    double temperature;
    int heartRate;
    
};

bool isCritical(const Patient &p){
    
    bool isTrue;
    
    if (p.temperature > 39.5 || p.heartRate > 120) {
        
        isTrue = true;
        
    }
    else {
        
        isTrue = false;
        
    }
    return isTrue;
    
}

int main() {
  
    
    int n;
    cin >> n;
    
    Patient data;
    bool criticalCase = false;
    
    for (int i = 0; i <n; i++){
        
        cin >> data.name >> data.age >> data.temperature >> data.heartRate;
        if (isCritical(data)){
            if(!criticalCase){
                cout << "Critical patients:" << endl;
                criticalCase = true;
                
            }
            cout << data.name << endl;
            
        }
    }
    if (!criticalCase){
        cout << "All patients are stable";
        
    }

    
    

    return 0;
}
