#include <iostream>

using namespace std;

void f(int ** b){

	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 3; ++j){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}

}
int main(){

	int ** a = new int * [3];

	int b[] = {1,2,3};
	int c[] = {122,1,3};
	int d[] = {1,4,3};

	a[0] = b;
	a[1] = c;
	a[2] = d;

	f(a);

	return 0;
}