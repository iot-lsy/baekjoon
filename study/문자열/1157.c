#include <stdio.h>

int main() {

	int apb[26] = { 0, };
	int index = 0;
	int max = 0;
	int cnt = 0;
	int len = 0;
	char max_char;

	char str[1000000];

	scanf("%s", str);

	len = strlen(str);

	for (int i = 0; i <len; i++) {
		index = 0;
		if (str[i] >= 'a' && str[i] <= 'z') {
			index = (int)str[i] - 'a';
			apb[index]++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			index = (int)str[i] - 'A';
			apb[index]++;
		}
	}

	max = apb[0];
	max_char = 'A';

	for (int i = 1; i < 26; i++) {
		if (max < apb[i]) {
			max = apb[i];
			max_char = i + 'A';
			cnt = 0;
		}
		else if (max!=0 && max == apb[i]) {
			cnt++;
		}
	}

	if (cnt == 0) {
		printf("%c", max_char);
	}
	else {
		printf("?");
	}

	return 0;
}