/*
#include <stdio.h>
#include <stdlib.h>

int main() {

	int** num_aryp;
	double* over_score;

	int class_num = 0, std_num = 0;
	double avg_score = 0.0;


	scanf("%d", &class_num);
	num_aryp = (int**)malloc(sizeof(int*) * class_num);
	over_score = (double*)malloc(sizeof(double) * class_num);
	

	for (int i = 0; i < class_num; i++) {
		scanf("%d", &std_num);
		num_aryp[i] = (int*)malloc(sizeof(int) * std_num);
		over_score[i] = 0;
		avg_score = 0.0;
		for (int j = 0; j < std_num; j++) {
			scanf("%d", &num_aryp[i][j]);
			avg_score += num_aryp[i][j];
		}
		avg_score /= std_num;
		for (int j = 0; j < std_num; j++) {
			if (avg_score < num_aryp[i][j]) {
				over_score[i]++;
			}
		}
		over_score[i] = over_score[i] / std_num * 100.0;
	}

	for (int i = 0; i < class_num; i++) {
		printf("%.3lf%%\n", over_score[i]);
	}

	free(num_aryp);
	free(over_score);

	return 0;
}
*/
