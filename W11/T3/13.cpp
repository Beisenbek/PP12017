#include <iostream>

using namespace std;

int s(int * a, int n){
	int res = 0;
	for(int i = 0; i < n; ++i){
		res = res + *(a + i);
		//res = res + a[i]
	}
	return res;
}

int main(){

	int a[] = {1,2,3,4};
	
	cout << s(a,4) << endl;

	return 0;
}
