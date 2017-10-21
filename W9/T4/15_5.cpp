#include <iostream>
#include <sstream>

using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	string l;

	getline(cin,l);
	
	int n = stoi(l);

	cout << n << endl;
}