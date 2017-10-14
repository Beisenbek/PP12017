#include <iostream>
#include <cmath>

using namespace std;

int main(){
int n,max = 0, s = 0;
cin>>n;


int a[n];
for(int i = 0; i < n; i++){
	cin>>a[i];
}

max=a[0];
for(int i = 1;i < n;i++){
	if(max < a[i]){
		max = a[i];
		
	}
} for(int i = 1;i < n;i++){
	if(max = a[i])
		s++;
}
			
	
 cout<<s;

	
					
return 0;

}
