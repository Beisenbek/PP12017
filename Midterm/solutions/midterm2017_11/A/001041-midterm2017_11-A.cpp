#include <iostream>
	
	using namespace std;
	
	int main(){
	int k=0;
			int a;
			cin >> a;
			if(a==1) cout << "NO";
			for(int i=1;i<=a;i++){
			if(a%i==0) k++;	
			}
			
if(k==2) cout << "YES";
else cout << "NO";

	
		return 0;
	}
