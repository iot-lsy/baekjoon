#include <stdio.h>
#include <stdlib.h>

int main() {

	int T = 0;
	char** S;
	int* R;
	char str[20];
	int len = 0;

	scanf("%d", &T);

	R = (int*)malloc(sizeof(int) * T);
	S = (char**)malloc(sizeof(char*) * T);

	for (int i = 0; i < T; i++) {
		scanf("%d %s", &R[i], str);

		len = strlen(str);
		S[i] = (char*)malloc(sizeof(char) * (len+1));
		strcpy(S[i], str);
	}

	for (int i = 0; i < T; i++) {
		for (int j = 0; j < strlen(S[i]); j++) {
			for (int k = 0; k < R[i]; k++) {
				printf("%c", S[i][j]);
			}
		}
		printf("\n");
	}



	return 0;
}