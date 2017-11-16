#include <map>
#include <vector>
#include <set>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int n,l,x;
	cin >> n >> l;
	vector<int> v;

	for(int i = 0; i < n; ++i){
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(),v.end());

	vector<vector<int> > ans;
	vector<int> t;

	t.push_back(v[0]);

	for(int i = 1; i < v.size(); ++i){
		if(abs(v[i]-v[i-1]) > l){
			ans.push_back(t);
			t.clear();
		}
		t.push_back(v[i]);
	}

	ans.push_back(t);

	cout << ans.size() << endl;

	for(int i = 0; i < ans.size(); ++i){
		for(int j = 0; j < ans[i].size(); ++j){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}	

	return 0;
}
