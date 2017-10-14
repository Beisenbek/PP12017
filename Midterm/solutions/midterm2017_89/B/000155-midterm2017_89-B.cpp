#include <iostream>
#include <cmath>


using namespace std;

int main() {
int a;
cin >> a;
for (int i=100; i<999; i++) {
	if(i%10+i/100+i/10%10==a) cout << i << endl;
}


	return 0;
}