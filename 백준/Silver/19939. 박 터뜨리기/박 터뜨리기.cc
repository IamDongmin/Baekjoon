#include <iostream>

using namespace std;

int main()
{
	int N, K, count = 1;
	int basket[10000];

	cin >> N >> K;

	for (int i = 0; i < K; i++)
	{
		basket[i] = count;

		N -= count;
		count++;

		if (N < 0)
		{
			cout << "-1" << endl;
			return 0;
		}
	}
	if (N % K == 0)
	{
		cout << basket[K - 1] - basket[0] << endl;
	}
	else if (N % K != 0)
	{
		for (int i = K - 1; i >= K - (N % K); i--)
		{
			basket[i]++;
		}

		cout << basket[K - 1] - basket[0] << endl;
	}

	return 0;
}