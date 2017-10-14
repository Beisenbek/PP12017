#include <iostream>
using namespace std;
int main(){
	char a[100];
	cin >> a;
	if (int(a[0]) >= 97 && int(a[0]) <= 122){
		int(a[0]) == int(a[0]) - 32;
	}
	cout << a;
	return 0;
}