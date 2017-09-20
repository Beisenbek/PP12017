#include <iostream>


using namespace std;

int main(){
	
	int t,k = 0;

	cin >> t;

	/*
	for(int i = 1; i < 100; i++){
		for(int j = 1; j <= i; ++j){
			cout << i << " ";
			k++;
			if(k == t) break;
		}
		if(k == t) break;
	}*/
	int i = 1;
	int j = 0;
	while(k < t){
		cout << i << " ";
		k++;
		j++;
		if(j == i){
			j = 0;
			i = i + 1;
		}
	}

	return 0;
}
