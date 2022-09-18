#include <stdio.h>

int cnt = 0;

int multipleof3(int X)
{
	int sum = 0, count = 0, num;

	num = X;

	while (1)
	{
		sum += (num % 10);
		num /= 10;

		count++;

		if (num == 0)
		{
			break;
		}
	}

	if (count == 1)
	{
		return X;
	}

	cnt++;

	multipleof3(sum);
}
int main()
{
	int X, result;

	scanf_s("%d", &X);

	result = multipleof3(X);

	printf("%d\n", cnt);

	if (result == 3 || result == 6 || result == 9)
	{
		printf("YES\n");
	}
	else 
	{
		printf("N0\n");
	}

	return 0;
}
