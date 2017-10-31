#include <iostream>

using namespace std;

struct student{
	string surname;
	double gpa;
};

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;

	student a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i].surname >> a[i].gpa;
	}

	for(int i = 0; i < n - 1; ++i){
		for(int j = i + 1; j < n; ++j){
			if(a[i].gpa > a[j].gpa){
				swap(a[i],a[j]);
			}
		}
	}

	for(int i = 0; i < n; ++i){
		cout << a[i].surname << " " << a[i].gpa << endl;
	}

	return 0;
}
