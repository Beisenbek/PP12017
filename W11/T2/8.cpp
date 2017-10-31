#include <iostream>

using namespace std;

struct student{
	string surname;
	double gpa;
};

bool f(student a, student b){
	if(a.gpa < b.gpa) return true;
	return false;
}

bool f2(student a, student b){
	if(a.gpa > b.gpa) return true;
	return false;
}

bool f3(student a, student b){
	if(a.gpa > b.gpa) return true;
	if(a.gpa == b.gpa && a.surname > b.surname) return true;
	return false;
}

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;

	student a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i].surname >> a[i].gpa;
	}

	sort(a,a+n,f3);

	for(int i = 0; i < n; ++i){
		cout << a[i].surname << " " << a[i].gpa << endl;
	}

	return 0;
}
