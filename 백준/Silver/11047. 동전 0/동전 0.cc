#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b;
	int money;
	int coin[1000];
	int count = 0;

	scanf("%d", &a);

	scanf("%d", &money);

	for (int i = a; i > 0; i--) {
		scanf("%d", &coin[i]);
	}

	for (int i = 1; i <= a; i++) {
		if (money / coin[i] >= 1) {
			count += money / coin[i];
			money = money % coin[i];
		}
	}


	printf("%d\n", count);

	return 0;
}