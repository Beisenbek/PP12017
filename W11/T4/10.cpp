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
	bool operator > (student b){
		if(this->gpa > b.gpa) return true;
		return false;
	}

	bool operator < (student b){
		if(this->gpa < b.gpa) return true;
		return false;
	}
};

bool f(student a, student b){
	if(a.gpa > b.gpa) return true;
	return false;
}

int main(){

	student a;
	student b;

	cin >> a.surname >> a.name >> a.gpa;
	cin >> b.surname >> b.name >> b.gpa;

	if(a > b){
		cout << "a";
	}else{
		cout << "b";
	}

	cout << endl;
	

	return 0;
}