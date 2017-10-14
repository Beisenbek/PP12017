#include <iostream>
#include <cmath> 

using namespace std;

int main() {
int a, b, c, e;
cin >> a;
c=0;
	if ( a == 1){
		cout << "NO";}
	

for ( int i=2; i < a; i++){

	if ( a % i == 0){
		cout << "NO";
		c++;
		break;}

}
if ( c != 1){
	cout << "YES";
}
return 0;
}