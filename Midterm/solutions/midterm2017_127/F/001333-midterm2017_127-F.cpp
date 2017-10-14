#include <iostream>
using namespace std;
int main(){
	int a[100], n, c, b[100];
	cin >>c>>n;
	for (int i=0; i<c ; i++){
		cin >>a[i];
	}
	for (int j=0; j<c; j++){
        if (n<j){
			b[j-1]=a[j];
		}else b[j]=a[j];

	}
	for (int i=0; i<c-1;i++)
		cout << b[i] << " ";
	return 0;
}
// 5 1
// 0 1 2 3 4  