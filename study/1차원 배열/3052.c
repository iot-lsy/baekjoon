#include <stdio.h>

int main() {

	int num_ary[10] = { 0, };
	int num = 42;
	int res = 10;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num_ary[i]);
	}

	for (int i = 0; i < 10; i++) {
		while (num_ary[i] / num != 0) {
			num_ary[i] %= num;
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = i+1; j < 10; j++) {
			if (num_ary[i]!=-1&&num_ary[i] == num_ary[j]) {
				num_ary[j] = -1;
				res--;
			}
		}
	}

	printf("%d\n", res);

	return 0;
}

