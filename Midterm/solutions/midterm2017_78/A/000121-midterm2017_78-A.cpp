#include <iostream>

using namespace std;

int main(){

	int a;
	cin >> a;

	if ((a==2) | (a==3) | (a==5)) {cout  << "YES";} 
    if ((a==0) | (a==1) | (a==4)) {cout  << "NO";} 

    if (a>5) {
	if ((a % 6 == 1) | (a % 6 ==5))
		  
           cout << "YES";
          

	else cout << "NO";
   }
   return 0;  
}
