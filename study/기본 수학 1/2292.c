#include <stdio.h>

int main() {

	int N = 0, cnt = 0;

	scanf("%d", &N);


	while (N > (3 * cnt * cnt) - (3 * cnt) + 1) {

		cnt++;

	}

	if (N == 1) {
		printf("1");
	}
	else {
		printf("%d", cnt);
	}

	return 0;
}