#include <iostream>
using namespace std;

int main(){
int a;
cin>>a;
	for (int i=1; i<=1000;i++)
	if (a/i==1){
		cout<<"YES";
		break;
	}
	else {
		cout<<"NO";
		break;
	}
  
   return 0;

}