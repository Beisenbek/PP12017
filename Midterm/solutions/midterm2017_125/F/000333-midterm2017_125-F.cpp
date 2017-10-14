#include <iostream>
#include <cmath> 

using namespace std;

int main() {
int a, b, c;
cin >> a >> b;
int d[a];
for ( int i=0; i < a; i++){
	cin >> d[i]; 
}

	for (int i=0; i < a; i++){
		if ( i == (b - 1)){
			continue;}
	
		
	cout << d[i] << " ";}


return 0;
}