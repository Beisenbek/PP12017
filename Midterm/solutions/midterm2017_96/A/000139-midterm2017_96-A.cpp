#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	bool found = false;
	for(int i=1;i<a;++i){
		if(i==1){
			continue;
		}
	
	if(a%i!=0){

		found = true;
		cout<<"YES";
		break;
	}
	}
	if else(a%i == 0){
		found = false;
		cout<<"NO";
	}

	return 0;
}
