#include <iostream>
#include <cmath> 

using namespace std;

int main() {
int a, c, b, d, e;
cin >> a;
for ( int i = 100; i < 999; i++){
c = i / 100;
b = (i % 100) / 10;
e = i % 10;
if ( (c + b + e ) == a )
	cout << c << b << e << endl;
}
return 0;
}