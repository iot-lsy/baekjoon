#include <stdio.h>
#include <stdlib.h>

int check = 0;
int count = 0;
int cnt = 0;

void han_soo(int);

int main() {

	int num = 0;

	scanf("%d", &num);
	han_soo(num);

	return 0;
}

void han_soo(int n) {

	if (n < 100) {
		count = n;
	}
	else if (n >= 100) {
		int num = n;
		count = 99;

		int* arr;

		for (int i = 100; i <= n; i++) {
			check = 0;
			cnt = 0;
			int num = i;

			while (num != 0) {
				num /= 10;
				cnt++;
			}

			arr = (int*)malloc(sizeof(int) * cnt);

			num = i;
			for (int j = 0; j < cnt; j++) {
				arr[j] = num % 10;
				num /= 10;
			}

			for (int j = 0; j < cnt - 2; j++) {
				if ((arr[j] - arr[j + 1]) == (arr[j + 1] - arr[j + 2])) {
					check++;
				}
			}

			if ((cnt - 2) == check) {
				count++;
			}
		}
	}

	printf("%d", count);

}