#include <iostream>

using namespace std;

int main(){

	string s;

	cin >> s;

	for(int i = 0; i < s.length(); i++){ //A65-90 a97-122
		int code = (int) s[i];
		if(i==0){
			if(s[i]>=97 && s[i]<=122){ 
				(int)s[i]=(int)s[i]+32;
				code=(int)s[i];
			}
		}
	}cout<<s;
	return 0;
}