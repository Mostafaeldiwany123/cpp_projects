#include <iostream>
using namespace std;

class ExamRecord {

private:
    int studentID;
    int score;
public:
    static int studentsRecorded;
    static int highestScore;

    ExamRecord () {
        studentID = 0;
        score = 0;
    }

    ExamRecord (int id, int s){
        studentID = id;
        score = s;
    }

    void inputRecord();
    static void showstats ();

    ~ExamRecord (){
        cout << "Removed: " << studentID << endl;
    }

};
void ExamRecord::inputRecord (){
    cin >> studentID >> score;
    studentsRecorded++;
    if(score > highestScore){
        highestScore = score;

        }

}
 void ExamRecord::showstats(){
    cout << "Students: " << studentsRecorded << endl;
    cout << "Highest: " << highestScore << endl;
}

// Define and initialize the static member variables here
int ExamRecord::studentsRecorded = 0;
int ExamRecord::highestScore = 0;


int main() {

    ExamRecord e1;

    e1.inputRecord();

    ExamRecord::showstats();
    

    return 0;
}