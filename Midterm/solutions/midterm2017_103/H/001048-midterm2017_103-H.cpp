#include <iostream>

using namespace std;

int main(){
        int n;
	cin >> n;
	int a[n],mx,cnt=0;
	mx= 0 ;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		mx = max(mx,a[i]);
	}
	for(int i= 0 ;i < n;i++){
		if(mx==a[i]){
			cnt++;
		} 
	}
	cout << cnt;

  	return 0;
}