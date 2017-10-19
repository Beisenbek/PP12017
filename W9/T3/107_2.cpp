#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	string x;
	string res = "";

	while(cin >> x){
		if(res.size() < x.size()){
			res = x;
		}
	}

	cout << res << endl << res.size() << endl;


	return 0;
}