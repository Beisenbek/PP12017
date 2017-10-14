#include <iostream>

using namespace std;
int main(){
	
	int n;
	

	cin >> n;
    
    if(n%2!=0 && n>1 && n%3!=0 && n/1!=0){
		cout << "YES";
	}
	else if(n==2 || n==3){
		cout <<"YES";
	}
	else{
		cout <<"NO";
	}
	return 0;
}