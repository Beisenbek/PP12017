#include <iostream>

using namespace std;

int a[10];

void f1(){
	for(int i = 0; i < 10; ++i){
		cin >> a[i];
	}
}

void f2(int k){
	for(int i = 0; i < 10; ++i){
		cout << a[i] * k << " ";
	}
	cout << endl;
}

int main(){
	f1();
	f2(1);
	int k;
	cin >> k;
	f2(k);
	return 0;
}