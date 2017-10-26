#include <iostream>

using namespace std;

void f(){
	for(int i =0 ;; ++i){
		cout << "ok" << endl;
	}
}

int main(){

	f();

	cout << "end!";

	return 0;
}