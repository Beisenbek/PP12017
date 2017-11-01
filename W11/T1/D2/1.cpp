#include <iostream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	int n;
	cin >> n;
	string student[n];
	string name[n];
	double gpa[n];
	int course[n];

	for(int i = 0; i < n; ++i){
		cin >> student[i] >> name[i] >> gpa[i] >> course[i];
	}

	for(int i = 0; i < n - 1; ++i){
		for(int j = i + 1; j < n; ++j){
			bool a = (course[i] > course[j]);
			bool b = (course[i] ==  course[j]);
			bool c = (gpa[i] > gpa[j]);
			if(a || (b && c)){
				swap(gpa[i],gpa[j]);
				swap(student[i],student[j]);
				swap(name[i],name[j]);
				swap(course[i],course[j]);
			}
		}
	}

	for(int i = 0; i < n; ++i){
		cout << student[i] << " "<< name[i] << " " <<  gpa[i]  << " " <<  course[i] << endl;
	}


	return 0;
}