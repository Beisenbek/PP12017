#include <iostream>
using namespace std;
int main(){
	char a[100], k = 0;
	cin >> a;
	for (int i = 0; i < 100; i++){
		if (int(a[i]) == 97 || int(a[i]) == 101 || int(a[i]) == 105 || int(a[i]) == 111 || int(a[i]) == 117){
			k++;
	}
	cout << k;
	return 0;
}