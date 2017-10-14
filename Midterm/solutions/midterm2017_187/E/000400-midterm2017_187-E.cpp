#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
	int dlina, k = 0, d = 0;
	char string[100];
	gets(string);
	dlina = strlen(string);
	
	for(int i = 0; i < dlina / 2; i++)
	{
		if(string[i] == string[dlina - i - 1]) k++;
		else d++;
	}
	
	if(d != 0) cout << "no";
	else cout << "yes";


	return 0;
}
