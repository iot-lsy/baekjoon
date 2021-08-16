#include <stdio.h>
#include <stdlib.h>

int main() {

	int T;
	double temp;

	double* k;
	double* n;
	double* deno;

	scanf("%d", &T);

	k = (double*)malloc(sizeof(double) * T);
	n = (double*)malloc(sizeof(double) * T);
	deno = (double*)malloc(sizeof(double) * T);

	if (k && n && deno) {
		for (int i = 0; i < T; i++) {
			scanf("%lf", &k[i]);
			scanf("%lf", &n[i]);
		}

		for (int i = 0; i < T; i++) {
			temp = n[i];
			deno[i] = 1;
			for (int j = 0; j < k[i]+1; j++) {
				deno[i] *= (j + 1);
			}
			for (int j = 0; j < k[i]; j++) {
				n[i] *= (temp + j + 1);
			}
		}

		for (int i = 0; i < T; i++) {
			printf("%.0lf\n", n[i] / deno[i]);
		}
	}

	return 0;
}