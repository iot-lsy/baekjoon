#include <stdio.h>

int main() {

	int dial[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	char str[16];
	int time = 0, idx = 0;

	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; i++) {
		idx = str[i] - 'A';
		time += dial[idx];

	}

	printf("%d", time);

	return 0;
}