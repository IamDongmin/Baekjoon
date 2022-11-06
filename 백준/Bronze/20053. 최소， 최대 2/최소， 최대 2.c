#include <stdio.h>

int main()
{
	int T;
	int N, num;
	int max = 0, min = 0;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d", &N);

		for (int j = 0; j < N; j++)
		{
			scanf("%d", &num);

			if (j == 0)
			{
				max = num;
				min = num;
			}
			else if (j != 0)
			{
				if (num > max)
				{
					max = num;
				}
				if (num < min)
				{
					min = num;
				}
			}
		}
		printf("%d %d\n", min, max);
		min = 0, max = 0;
	}

	return 0;
}