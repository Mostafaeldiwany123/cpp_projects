#include <iostream>
using namespace std;

class LibraryUser {
private:
    int userID;
    int membershipLevel;
    int booksBorrowed;

public:
    LibraryUser() {
        userID = 0;
        membershipLevel = 0;
        booksBorrowed = 0;
    }

    LibraryUser(int id, int level, int books) {
        userID = id;
        membershipLevel = level;
        booksBorrowed = books;
    }

    void setUser() {
        cin >> userID >> membershipLevel >> booksBorrowed;
    }

    void displayUser() {
        cout << "User: " << userID
             << " Level: " << membershipLevel
             << " Books: " << booksBorrowed << endl;
    }

    ~LibraryUser() {
        cout << "Removed: " << userID << endl;
    }
};

int main() {
    LibraryUser u1;

    LibraryUser u2;
    u2.setUser();

    LibraryUser u3 = u1;

    u1.displayUser();
    u2.displayUser();
    u3.displayUser();

    return 0;
}