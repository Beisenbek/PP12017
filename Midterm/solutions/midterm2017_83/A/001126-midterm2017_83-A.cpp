#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	for(int i=1; i<=a; i++){
		if(a%i==0){
			if(i==a || i==1)
			cout<<"Yes"<<endl;
	}
else cout<<"No"<<endl;
}
	return 0;
}