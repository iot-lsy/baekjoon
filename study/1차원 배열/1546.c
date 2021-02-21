/*#include <stdio.h>
#include <stdlib.h>

int main() {

	double* num_ary;
	int num = 0;
	double res = 0.0, max = 0.0;

	scanf("%d", &num);

	num_ary = (double*)malloc(sizeof(double) * num);

	for (int i = 0; i < num; i++) {
		scanf("%lf", &num_ary[i]);
		if (max < num_ary[i]) {
			max = num_ary[i];
		}
	}

	for (int i = 0; i < num; i++) {
		num_ary[i] = num_ary[i] / max * 100.0;
	}

	for (int i = 0; i < num; i++) {
		res += num_ary[i];
	}

	res = res / num;

	printf("%lf", res);

	free(num_ary);

	return 0;
}
*/
