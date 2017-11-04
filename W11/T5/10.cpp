#include <iostream>

using namespace std;

struct student{
	string surname;
	string name;
	double gpa;
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
			if(s[i].gpa > s[j].gpa){
				swap(s[i],s[j]);
			}
		}
	}

	for(int i = 0; i < n; ++i){
		cout <<  s[i].surname<< " "<<  s[i].name<< " " << s[i].gpa << endl;
	}


	return 0;
}
