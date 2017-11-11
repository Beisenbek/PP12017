#include <iostream>

using namespace std;

struct pyramid{
	double a;
	double b;
	double c;
	double h;
	double s;
	double pr;
	void calculateSqr(){
		double p = (a + b + c)/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
	}
	void calculatePr(){
		pr = a * b * c;
	}
};

bool f(pyramid a, pyramid b){
	if(a.s < b.s) return true;
	if(a.s == b.s && a.h > b.h) return true;
	if(a.s == b.s && a.h == b.h && a.pr > b.pr) return true;
	return false;
}

int main(){

	int n;
	cin >> n;
	pyramid p[n];

	for(int i = 0; i < n; ++i){
		cin >> p[i].a >> p[i].b >> p[i].c >> p[i].h;
		p[i].calculatePr();
		p[i].calculateSqr(); 
	}

	sort(p,p+n,f);

	for(int i = 0; i < n; ++i){
		cout << p[i].a << " "<< p[i].b << " " <<  p[i].c<< " " << p[i].h << endl;
	}
	
	return 0;
}