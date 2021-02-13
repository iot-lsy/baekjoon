#include <stdio.h>

static int i = 0;
static int num = 1;

void Factorial() {

	if (i != 0) {
		num *= i;
		i--;
		Factorial();
	}
	else {
		num = 1;
	}

}

void main()
{
	Scanf("%d", &i);
	Factorial();

	Printf("%d", num);
}
