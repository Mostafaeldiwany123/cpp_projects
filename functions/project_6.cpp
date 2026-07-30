#include <iostream>
using namespace std;

void getscore(int arr [], int n){

    

    for (int i =0 ; i < n; i++){

        cout << "Enter score of student number " << i+1 << ": ";
        cin >> arr[i];

        
    }

}
int findLowest(int arr[], int n){

    int lowest = arr[0];

    for (int i =0; i < n; i++){
        

        if (arr[i] < lowest){

            lowest = arr[i];
        }
    }
    return lowest;

}
void calcAverage(int arr[], int n, int low) {
    double total = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != low) {
            total += arr[i];
        }
    }

    double average = total / (n - 1); 
    cout << "The average score is: " << average << endl;
}

int main() {

    int n = 5;
    int low;
    int students[n];

        getscore(students, n);
        low = findLowest(students, n);
        calcAverage(students, n, low);


    return 0;
}