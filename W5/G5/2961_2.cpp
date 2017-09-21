#include <iostream>


using namespace std;

int main(){
	
	int a,b,c;

	cin >> a >> b >> c;

	int mi,me,ma;

	if( a <= b && a <= c) mi = a;
	if( b <= a && b <= c) mi = b;
	if( c <= a && c <= b) mi = c;

	if( a >= b && a >= c) ma = a;
	if( b >= a && b >= c) ma = b;
	if( c >= a && c >= b) ma = c;

	me = a + b + c - ma - mi;

	printf("%d %d %d\n", mi,me,ma);

	return 0;
}