#include <iostream>
#include <map>
#include <cmath>

using namespace std;

bool isPrime(int x){
	if(x == 1) return false;
	bool res = true;
	for(int i = 2; i <= sqrt(x); ++i){
		if(x % i == 0){
			res = false;
			break;
		}
	}
	return res;
}

void printPrime(int n){
	for(int i = 1; i <= n; ++i){
		if(isPrime(i)){
			cout << i << " ";
		}
	}
}

void aboutMe(){
	cout << "KBTU\n";
	cout << "read more:www.kbtu.kz\n"; 
}

void printHelp(){
	cout << "Please, enter n. Wher n is the number for finding prime nummbers before it.\n";
	cout << "For example: ./a.out 100\n";
}

int main(int n, char **v){

	if(n != 2){
		printHelp();
	}else{
		string option(v[1]);
		if(option == "--about"){
			aboutMe();
		}
		else if(option == "--help"){
			printHelp();
		}else{
			printPrime(atoi(v[1]));
			cout << endl;
		}
	}

	return 0;
}