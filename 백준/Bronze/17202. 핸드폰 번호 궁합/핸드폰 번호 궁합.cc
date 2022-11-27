#include<iostream>

using namespace std;

void CheckPhoneNumber(char arr0[], char arr1[], int cnt);
void Compatibility(char phone0[], int cnt2);

int main()
{
	char phone0[20], phone1[10], phone2[10];
	int cnt0 = 0, cnt1 = 1, cnt2 = 15;

	CheckPhoneNumber(phone0, phone1, cnt0);

	CheckPhoneNumber(phone0, phone2, cnt1);

	Compatibility(phone0, cnt2);

	return 0;
}
void CheckPhoneNumber(char arr0[], char arr1[], int cnt)
{
	cin >> arr1;

	for (int i = 0; i < 8; i++)
	{
		arr0[cnt] = arr1[i];
		cnt += 2;
	}
}
void Compatibility(char phone0[], int cnt2)
{
	while (1)
	{
		for (int i = 0; i < cnt2; i++)
		{
			phone0[i] = (((phone0[i] - 48) + (phone0[i + 1] - 48)) % 10) + 48;
		}

		cnt2--;

		if (cnt2 == 1)
		{
			break;
		}
	}

	cout << phone0[0] << phone0[1] << endl;
}
