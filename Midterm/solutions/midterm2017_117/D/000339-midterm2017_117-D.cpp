#include <iostream>
#include <cmath>

using namespace std;

int main(){
	string s;
	int cnt;
	cin >> s;

	for(int i = 0; i < s.length(); i++){
		int code = (int) s[i];
		if(code == 97 || code == 101 || code == 105 || code == 111 || code == 117)
			cnt += 1;
		
			
			
	}
	cout << cnt;
	
	return 0;
}																				