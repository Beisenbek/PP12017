#include <iostream>
#include <cmath> 

using namespace std;

int main() {
int a, c;
cin >> a;
c=0;
	if ( a == 1){
		cout << "NO" << endl;}
	

for ( int i=2; i < a; i++){

	if ( a % i == 0){
		cout << "NO" << endl;
		c++;
		break;}

}
if ( c != 1){
	cout << "YES" << endl;
}
return 0;
}