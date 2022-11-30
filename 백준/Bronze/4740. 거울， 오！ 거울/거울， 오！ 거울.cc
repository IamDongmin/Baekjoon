#include<iostream>
#include<cstring>	

using namespace std;

void Mirror(char alpha[]);

int main()
{
	char alpha[1000];

	while (1)
	{
		cin.getline(alpha, 1000, '\n');

		if (strcmp(alpha, "***") == 0)
		{
			break;
		}

		Mirror(alpha);
	}
	
}

void Mirror(char alpha[])
{
	for (int i = strlen(alpha) - 1; i >= 0; i--)
	{
		cout << alpha[i];
	}
	cout << endl;
}