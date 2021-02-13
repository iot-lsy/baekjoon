#include <stdio.h>

int i = 0;
int num = 1;

void Factorial();

void main() {

	
	scanf("%d", &i);
	
	Factorial();

	printf("%d", num);

}

void Factorial() {

	if (i != 0) {
		num = num * i;
		i--;
		Factorial(i);
	}

}