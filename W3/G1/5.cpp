#include  <iostream>

using namespace std;

int main(){

	char c;

	cin >> c;

	int i = int(c);

	if(i <= 122 && i >= 97){
		cout << "YES" << endl;
	}else if(i >= 65 && i <= 90){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

	//cout << int('A') << " " << int('Z') << endl;
	//cout << int('a') << " " << int('z') << endl;
		
	return 0;
}
