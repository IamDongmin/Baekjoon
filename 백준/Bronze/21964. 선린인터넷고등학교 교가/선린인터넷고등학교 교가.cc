#include<iostream>

using namespace std;

int main()
{
	int N;
	char sunrin[100001];

	cin >> N;
	cin >> sunrin;

	for (int i = N - 5; i < N; i++)
	{
		cout << sunrin[i];
	}
	cout << endl;

	return 0;
}