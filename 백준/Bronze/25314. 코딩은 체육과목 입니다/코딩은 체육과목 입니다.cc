#include<iostream>

using namespace std;

int main()
{
	int N;


	cin >> N;

	if (N % 4 == 0)
	{
		for (int i = 0; i < N / 4; i++)
		{
			cout << "long ";
		}
		cout << "int" << endl;
	}
	else if (N % 4 == 1)
	{
		N += 3;

		for (int i = 0; i < N / 4; i++)
		{
			cout << "long ";
		}
		cout << "int" << endl;
	}
	else if (N % 4 == 2)
	{
		N += 2;

		for (int i = 0; i < N / 4; i++)
		{
			cout << "long ";
		}
		cout << "int" << endl;
	}
	else if (N % 4 == 3)
	{
		N += 1;

		for (int i = 0; i < N / 4; i++)
		{
			cout << "long ";
		}
		cout << "int" << endl;
	}


	return 0;
}