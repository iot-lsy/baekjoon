/*
#include <stdio.h>
#include <stdlib.h>

int main() {

	char** arr_p;
	int* score;

	char temp[80];
	int num = 0, cont = 0;


	scanf("%d", &num);
	
	arr_p = (char**)malloc(sizeof(char*) * (num+1));
	score = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		scanf("%s", temp);
		arr_p[i] = (char*)malloc(strlen(temp)+1);
		strcpy(arr_p[i], temp);
	}

	for (int i = 0; i < num; i++) {
		cont = 0;
		score[i] = 0;
		for (int j = 0; arr_p[i][j] != '\0'; j++) {
			if (arr_p[i][j] == 'O') {
				cont++;
				score[i] += cont;
			}
			else {
				cont = 0;
			}
		}
	}

	for (int i = 0; i < num; i++) {
		printf("%d\n", score[i]);
	}


	free(arr_p);

	return 0;
}
*/