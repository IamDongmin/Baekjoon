#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int participant;
	cin >> participant;
	vector<int> sum;

	for (int i = 0; i < participant; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == b && b == c) {
			sum.push_back(10000 + (a * 1000));
		}
		else if (a == b) {
			sum.push_back(1000 + (a * 100));
		}
		else if (a == c) {
			sum.push_back(1000 + (a * 100));
		}
		else if (b == c) {
			sum.push_back(1000 + (b * 100));
		}
		else {
			int arr[3];
			arr[0] = a;
			arr[1] = b;
			arr[2] = c;
			int max = arr[0];
			for (int i : arr) {
				if (i > max) {
					max = i;
				}
			}
			sum.push_back(max * 100);
		}
	}
	sort(sum.begin(), sum.end());

	cout << sum[sum.size() - 1] << "\n";

	return 0;
}