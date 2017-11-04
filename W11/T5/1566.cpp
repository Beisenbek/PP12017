#include <iostream>

using namespace std;

void read(int * x, int &n){
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

void swapMinMax(int *x,int &n){
	int minIndex = 0;
	int maxIndex = 0;

	for(int i = 1; i < n; ++i){
		if(*(x + i) > *(x + maxIndex)){
			maxIndex = i;
		}

		if(*(x + i) < *(x + minIndex)){
			minIndex = i;
		}
	}

	swap(*(x+minIndex),*(x+maxIndex));
}

int main(){
	
	int n;
	cin >> n;
	int * x = new int[n];

	read(x,n);

	swapMinMax(x,n);

	print(x,n);

	return 0;
}
