#include <stdio.h>
#include <stdlib.h>

int main() {

	char* arr;
	int num;
	int sum = 0;

	scanf("%d", &num);
	
	arr = (char*)malloc(sizeof(char) * num);

	scanf("%s", arr);


	for (int i = 0; i < num; i++) {
		sum += (int)arr[i] - '0';
	}

	printf("%d", sum);

	return 0;
}
