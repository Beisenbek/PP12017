#include <iostream>
#include <cmath>
using namespace std;
	int main () {
		int N,K;
		cin>>N>>K;
		int a[N];
		for (int i=1; i<=N; i++) {
			cin>>a[i];}
		for (int i=1; i<K; i++) {
			cout<<a[i]<<" ";}
		for (int i=K+1; i<=N; i++) {
			cout<<a[i]<<" ";}
return 0;}
