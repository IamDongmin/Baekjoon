#include<iostream>

using namespace std;

int main()
{
	int N, K, sum = 0;
	int A, B;

	cin >> N >> K;

	sum += K;

	for (int i = 0; i < N; i++)
	{
		cin >> A >> B;

		sum += A;
		sum -= B;
	}

	cout << "비와이" << endl;

	return 0;
}