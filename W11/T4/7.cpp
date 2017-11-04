#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	int n;
	cin >> n;
	string surname[n];
	string name[n];
	double gpa[n];

	for(int i = 0; i < n; ++i){
		cin >> surname[i] >> name[i] >> gpa[i];
	}

	for(int i = 0; i < n - 1; ++i){
		for(int j = i + 1; j < n; ++j){
			if(gpa[j] > gpa[i]){
				swap(gpa[i],gpa[j]);
				swap(surname[i],surname[j]);
				swap(name[i],name[j]);
			}
		}
	}

	for(int i = 0; i < n; ++i){
		cout <<  surname[i] <<" " <<  name[i] <<" "<< gpa[i] << endl;
	}

	return 0;
}