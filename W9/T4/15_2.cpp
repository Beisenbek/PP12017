#include <iostream>
#include <sstream>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	string s[100];
	string l;


	getline(cin,l);
	
	int m = l.size();
	char x[m];
	l.copy(x,m,0);
	x[m] = '\0';

	int n = atoi(x);

	for(int i=0; i<n; i++){
		getline(cin, s[i]);
	}

	for(int i=0; i<n; i++){
		cout<<s[i]<<endl;
	}
}