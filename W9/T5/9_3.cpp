#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

	string s("xabcabcabcabcabc");
	string t("abc");

	size_t k = 0;

	while(true){
		k = s.find(t,k);
		if(k != string::npos){
			cout << k << endl;
			k = k + 1;
		}else{
			break;
		}
	}

	return 0;
}
