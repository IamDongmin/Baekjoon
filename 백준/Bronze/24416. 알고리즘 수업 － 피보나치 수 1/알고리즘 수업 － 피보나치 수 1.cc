#include<iostream>

using namespace std;

int arr[41] = { 0 };
int cnt = 0;
int dynamic_cnt = 0;

int fibonacci(int n);
void fib(int);

int main()
{
	int n;

	cin >> n;

	fibonacci(n);
	fib(n);

	cout << cnt << " " << dynamic_cnt << endl;
}
int fibonacci(int n)
{
	if (n == 1 || n == 2)
	{
		cnt++;
		return 1; 
	}
	else
	{
		return (fibonacci(n - 1) + fibonacci(n - 2));
	}
}
void fib(int n) 
{
	arr[1] < -arr[2] < -1;
	
	for (int i = 3; i < n + 1; i++)
	{
		dynamic_cnt++;
		arr[i] = arr[i - 1] + arr[i - 2];
	}
}