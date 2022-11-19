#include<iostream>
#include<set>

using namespace std;

set<int> collect;
set<int>::iterator check;
set<int>::iterator col;

int main()
{
	int A, B;
	int setA, setB;

	cin >> A >> B;

	for (int i = 0; i < A; i++)
	{
		cin >> setA;

		collect.insert(setA);
	}
	for (int i = 0; i < B; i++)
	{
		cin >> setB;

		check = collect.find(setB);

		if (check != collect.end())
		{
			collect.erase(check);
		}
	}
	
	cout << collect.size() << endl;

	for (col = collect.begin(); col != collect.end(); col++)
	{
		cout << *col << " ";
	}
	cout << endl;


	return 0;
}