#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	//freopen("input.txt","r",stdin);

	int k = 0;

	char c;

	while(cin >> c){
		if(c == 'a'){
			k++;
		}
		else if(c == 'e'){
			k++;
		}
		else if(c == 'i'){
			k++;
		}
		else if(c == 'o'){
			k++;
		}
		else if(c == 'u'){
			k++;
		}
	}

	cout << k;

	return 0;
}