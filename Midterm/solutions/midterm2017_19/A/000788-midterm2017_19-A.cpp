#include <iostream>
#include <cmath>

using namespace  std;
int main(){
	int  n;
	cin >> n;
    
	if(n % n == 0 && n % 1 == 0){
	cout << "YES";
    }else{ 
    	int k;
        

    	if( k<n && n % k == 1){;
    	cout << "NO";
    }
}
return 0;
}