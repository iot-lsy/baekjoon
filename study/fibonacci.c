/*#include <stdio.h>

void fibonacci();

int num = 0;
int f1 = 0, f2 = 1;

int main() {


	scanf("%d", &num);
	num -= 1;
	fibonacci();

	printf("%d", f2);


	return 0;
}

void fibonacci() {
	int temp = 0;

	if (num == -1) {
		f2 = 0;
	}
	else if (num != 0) {

		temp = f2 + f1;
		f1 = f2;
		f2 = temp;
		num--;
		fibonacci();

	}


}*/