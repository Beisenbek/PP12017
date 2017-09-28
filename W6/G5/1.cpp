#include <iostream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int a[10];

	for(int i = 0; i < 10; ++i){
		cin >> a[i];
	}

	reverse(a,a+10);
	sort(a,a+10);

	for(int i = 0; i < 10; ++i){
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}
