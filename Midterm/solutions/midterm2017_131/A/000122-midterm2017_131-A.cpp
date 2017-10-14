#include <iostream>
using namespace std;

int main(){
int a;
cin>>a;
for (int i=1; i<=1000; i++)
	if (a%2!=0 && a%3!=0 && a%4!=0 && a%5!=0){
		cout<<"YES";
		break;
	}

else{
	cout<<"NO";
	break;
}
   return 0;

}