#include <iostream>

using namespace std;

int main(){
	
	string s;
	cin >> s;

	s = s + '!';

	int k = 0;
	int i = 0;

	while(s[i] != '!'){
		if(s[i] == 'a'){
			k++;
		}
		else if(s[i] == 'e'){
			k++;
		}
		else if(s[i] == 'o'){
			k++;
		}
		else if(s[i] == 'u'){
			k++;
		}
		else if(s[i] == 'i'){
			k++;
		}
		i++;
	}

	cout << k << endl;
	
	return 0;
}