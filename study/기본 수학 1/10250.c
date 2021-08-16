#include <stdio.h>
#include <stdlib.h>

int main() {

	int T, temp;
	
	int* H = NULL;
	int* W = NULL;
	int* N = NULL;
	int* Y = NULL;
	int* X = NULL;

	scanf("%d", &T);

	H = (int*)malloc(sizeof(int) * T);
	W = (int*)malloc(sizeof(int) * T);
	N = (int*)malloc(sizeof(int) * T);
	X = (int*)malloc(sizeof(int) * T);
	Y = (int*)malloc(sizeof(int) * T);


	if (H && W && N && X && Y) {
		for (int i = 0; i < T; i++) {
			scanf("%d %d %d", &H[i], &W[i], &N[i]);
		}

		for (int i = 0; i < T; i++) {

			X[i] = (N[i] - 1) / (H[i]) + 1;

			if (H[i] == 1) {
				Y[i] = 1;
			}
			else {
				Y[i] = N[i] - (X[i]-1) * H[i];
			}

			if (X[i] / 10 < 1) {
				printf("%d0%d\n", Y[i], X[i]);
			}
			else {
				printf("%d%d\n", Y[i], X[i]);
			}
		}
	}

	return 0;
}