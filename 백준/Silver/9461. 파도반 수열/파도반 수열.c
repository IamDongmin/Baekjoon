#include<stdio.h>

void PADO(long long int sequence[]) {

	for (int i = 10; i < 101; i++) {
		sequence[i] = sequence[i - 1] + sequence[i - 5];
	}
}

int main() {

	int T, n;
	long long int sequence[101] = { 1,1,1,2,2,3,4,5,7,9 };

	PADO(sequence);

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d", &n);

		printf("%lld\n", sequence[n - 1]);
	}

}