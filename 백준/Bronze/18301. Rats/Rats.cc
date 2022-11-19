#include<iostream>	

using namespace std;

int main()
{
	int N1, N2, N12;

	cin >> N1 >> N2 >> N12;

	cout << (N1 + 1) * (N2 + 1) / (N12 + 1) - 1 << endl;

	return 0;
}