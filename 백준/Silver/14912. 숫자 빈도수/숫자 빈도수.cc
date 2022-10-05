#include <iostream>

using namespace std;

int main()
{
	int a, b, c, cnt = 0;

	cin >> a >> b;

	for (int i = 1; i < a + 1; i++)
	{
		c = i;

		while (c)
		{
			if (c % 10 == b)
			{
				cnt++;
			}
			c /= 10;
		}
	}

	cout << cnt << endl;

	return 0;
}