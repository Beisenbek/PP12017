#include  <iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	for (int i=2; i<a; i++){
		if (a%i==0){
			cout <<"NO";
			return 0;
		}
		else {
			cout <<"YES";
			return 0;
		}
	}
	
	return 0;
}
