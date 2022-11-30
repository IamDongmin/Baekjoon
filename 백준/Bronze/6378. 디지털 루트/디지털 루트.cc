#include <iostream>
#include <string>

using namespace std;

int DigitalRoute(string num);

int main()
{
	string num;
	int result;

	while (1) 
	{
		cin >> num;

		if (num == "0") 
		{
			break;
		}

		result = DigitalRoute(num);

		cout << result << endl;
	}
	return 0;
}

int DigitalRoute(string num)
{
	int sum = 0;

	while (1)
	{
		for (int i = 0; i < num.length(); ++i)
		{
			sum += num[i] - 48;
		}

		if (sum < 10)
		{
			break;
		}
		else
		{
			num = to_string(sum);
			sum = 0;
		}
	}

	return sum;
}