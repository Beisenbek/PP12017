#include <iostream>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <string>
#include <stdio.h>

using namespace std;

int main(){

	string s("itkbtu universityit");
	string t("it");

	size_t x = s.find(t);

	while(x != string::npos){
		cout << x << endl;
		x = s.find(t,x + t.size());
	}

	cout << endl;

	return 0;
}
