#include<iostream>
using namespace std;
int main(){
	int n,s;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j){
				s=a[i][j]+a[i][j];
                cout << s << endl;
			}
			else if(i==n-1-j){
				s=a[i][j]+a[i][j];
				cout << s;
			}
		}
	}

	return 0;
}
