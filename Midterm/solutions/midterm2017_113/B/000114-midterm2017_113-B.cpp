#include <iostream>
using namespace std;
int main(){
	int s;
	cin>>s;
	for(int n=100;n<1000;n++){
		if(n%10+n/10%10+n/100==s)
			cout<<n<<endl;
	}
	
	return 0;
}