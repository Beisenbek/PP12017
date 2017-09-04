#include  <iostream>

using namespace std;

int main(){

	char c;

	cin >> c;

	if(isalpha(c)){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
			
	return 0;
}
