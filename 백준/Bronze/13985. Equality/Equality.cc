#include<iostream>

using namespace std;

int main()
{
	char text[1001];

	cin.getline(text, 1001);

	if (text[2] == '+')
	{
		if ((text[0] - 48) + (text[4] - 48) == text[8] - 48)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}