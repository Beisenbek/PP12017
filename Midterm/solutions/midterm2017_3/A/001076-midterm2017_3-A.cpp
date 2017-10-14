#include <iostream>

using namespace std;

int main () {

int n;
	 
	   bool a[1234];
	   
	   		for (int i = 2; i <= 1000; i++)
	   			
	   			a[i] = true;

	   		for (int i = 1; i <= 1000; i++)

	   			if( a[i]) {

	   				for(int j = 1*2; j <=1000; j++)
	   					a[j] = false;
	
}

	
		cin >> n;
		if (a[n]) cout << "YES" << endl;
		else cout << " NO " << endl;
		return 0;
	}



	


	   




