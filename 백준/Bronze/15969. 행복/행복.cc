#include <iostream>

using namespace std;

int main()
{
	int T, min, max;
	int score[10000];
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> score[i];

		if (!i)
		{
			min = score[i];
			max = score[i];
		}
		else
		{
			if (score[i] > max)
			{
				max = score[i];
			}
			else if (score[i] < min)
			{
				min = score[i];
			}
		}
	}

	cout << max - min << endl;

	return 0;
}