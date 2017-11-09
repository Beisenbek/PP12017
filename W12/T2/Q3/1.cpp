#include <iostream>

using namespace std;

struct f{
	string name;
	string sname;
	int year;
	int score;
};

int main(){

	int n,k,m,b;
	cin >> k >> m >> b;
	cin >> n;
	f a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i].sname >> a[i].name >> a[i].year >> a[i].score;
	}

	int cnt = 0;

	for(int i = 0; i < n; ++i){
		if(a[i].score == b && a[i].year >= k && a[i].year <= m){
			cnt++;
			cout << a[i].sname << " " <<   a[i].name  <<  endl;
		}
	}

	cout << cnt << endl;

	return 0;
}