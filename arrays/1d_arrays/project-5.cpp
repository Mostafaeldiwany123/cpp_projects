//A program that asks for the id, username, and score, it uses 3 1d arrays
//Problems i faced: intailly i used char arrNames not string which took 1 letter not all, i could have used getline.

#include <iostream>
using namespace std;

int main() {
    
    int records;
     
    cout << "How many records do you have: ";
    cin >> records;
    

    int arrId[records];
    int arrScore[records];
    string arrNames[records];
    
    for (int i = 0; i < records; i++) {
        cout << "Enter ID, Name, Score: ";
        cin >> arrId[i] >> arrNames[i] >> arrScore[i];
    }

    cout << "\nRecords:\n";
    for (int j = 0; j < records; j++) {
        cout << arrId[j] << "\t"
             << arrNames[j] << "\t"
             << arrScore[j] << endl;
    }
    
    return 0;
}
