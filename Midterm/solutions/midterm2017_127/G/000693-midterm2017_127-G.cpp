#include <iostream>
using namespace std;
int main(){
	int a[100], n, c, b[100], d, s;
	cin >>c>>n>>d;
	for (int i=0; i<c ; i++){
		cin >>a[i];
	}
	 s=a[n-1];
	 a[n-1]=a[d-1];
	 a[d-1]=s;
	for (int i=0; i<c;i++)
		cout << a[i] << " ";
	return 0;
}