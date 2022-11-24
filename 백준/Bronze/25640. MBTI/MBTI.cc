#include<iostream>
#include<cstring>

using namespace std;

int CheckMBTI(char jinho[], char friends[]);

int main()
{
	char jinho[5], friends[5];
	int N, cnt = 0, result;

	cin >> jinho;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> friends;

		result = CheckMBTI(jinho, friends);

		if (result == 1)
		{
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
int CheckMBTI(char jinho[], char friends[])
{
	if (strcmp(jinho, friends) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}