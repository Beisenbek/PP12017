#include <iostream>

#include <cmath>

using namespace std;
int main()
{
	char string[100];
	int dlina;
	gets(string);
	dlina = strlen(string);
	
	for(int i = 0; i < dlina; i++)
	{
		if(i == 0 && string[i] > 96) string[i] = string[i] - 32;
		cout << string[i];
		
	}


	return 0;
}
