#include <stdio.h>

int main() {

	int V, A, B, day;

	scanf("%d %d %d", &A, &B, &V);

	day = (V - B - 1) / (A - B) + 1;


	printf("%d", day);


	return 0;
}