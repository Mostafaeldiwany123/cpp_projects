#include <iostream>
using namespace std;

class Player {
protected:
    string name;
    int score;
public:
    Player (string n, int s) : name(n), score(s){}
    virtual int calculateScore (){

        return score + 10;

    }
    virtual void print(){

        cout << name << " " << score << endl;

    }
};

class FootballPlayer : public Player {
private:
    int goals;
public:
FootballPlayer (string n, int s, int g) : Player (n, s), goals(g){}
    int calculateScore () override {
        return score + 25;
        
    }
    void print () override {
        cout << name << " " << score << "Goals: " << goals << endl;
    }

};
int main() {

        Player *p1 = new FootballPlayer ("Messi", 99, 10);
        Player *p2 = new Player ("Ronaldo", 88);

        p1->calculateScore();
        p2->calculateScore();

        p1->print();
        p2->print();
        delete p1;
        delete p2;

    return 0;
}