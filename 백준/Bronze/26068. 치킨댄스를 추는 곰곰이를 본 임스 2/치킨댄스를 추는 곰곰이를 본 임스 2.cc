#include<iostream>
#include<cstring>

using namespace std;

int Chicken(int N, int Day, int mul, int cnt, char Gifticon[]);

int main()
{
	int N = 0, Day = 0, mul = 1, cnt = 0, Result;
	char Gifticon[20];

	Result = Chicken(N, Day, mul, cnt, Gifticon);
	
	cout << Result << endl;


	return 0;
}

int Chicken(int N, int Day, int mul, int cnt, char Gifticon[])
{

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> Gifticon;

		for (int j = strlen(Gifticon) - 1; j >= 0; j--)
		{
			if (48 <= Gifticon[j] && Gifticon[j] <= 57)
			{
				Day += (Gifticon[j] - 48) * mul;
				mul *= 10;
			}
			else
			{
				if (Day <= 90)
				{
					cnt++;
				}
				Day = 0;
				mul = 1;
				break;
			}
		}
	}

	return cnt;
}