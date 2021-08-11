#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int N = 0;
	int check[26] = { 0, };
	int overlap_cnt = 0;
	int cnt = 0;
	char tmp_str[101];
	char** str;

	scanf("%d", &N);

	str = (char**)malloc(sizeof(char*) * N);

	for (int i = 0; i < N; i++) {

		scanf("%s", tmp_str);
		str[i] = (char*)malloc(sizeof(char) * (strlen(tmp_str) + 1));

		strcpy(str[i], tmp_str);

	}

	for (int i = 0; i < N; i++) {
		overlap_cnt = 0;

		for (int j = 0; j < 26; j++) {
			check[j] = 0;
		}

		for (int k = 0; str[i][k] != '\0'; k++) {
			if (str[i][k] != str[i][k + 1]) {
				if (check[str[i][k] - 'a'] == 1) {
					overlap_cnt++;
				}
				check[str[i][k] - 'a'] = 1;
			}
		}

		if (overlap_cnt == 0) {
			cnt++;
		}
	}
	
	printf("%d", cnt);

	return 0;
}