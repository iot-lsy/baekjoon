#include <stdio.h>
#include <stdlib.h>

int check_MN(int*, int);

int main() {

	int num_ary[1000000];
	int num = 0;
	int* num_aryp;

	scanf("%d", &num);

	num_aryp = (int*)malloc(num * sizeof(int));

	for (int i = 0; i < num; i++) {
		scanf("%d", &num_aryp[i]);
	}

	check_MN(num_aryp, num);
	
	free(num_aryp);

	return 0;
}

int check_MN(int* num, int len) {

	int max = num[0];
	int min = num[0];

	for (int i = 0; i < len; i++) {
		if (max < num[i]) {
			max = num[i];
		}
		if (min > num[i]) {
			min = num[i];
		}
	}

	printf("%d %d\n", min, max);

	return 0;
}
