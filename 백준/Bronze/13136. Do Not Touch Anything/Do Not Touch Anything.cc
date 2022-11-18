#include<iostream>

using namespace std;

int main()
{
	long long R, C, N;
	long long X, Y;

	cin >> R >> C >> N;

	if (R % N)
	{
		X = R / N + 1;
	}
	else
	{
		X = R / N;
	}

	if (C % N)
	{
		Y = C / N + 1;
	}
	else
	{
		Y = C / N;
	}

	cout << X * Y << endl;

	return 0;
}