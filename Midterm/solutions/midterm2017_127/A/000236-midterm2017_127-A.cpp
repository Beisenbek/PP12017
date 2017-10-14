#include <iostream>
using namespace std;
int main(){
int a, b, c, d, e, f, g;
cin >>a;
if (a==1){
	cout << "NO"<< endl;
	return 0;
}
for (int i=2; i<a ; i++){
	if (a%i==0){
		cout << "NO" << endl;
		return 0;
	}
}
cout << "YES" << endl;

return 0;
}