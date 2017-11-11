#include <vector>
#include <iostream>

using namespace std;

struct student{
	string name;
	double gpa;
};

bool f(student a, student b){
	if(a.gpa > b.gpa) return true;
	return false;
}

int main(){

	vector<student> v;
	int n;
	cin >> n;
	student t;

	for(int i = 0; i < n; ++i){
		cin >> t.name >> t.gpa;
		v.push_back(t);
	}	

	sort(v.begin(),v.end(),f);

	for(int i = 0; i < n; ++i){
		cout << v[i].name << endl;
	}
	
	return 0;
}