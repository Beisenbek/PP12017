#include <iostream>
#include <cmath>

using namespace std;

int main (){
	
	int n;

	cin >> n;

    for ( int i = 100; i <=999; i++){

    	if ((i/100 + (i%100)/10 + i%10) == n){
    		cout << i << " ";
    		cout << endl;
    	}
    }
	return 0;
}