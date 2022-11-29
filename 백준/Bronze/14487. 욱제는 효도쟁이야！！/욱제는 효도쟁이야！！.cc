#include<iostream>

using namespace std;

void MinimumTravelExpenses(int N, int MaximumCost, int Cost, int TotalCost);

int main()
{
	int N = 0, MaximumCost = 0;
	int Cost = 0, TotalCost = 0;

	MinimumTravelExpenses(N, MaximumCost, Cost, TotalCost);

	return 0;
}
void MinimumTravelExpenses(int N, int MaximumCost, int Cost, int TotalCost)
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> Cost;

		TotalCost += Cost;

		if (Cost > MaximumCost)
		{
			MaximumCost = Cost;
		}
	}

	cout << TotalCost - MaximumCost << endl;
}