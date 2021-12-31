#include <stdio.h>
#include <math.h>

int main() {

	int year;
	int pn1, pn2;
	int num;
	int check;
	int count = 0;

	scanf("%d", &year);

	num = (int)sqrt(year);

	for (int i = num; i <= 100; i++) {
		check = 0;
		for (int j = 2; j <= (int)sqrt(i); j++) {
			if (i % j == 0) {
				check = 1;
				break;
			}
		}

		if (check == 0 && count == 0) {
			pn1 = i;
			count = 1;
		}
		else if (check == 0 && count == 1) {
			pn2 = i;
			break;
		}
	}

	printf("%d", pn1 * pn2);

	return 0;
}
