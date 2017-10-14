#include <iostream>
#include <cmath>
using namespace std;
	int main () {
		int N,M,b=0,max=-40000,c=0;
		cin>>N>>M;
		int a[N][M];
		for (int i=1; i<=N; i++) {
			for (int j=1; j<=M; j++) {
				cin>>a[i][j];}}
		for (int i=1; i<=N; i++) {
			for (int j=1; j<=N; j++) {
				if (a[i][j]>0) {
				b++;}
				if (b==max) {
					cout<<"Numbers are equal";
					return 0;}
				if (b>max) {
					c++;
					max=b;
					b=0;}}}
cout<<c;		
return 0;}

