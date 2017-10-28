#include <iostream>
#include <map>

using namespace std;

string s,t;
string a = "";
int dp[1010][1010];
int way[1010][1010];

//function for find lcs
int f(int n, int m){
	if(n < 0 || m < 0) return 0;
	if(dp[n][m] != -1) return dp[n][m];
	if(s[n] == t[m]){
		dp[n][m] = 1 + f(n-1,m-1);
		way[n][m] = 0;
	}else{
		int t1 = f(n-1,m);
		int t2 = f(n,m-1);
		if(t1 > t2){
			dp[n][m] = t1;
			way[n][m] = 1;
		}else{
			dp[n][m] = t2;
			way[n][m] = 2;
		}
	}
	return dp[n][m];
}

//way - function for resotoring way
void printWay(int n, int m){
	if(n < 0 || m < 0) return;
	if(way[n][m] == 1){
		printWay(n-1,m);
	}
	else if(way[n][m] == 2){
		printWay(n,m-1);
	}else if(way[n][m] == 0){
		a = s[n] + a;
		printWay(n-1,m-1);
	}
}

int main(){

	getline(cin,s);
	getline(cin,t);
	int n = s.size();
	int m = t.size();

	for(int i = 0; i < n; ++i ){
		for(int j = 0; j < m; ++j){
			way[i][j] = dp[i][j] = -1;
		}
	}

	cout << f(n-1,m-1) << endl;
	printWay(n-1,m-1);
	cout << a << endl;


	return 0;
}