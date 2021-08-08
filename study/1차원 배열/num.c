#include <stdio.h>

int main() {

	int num_ary[3] = { 0, };
	int res = 1;
	int deci[10] = { 0, };
	int num = 0;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &num_ary[i]);
	}

	for (int i = 0; i < 3; i++) {
		res *= num_ary[i];
	}

	while (1) {

		if (res / 10 != 0) {
			num = res % 10;
			res /= 10;
			deci[num]++;
		}
		else {
			deci[res]++;
			break;
		}

	}
	
	for (int i = 0; i < 10; i++) {
		printf("%d\n", deci[i]);
	}

	return 0;
}
