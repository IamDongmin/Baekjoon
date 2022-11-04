#include <stdio.h>

int check(int i, int student[])
{
	if (i == student[i])
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	int T;
	int student[20000];
	int result;
	int count = 0;

	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		scanf("%d", &student[i]);

		result = check(i, student);

		count += result;
	}

	printf("%d\n", count);

	return 0;
}