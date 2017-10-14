#include <iostream>
using namespace std;
int main(){
	int a[100], n, d=0, v=0;
	cin >>n;
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	for (int i=0; i<n; i++){
		if (d<a[i]){
			d=a[i];
		}
	}
	for (int i=0; i<n ; i++ ){
		if (d==a[i]){
			v++;
		}
	}
	cout << v << endl;
	return 0;
}