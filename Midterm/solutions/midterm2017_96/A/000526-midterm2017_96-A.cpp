#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int i=1;i<a;++i){
		if(a%i == 0 || a==1){
			cout<<"NO";
			break;
		}
		}
	for(int i=2;i<a;++i){
		if(a%1 != 0){
			cout<<"YES";
			break;
		}
	}
return 0;
}