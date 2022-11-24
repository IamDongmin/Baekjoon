#include<iostream>

using namespace std;

int Cost(int r, int e, int c);

int main()
{
	int N;
	int r, e, c;


	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> r >> e >> c;

		if (Cost(r, e, c) == 1)
		{
			cout << "advertise" << endl;
		}
		else if (Cost(r, e, c) == 0)
		{
			cout << "does not matter" << endl;
		}
		else
		{
			cout << "do not advertise" << endl;
		}
	}
}

int Cost(int r, int e, int c)
{
	if (r == (e - c))
	{
		return 0;
	}
	else if (r < (e - c))
	{
		return 1;
	}
	else if (r > (e - c))
	{
		return -1;
	}
}