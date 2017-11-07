
#include <iostream>
#include <vector>

using namespace std;


int main(){

	vector<int> a;
	int x;

	do{
		cin >> x;
		if(x == 0) break;
		a.push_back(x);
	}while(1);
	
	int n = a.size();

	for(int i = 0; i < n/2; ++i){
		a[i]+=a[n - 1 - i];
	}

	for(int i = 0; i < n/2 + n%2; ++i){
		cout << a[i] << " ";
	}

	cout << endl;



	return 0;
}

