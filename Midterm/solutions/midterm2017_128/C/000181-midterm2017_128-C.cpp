#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	string s;
	cin >> s;
	if (s[0]>=65 && s[0]<97)
		s[0]=s[0]-32;
	cout << s << endl;
	return 0;
}
/*

*/