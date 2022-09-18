#include <stdio.h>
#include <string.h>

void sumAll(char*, int*);
void pasteInt(char*, int);
int isThree(int);

int main() {

	char n[1000001];
	int int_n = 0, count = 0;

	scanf("%s", n);

	if (strlen(n) == 1) 
	{
		sumAll(n, &int_n);
	}
	else 
	{
		int_n = 10;
	}

	while (int_n >= 10) 
	{
		sumAll(n, &int_n);
		pasteInt(n, int_n);
		count++;
	}

	printf("%d\n", count);

	if (isThree(int_n))
	{
		printf("YES");
	}	
	else
	{
		printf("NO");
	}

	return 0;
}

void sumAll(char* str, int* n) 
{
	int i;

	*n = 0;

	for (i = 0; str[i]; i++) 
	{
		(*n) += (str[i] - '0');
	}
}

void pasteInt(char* str, int n) 
{
	int i = 0;

	while (n > 0) 
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	str[i] = NULL;
}
int isThree(int n) 
{
	return n == 3 || n == 6 || n == 9;
}