#include <iostream>


using namespace std;

int main(){

	int a,b,k = 0;

	cin >> a >> b;

	for(int i = a + 1*(a%2); i <= b; i += 2){
			cout << i << " ";
			k = k + 1;
			if(k == 3) break;
	}



	return 0;
}