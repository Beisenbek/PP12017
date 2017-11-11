#include <vector>
#include <iostream>

using namespace std;

int main(){

	int n,k;
	cin >> n;
	vector<int> v;

	for(int i = 0; i < n; ++i){
		cin >> k;
		v.push_back(k);
	}

	bool isGameOver = false;
	int cnt = 0;

	while(!isGameOver){
		isGameOver = true;

		for(int i = 0; i < v.size() - 1 && v.size() > 0; ++i){
			int j = i + 1;
			
			while(j < v.size() && v[i] == v[j]){
				j++;
			}	

			if(j - i >= 3){
				cnt += j - i;
				v.erase(v.begin() + i, v.begin() + j);
				i--;
				isGameOver = false;
			}		
		}
	}

	cout << cnt << endl;

	return 0;
}
