#include <stdio.h>

int arr[10000] = { 0, };

int d(int);
int index = 0;

int main() {

	for (int i = 0; i < 10000; i++) {
		arr[i] = i + 1;
	}

	for (int i = 1; i <= 10000; i++) {
		
		index = d(i);

		if (index <= 10000) {
			arr[index - 1] = 0;
		}

	}

	for (int i = 0; i < 10000; i++) {
		if (arr[i]!=0) {
			printf("%d\n", arr[i]);
		}
	}

	return 0;
}

int d(int n) {

	int num = n;
	do {
		num += n % 10;
		n /= 10;
	}while ((n / 10) != 0);
	num += n;

	return num;
}