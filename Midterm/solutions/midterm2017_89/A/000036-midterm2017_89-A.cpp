#include <iostream>


using namespace std;

int main(){
int a,k=0;
cin >> a;
for (int i=0; i<a; i++) {
	if(a%i==0) {k=k+1;}
}
if (k>2) cout << "NO";
else cout << "YES";


	return 0;
}