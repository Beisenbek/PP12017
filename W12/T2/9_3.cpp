//Standard Template Library

#include <iostream>
#include <set>

using namespace std;


int main(){

	set<int> a;
	
	for(int i = 0; i < 10000000; ++i){
		a.insert(i);
	}

	int x = -1;

	cout << "start" << endl;


	if(a.find(x) != a.end()){
		cout << "found!" << endl;
	}else{
		cout << "no!" << endl;
	}
	
	return 0;
}

