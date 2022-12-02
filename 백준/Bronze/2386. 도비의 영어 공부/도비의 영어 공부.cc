#include<iostream>
#include<cstring>

using namespace std;

void Dobby(char text[]);

int main()
{
	char text[300];

	while (1)
	{
		cin.getline(text, 300, '\n');

		if (strcmp(text, "#") == 0)
		{
			break;
		}
		else
		{
			Dobby(text);	
		}
	}
}

void Dobby(char text[])
{
	int cnt = 0;

	for (int i = 1; i < strlen(text); i++)
	{
		if (text[i] == text[0])
		{
			cnt++;
		}
		else if (text[i] == text[0] - 32)
		{
			cnt++;
		}
	}

	cout << text[0] << " " << cnt << endl;
}