
#include <iostream>
#include <vector>

using namespace std;


int main(){

	vector<int> a,b;
	int x;

	do{
		cin >> x;
		if(x == 0) break;
		a.push_back(x);
	}while(1);
	
	int n = a.size();

	for(int i = 0; i < n/2; ++i){
		b.push_back(a[i]+a[n - 1 - i]);
	}

	if(n % 2 == 1){
		b.push_back(a[n/2]);
	}

	for(int i = 0; i < b.size(); ++i){
		cout << b[i] << " ";
	}

	cout << endl;



	return 0;
}

