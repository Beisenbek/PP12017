#include <iostream>
#include <vector>

using namespace std;

bool f(int x, int y){
	if(x >= y) return true;
	return false;
}

int main(){

	vector<int> a;

	for(int i = 10; i>=1; --i){
		a.push_back(i);
	}

	sort(a.begin(),a.end(),f);

	for(int i = 0; i < a.size(); ++i){
		cout << a[i] << " ";
	}

	return 0;
}