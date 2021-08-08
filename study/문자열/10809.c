#include <stdio.h>
#include <stdio.h>

int alpha_arr[26];
int cnt = 0;
int index = 0;

char str[100];
char* arr;

int main() {

	scanf("%s", str);

	for (int i = 0; i < 26; i++) {
		alpha_arr[i] = -1;
	}
	
	for (int i = 0; str[i] != '\0'; i++) {
		cnt++;
	}

	arr = (char*)malloc(sizeof(arr) * cnt);

	strcpy(arr, str);

	for (int i = 0; i < cnt; i++) {
		index = (int)arr[i] - 'a';
		if (alpha_arr[index] == -1) {
			alpha_arr[index] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", alpha_arr[i]);
	}

	free(arr);

	return 0;
}