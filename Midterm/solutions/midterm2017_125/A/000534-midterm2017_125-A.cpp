#include <iostream>
#include <cmath> 

using namespace std;

int main() {
int a, b, c, e;
cin >> a;
int d[a];
e = 0;

for (int i=2; i <= a; i++){
		if ( a % i == 0 ){
			cout << "NO";
		
		break;}
		 else {
		 	cout << "YES";
		 	break;
		 	} 
}

return 0;
}
