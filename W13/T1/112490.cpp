#include <map>
#include <vector>
#include <set>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

struct claster{
	vector<int> v;	
	int minVal;
	int maxVal;
};

bool isMember(int x, int l, claster &c){
	bool res = true;
	for(int i = 0; i < c.v.size(); ++i){
		if(abs(x-c.v[i]) > l){
			res = false;
			break;
		}
	}
	return res;
}

void findClaster(int x, int l, vector<claster> &a){

	bool foundPlace = false;

	for(int i = 0; i < a.size(); ++i){
		if(isMember(x,l,a[i])){
			a[i].v.push_back(x);
			foundPlace = true;
			break;
		}
	}

	if(!foundPlace){
		claster c;
		c.v.push_back(x);
		a.push_back(c);
	}
}

int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	vector<claster> a;


	int n,l,x;
	cin >> n >> l;

	for(int i = 0; i < n; ++i){
		cin >> x;
		findClaster(x,l,a);
	}


	cout << a.size() << endl;

	for(int i = 0; i < a.size(); ++i){
		
		sort(a[i].v.begin(),a[i].v.end());

		for(int j = 0; j < a[i].v.size(); ++j){
			cout << a[i].v[j] << " ";
		}
		cout << endl;
	}
	

	return 0;
}
