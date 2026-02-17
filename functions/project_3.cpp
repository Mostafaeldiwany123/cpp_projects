#include<iostream>
using namespace std;

int sumFromTo(int first, int second) {
    int total = 0;
    
    for ( int i = first; i <= second; i++){
        
        total = total + i;
    }
    if ( first <= second){
            return total;

    }
    else {
        return -1;
        
    }
    
}
int main(){
    int num1;
    int num2;
    int result;
    
	cin >> num1;
	cin >> num2;
	
	result = sumFromTo(num1, num2);
	
	cout << result;
	
	
	return 0;
}