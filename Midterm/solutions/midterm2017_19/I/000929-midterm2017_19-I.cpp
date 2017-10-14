#include <iostream>
#include <cmath>

using namespace  std;
int main(){
	int n;
	int a[n][n];

 	cin >> n;
    for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
		    cin << a[i][j];
		}
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
		    a[i][j]=a[i][j]+a[i++][j++];
		
		cout << a[i][j];
     }
	cout << endl;
	}
	return 0;
}