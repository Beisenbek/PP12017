#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main(){
	int k = 0, dlina;
	char string[100];
	gets(string);
	dlina = strlen(string);
	
	for(int i =0; i < dlina; i++)
	{
		if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') k++;
	}
	cout << k;
		
	
	
	return 0;
}
