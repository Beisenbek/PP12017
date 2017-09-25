#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;
	int i = 1;
	int j = 0;

	while(n > 0){
		cout << i << " ";
		j++;

		if(j == i){
			

			
			j = 0;
		}

		n--;
	}

	return 0;
}
