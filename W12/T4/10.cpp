#include <set>
#include <iostream>

/*
	сортировка сета по оценкам, 
	если оценки одинаковые, то по имени
	если имя одинаковое, то игнорим
*/
using namespace std;

struct student{
	string name;
	double gpa;
};

struct mycomp{
	bool operator()(student a, student b){
		if(a.gpa > b.gpa) return true;
		if(a.gpa == b.gpa && a.name < b.name) return true;
		return false;
	}
};

int main(){

	set<student,mycomp> s;
	int n;
	cin >> n;
	student t;

	for(int i = 0; i < n; ++i){
		cin >> t.name >> t.gpa;
		s.insert(t);
	}

	set<student,mycomp>::iterator it;

	for(it = s.begin();it!=s.end(); ++it){
		cout << (*it).name << endl;
	}	
	
	return 0;
}