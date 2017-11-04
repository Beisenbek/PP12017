#include <iostream>
#include <cmath>

using namespace std;

struct student{
	string surname;
	string name;
	double gpa;
	string getState(){
		return surname + " " + name + " " + to_string(gpa);
	}
};

bool f(student a, student b){
	if(a.gpa > b.gpa) return true;
	return false;
}

int main(){

	freopen("input.txt","r",stdin);
	int n;
	cin >> n;
	student s[n];

	for(int i = 0; i < n; ++i){
		cin >> s[i].surname >> s[i].name >> s[i].gpa;
	}

	sort(s,s+n,f);

	for(int i = 0; i < n; ++i){
		cout << s[i].getState() << endl;
	}

	return 0;
}