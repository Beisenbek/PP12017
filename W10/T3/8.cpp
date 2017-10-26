#include <iostream>
#include <cmath>

using namespace std;

bool f(int n){
	if(n == 1) return false;
	bool res = true;
	int k = sqrt(n);

	for(int i = 2; i <= k; ++i){
		if(n % i == 0){
			res = false;
			break;
		}
	}
	return res;
}

void test_1(){
	int test_case [] = {1,2,49,63,3,9};
	bool test_answer [] = {false,true,false,false,true,false};
	int cnt = 0;

	for(int i = 0; i < 6; ++i){
		bool res = f(test_case[i]);
		if(res != test_answer[i]){
			cout << "Aaaaaaaaaa!" << endl;
			cout << test_case[i] << endl;
			break;
		}else{
			cnt++;
		}
	}

	if(cnt == 6){
		cout << "#1 Passed." << endl;
	}
}

void test_2(){
	int test_case [] = {10000,20000,4900,6030,30,90};
	bool test_answer [] = {true,false,false,false,false,false};
	int cnt = 0;

	for(int i = 0; i < 6; ++i){
		bool res = f(test_case[i]);
		if(res != test_answer[i]){
			cout << "Aaaaaaaaaa!" << endl;
			cout << test_case[i] << endl;
			break;
		}else{
			cnt++;
		}
	}

	if(cnt == 6){
		cout << "#2 Passed." << endl;
	}
}

void solution(){
	int n;
	cin >> n;
	if(f(n))cout << "prime" << endl;
	else cout << "composite" << endl;
}

int main(){
	solution();
	//test_1();
	//test_2();
	return 0;
}
