#include<iostream>

using namespace std;

int Iloveyonsei(char alpha);

int main()
{
	char alpha;
	int result;

	cin >> alpha;

	result = Iloveyonsei(alpha);

	cout << result << endl;

	return 0;
}

int Iloveyonsei(char alpha)
{
	int sum = 84;

	if (alpha < 73)
	{
		sum += (73 - alpha);
	}
	else if (alpha > 73)
	{
		sum += (alpha - 73);
	}
	else
	{
		sum += 0;
	}

	return sum;
}