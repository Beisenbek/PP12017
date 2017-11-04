#include <iostream>

using namespace std;

void fill(int * x, int &n, int& a){
	for(int i = 0; i < n; ++i){
		*(x+i) = (a + i)*(a + i);
	}
}

void print(int *x, int &n){
	for(int i = 0; i < n; ++i){
		cout << *(x+i)  << " ";
	}
	cout << endl;
}

int main(){
	
	int a,b;
	cin >> a >> b;

	int n = b - a + 1;
	int * x = new int[n];

	fill(x,n,a);

	print(x,n);

	return 0;
}
