#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int maxi = a[0];
	int cnt = 0;
	for (int i = 0; i < n; i++){
		if (a[i] > maxi){
			maxi = a[i];
			
		}
    }
    for (int i=0; i < n; i++){
    	if (a[i] == maxi){
    		cnt++;
    	}
    }
    cout << cnt;
    return 0;
}