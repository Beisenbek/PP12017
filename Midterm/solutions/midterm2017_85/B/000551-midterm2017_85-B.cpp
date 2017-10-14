#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=100;i<=999;i++){
		if(((i%1000-i%100)/100+(i%100-i%10)/10+i%10)==n){
			cout<<i<<" ";
		}
	}
   





	return 0;
}