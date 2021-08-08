#include <stdio.h>

int i = 0;
int num = 1;

void Factorial();

int main() {

	
	scanf("%d", &i);
	
	Factorial();

	printf("%d", num);


	return 0;
}

void Factorial() {

	if (i != 0) {
		num = num * i;
		i--;
		Factorial(i);
	}

}
