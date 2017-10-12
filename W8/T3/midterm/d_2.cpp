#include <iostream>

using namespace std;

int main(){
	
	string s;
	cin >> s;

	int k = 0;

	for(int i = 0; i < s.length(); ++i){
		if(s[i] == 'a'){
			k++;
		}else if(s[i] == 'e'){
			k++;
		}
		else if(s[i] == 'o'){
			k++;
		}else if(s[i] == 'i'){
			k++;
		}else if(s[i] == 'u'){
			k++;
		}
	}

	cout << k;

	return 0;
}