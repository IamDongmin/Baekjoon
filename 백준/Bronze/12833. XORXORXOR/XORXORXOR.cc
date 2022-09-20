#include <iostream>

using namespace std;

int main()
{
	int a, b, c, ans;

	cin >> a >> b >> c;

	if (c % 2)
	{
		ans = a ^ b;
		cout << ans << endl;
	}
	else
	{
		cout << a << '\n' << endl;
	}

	return 0;
}