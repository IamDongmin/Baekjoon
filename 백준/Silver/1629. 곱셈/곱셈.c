#include <stdio.h>

int doitCalculation(int a, int b, int c) {

	if (b > 1) {

		long long result = doitCalculation(a, b / 2, c);

		if (b % 2) {
			return ((result * result) % c * a) % c;
		}
		else {
			return (result * result) % c;
		}
	}
	else return a;

}

int main() {


	int a, b, c;
	int result;

	scanf("%d %d %d", &a, &b, &c);

	result = doitCalculation(a % c, b, c);

	printf("%d\n", result);

	return 0;
}
