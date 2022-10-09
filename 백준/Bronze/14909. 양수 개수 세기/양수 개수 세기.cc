#include <iostream>

using namespace std;

int checknum(int N)
{
	if (N > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int N, cnt = 0;

	while (true)
	{
		cin >> N;

		if (cin.eof())
		{
			break;
		}

		if (checknum(N))
		{
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}