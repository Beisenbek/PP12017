#include <iostream>

using namespace std;

int main(){

	string s,cnt=0;

	cin >> s;

	for(int i = 0; i < s.length(); i++){
		int code = (int) s[i];
		if((int)s[i]==97 ||(int)s[i] ==101 || (int)s[i]==111 || (int)s[i]==117){
			cnt++
		}
	}
	cout<<cnt;
	return 0;
}