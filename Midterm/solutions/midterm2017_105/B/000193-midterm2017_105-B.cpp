#include <iostream>

using namespace std;

int main(){
	int n,k=0;

	cin >> n;

	for(int i=1;i<=9;i++){
		for(int j=0;j<=9;j++){
			for(int p=0;p<=9;p++){
				if(i+j+p==n){
					cout << i << j << p << endl;
				}
			}	
		}
		
	}
	

	return 0;
}