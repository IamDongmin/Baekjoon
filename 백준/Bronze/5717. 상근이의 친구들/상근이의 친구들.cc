#include<iostream>

using namespace std;

int main()
{
	int man, woman;

	while (1)
	{
		cin >> man >> woman;

		if (man == 0 && woman == 0)
		{
			break;
		}

		cout << man + woman << endl;
	}

	return 0;
}