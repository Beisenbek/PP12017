#include <iostream>

using namespace std;

int sum(int * begin, int * end){

	int res = 0;

	for(int * it = begin ;it != end; ++it){
		res += *it;
	}
	
	return res;

}

int main(){

	
	int n = 3;
	int a[] = {1,2,3};

	int k = sum(a,a+n);

	cout << k << endl;

	return 0;
}