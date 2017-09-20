#include <iostream>

using namespace std;

int main(){

	int a,b;
	int c = 0;
	
	cin >> a >> b;

	for(int i = a; i <= b && c < 3; i = i + 1){
		if(i % 2 == 0){
			 cout << i << " ";
			 c = c + 1;
		}
	}



	return 0;
}
