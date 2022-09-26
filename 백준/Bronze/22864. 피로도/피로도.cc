#include <iostream>

using namespace std;

int main(void) 
{

	int A, B, C, M;
	int work = 0, stamina = 0;

	cin >> A >> B >> C >> M;

	for (int i = 0; i < 24; i++) 
	{
		if (stamina + A <= M) 
		{
			stamina += A;
			work++;
		}
		else 
		{
			stamina -= C;

			if (stamina < 0)
			{
				stamina = 0;
			}
		}
	}

	cout << work * B;

	return 0;
}