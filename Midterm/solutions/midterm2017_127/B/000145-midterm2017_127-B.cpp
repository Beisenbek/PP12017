#include <iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cin >>a;
	for (int i=100; i<1000; i++ ){
		b = (i-i%100)/100;
		c = (i%100-i%10)/10;
		d = (i%10);
		if (b+c+d==a){
			cout << i << endl;
		}
	}
	return 0;
}