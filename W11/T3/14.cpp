#include <iostream>

using namespace std;

void printArray1(int * x, int n){
	for(int i = 0; i < n; ++i){
		cout << *(x + i) << " ";
	}
	cout << endl;
}


void printArray2(int * begin, int * end){
	/*int i = 0;
	while((x+i) != y){
		cout << *(x + i) << " ";
		i = i + 1;
	}*/

	/*for(int i = 0;(x+i) != y;i++){
		cout << *(x + i) << " ";
	}*/

	/*
	x = x + 1;
	x++;
	i = 1;
	x = x + i;*/
	for(int * x = begin; x != end; x++){
		cout << *x << " ";
	}

	cout << endl;
}

int main(){

	int a[] = {1,2,3,4};
	
	printArray1(a,4);
	printArray2(a,a + 4);

	return 0;
}
