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


	for(int i = 0; i < n - 1; ++i){
		for(int j = i + 1; j < n; ++j){
			if(gpa[i] < gpa[j]){
				swap(gpa[i],gpa[j]);
				swap(surname[i],surname[j]);
			}
		}
	}

	for(int i = 0; i < n; ++i){
		cout << surname[i] << " " << gpa[i] << endl;
	}

	return 0;
}
