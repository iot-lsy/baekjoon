#include <stdio.h>

int main() {

	int N = 0, cnt = 0;

	scanf("%d", &N);


	while (N > ((cnt * cnt) + cnt) / 2) {

		cnt++;

	}
	
	N = (((cnt * cnt) + cnt) / 2) - N;

	if (cnt % 2 != 0) {
		printf("%d/%d", N + 1, cnt - N);
	}
	else {
		printf("%d/%d", cnt - N, N + 1);
	}
	
	return 0;
}