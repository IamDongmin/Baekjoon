#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int K, cnt = 0, cnt1 = 0;
	char text[1001];


	cin >> K;
	cin >> text;

	for (int i = 0; i < strlen(text); i++)
	{
		if (cnt == 0)
		{
			cout << text[i];
			cnt1++;
		}
		cnt++;

		if (cnt == K)
		{
			cnt = 0;
		}
	}
	cout << endl;


	return 0;
}