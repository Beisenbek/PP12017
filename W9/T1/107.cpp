#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <sstream>

using namespace std;

int main (){

	freopen("input.txt","r",stdin);

	string str;
	getline(cin,str);

	str = str + " ";

	int k = 0;
	int mx = 0;
	int mk = 0;

	for(int i = 0; i < str.size(); ++i){
		if(str[i] == ' '){
			int len = str.substr(k,i - k).size();
			if(len > mx){
				mk = k;
				mx = len;
			}
			k = i + 1;
		}
	}

	cout << str.substr(mk,mx) << endl;
	cout <<   << endl;


  return 0;
}
