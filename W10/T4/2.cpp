#include <iostream>
#include <map>

using namespace std;

int a[10];

void fillArray(){
	for(int i = 0; i < 10; ++i){
		cin >> a[i];
	}
}

void printArray(){
	for(int i = 0; i < 10; ++i){
		cout << a[i] << " ";
	}
}

int main(){

	fillArray();
	printArray();

	return 0;
}