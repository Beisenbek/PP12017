#include <iostream>

using namespace std;

void swap3(int * b){
	int x = *b;
	*b = *(b + 2);
	*(b+2) = x;
}

void swap2(int *b, int *c){
	int x = *b;
	*b = *c;
	*c = x;
}

int main(){

	int a[3];

	for(int i = 0; i < 3; ++i){
		cin >> a[i];
	}

	//swap3(a);
	swap2(a,a+2);

	for(int i = 0; i < 3; ++i){
		cout << a[i] << " ";
	}




	return 0;
}