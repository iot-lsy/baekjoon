#include <stdio.h>

int main() {

	char c_apb[101];
	int word_cnt = 0;

	scanf("%s", c_apb);

	for (int i = 0; c_apb[i] != '\0'; i++) {

		switch (c_apb[i]) {
		case 'c':
			if (c_apb[i + 1] == '=' || c_apb[i + 1] == '-') {
				word_cnt++;
				i++;
			}
			else {
				word_cnt++;
			}
			break;
		case 'd':
			if (c_apb[i + 1] == '-') {
				word_cnt++;
				i++;
			}
			else if (c_apb[i+1] == 'z' && c_apb[i+2] == '=') {
				word_cnt++;
				i += 2;
			}
			else {
				word_cnt++;
			}
			break;
		case 'l':
			if (c_apb[i + 1] == 'j') {
				word_cnt++;
				i++;
			}
			else {
				word_cnt++;
			}
			break;
		case 'n':
			if (c_apb[i + 1] == 'j') {
				word_cnt++;
				i++;
			}
			else {
				word_cnt++;
			}
			break;
		case 's':
			if (c_apb[i + 1] == '=') {
				word_cnt++;
				i++;
			}
			else {
				word_cnt++;
			}
			break;
		case 'z':
			if (c_apb[i + 1] == '=') {
				word_cnt++;
				i++;
			}
			else {
				word_cnt++;
			}
			break;
		default:
			word_cnt++;
			break;
		}

	}

	printf("%d", word_cnt);

	return 0;
}
