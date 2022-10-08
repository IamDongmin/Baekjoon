#include<iostream>
#include<string>

using namespace std;

int main(void) 
{
	int i = 2;

	string A, B = "Was it a cat I saw?";

	while (1) 
	{
		getline(cin, A);

		if (A == B)
		{
			break;
		}
		for (int j = 0; j < A.length(); j += i)
		{
			cout << A[j];
		}
		cout << '\n';

		i++;
	}

	return 0;
}