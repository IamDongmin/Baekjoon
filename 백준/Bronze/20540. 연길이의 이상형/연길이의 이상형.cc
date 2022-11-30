#include<iostream>
#include<string>


using namespace std;

void MBTI(string mbti);

int main()
{
	string mbti;

	cin >> mbti;

	MBTI(mbti);

	return 0;
}

void MBTI(string mbti)
{
	for (int i = 0; i < mbti.length(); i++)
	{
		if (i == 0)
		{
			if (mbti[i] == 'E')
			{
				cout << "I";
			}
			else if (mbti[i] == 'I')
			{
				cout << "E";
			}
		}
		else if (i == 1)
		{
			if (mbti[i] == 'S')
			{
				cout << "N";
			}
			else if (mbti[i] == 'N')
			{
				cout << "S";
			}
		}
		else if (i == 2)
		{
			if (mbti[i] == 'T')
			{
				cout << "F";
			}
			else if (mbti[i] == 'F')
			{
				cout << "T";
			}
		}
		else if (i == 3)
		{
			if (mbti[i] == 'P')
			{
				cout << "J";
			}
			else if (mbti[i] == 'J')
			{
				cout << "P";
			}
		}
	}

	cout << endl;
}