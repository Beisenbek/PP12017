#include  <iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	if (a==2 || a==3 || a==5 || a==11 || a==7){
		cout <<"YES";
	}
    else if (a%2==0 || a%3==0 || a%4==0 || a%5==0|| a%11==0){
    	cout << "NO";
	}	
	else {
		cout << "YES";
	}
	return 0;
}
