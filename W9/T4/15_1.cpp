#include <iostream>
#include <sstream>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	string s[100];
	string l;

	int n;

	getline(cin,l);
	stringstream ss;
	ss << l;
	ss >> n;


	for(int i=0; i<n; i++){
		getline(cin, s[i]);
	}

	for(int i=0; i<n; i++){
		cout<<s[i]<<endl;
	}
}