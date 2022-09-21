#include<iostream>

using namespace std;

int main()
{
	int cute[20], count = 0, num, temp;
	long long int N;

	cin >> N;

	while (1)
	{
		temp = N % 10;

		cute[count] = temp;

		N /= 10;

		if (N <= 0)
		{
			break;
		}

		count++;
	}

	num = cute[0] - cute[1];

	for (int i = 1; i <= count; i++)
	{
		if ((cute[i - 1] - cute[i]) != num)
		{
			cout << "흥칫뿡!! <(￣ ﹌ ￣)>" << endl;

			return 0;
		}
	}

	cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!" << endl;

	return 0;
}