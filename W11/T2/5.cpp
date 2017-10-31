#include <iostream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;

	double gpa[n];
	string surname[n];

	for(int i = 0; i < n; ++i){
		cin >> surname[i] >> gpa[i];
	}


	int ind = 0;

	for(int i = 1; i < n; ++i){
		if(gpa[i] > gpa[ind]){
			ind = i;
		}
	}

	cout << surname[ind] << " " << gpa[ind] << endl;

	return 0;
}