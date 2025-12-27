// Ask the user for n.
// Print a centered pyramid using * characters.

 #include <iostream>
using namespace std;


int main() {
    
    
    int n;
    
    
    cout << "Enter a number: ";
    cin >> n;
    
    
    for ( int row = 1; row<=n; row++){ //rows loop
        
        for ( int sp = 1; sp <= n - row; sp++){ //for spaces
            
            cout << " ";
            
        }
        
        for ( int str = 1; str <= row * 2 - 1; str++){//for starts
            
                cout << "*";
                
        }
        
        cout << endl;
    }
    
    
    
    
    return 0;
}   