#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> split(string s){
	vector<int> res;
	stringstream ss;
	ss << s;
	int x;
	while(ss >> x){
		res.push_back(x);
	}
	return res;
}

int main(){

	string line,nums_line,ans_line;
	getline(cin,line);
	int n = atoi(line.c_str());
	int mt = 0;
	vector<int> nums;

	nums.push_back(0);

	for(int i = 1; i <= n; ++i){
		nums.push_back(0);
	}

	while(1){
		getline(cin, nums_line);
		if(nums_line == "HELP") break;
		vector<int> arr = split(nums_line);
		getline(cin,ans_line);
		for(int i = 0; i < arr.size(); ++i){
			if(arr[i] <= n){
				if(ans_line == "YES"){
					nums[arr[i]]++;
				}else{
					nums[arr[i]] = -1000;
				}
				mt = max(mt, nums[arr[i]]);
			}
		}
	}

	for(int i = 1; i <= n; ++i){
		if(nums[i] == mt){
			cout << i << " ";
		}
	}

	return 0;
}