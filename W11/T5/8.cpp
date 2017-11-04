#include <iostream>

using namespace std;
void print(int *x, int &n);

void fill(int * x, int &n){

	for(int i = 0; i < n; ++i){
		cin >> *(x+i);
	}

}

void print(int *x, int &n){
	for(int i = 0; i < n; ++i){
		cout << *(x+i)  << " ";
	}
	cout << endl;
}


int main(){
	
	int n;
	cin >> n;
	
	int * c = new int[n];

	fill(c,n);
	print(c,n);

	return 0;
}
