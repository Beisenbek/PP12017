#include <iostream>
#include <cmath> 

using namespace std;

int main() {
int a, c, b, d, e;
cin >> a;
int x[a];
int y = 0;
int z = 0;
for ( int i = 1; i <= a; i++)
	cin >> x[i];
	for (int i = 1; i <= a; i++)
if ( x[i] > y ){
y = x[i];
}
     for ( int i=1; i <= a; i++)
     	if (x[i] == y){
     		z++;
     	}




cout << z;
return 0;
}