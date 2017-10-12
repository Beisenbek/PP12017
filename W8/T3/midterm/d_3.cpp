#include <iostream>

using namespace std;

int main(){
	
	//freopen("input.txt", "r",stdin);

	int k = 0;
	char x;

	while(cin >> x){
		if(x == 'a'){
			k++;
		}else if(x == 'e'){
			k++;
		}
		else if(x == 'o'){
			k++;
		}else if(x == 'i'){
			k++;
		}else if(x == 'u'){
			k++;
		}
	}

	cout << k;

	return 0;
}