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

int main(){

	freopen("input.txt","r",stdin);
	int n;
	cin >> n;
	student s[n];

	for(int i = 0; i < n; ++i){
		cin >> s[i].surname >> s[i].name >> s[i].gpa;
	}

	for(int i = 0; i < n - 1; ++i){
		for(int j = i + 1; j < n; ++j){
			if(s[j].gpa > s[i].gpa){
				swap(s[i],s[j]);
			}
		}
	}

	for(int i = 0; i < n; ++i){
		cout << s[i].getState() << endl;
	}

	return 0;
}