#include <iostream>

using namespace std;

int main(){

	char s[] = {'h','e','l','l','o',' ','w','o','r','l','d','!'};

	reverse(s+1,s+3);

	for(int i = 0; i < 12; ++i){
		cout << s[i];
	}


	return 0;
}
