#include <stdio.h>
#include <stdlib.h>

int sugar(int, int);

int main() {

	int N;
	int res = 0;

	scanf("%d", &N);
	printf("%d",sugar(N, res));

	return 0;
}

int sugar(int N, int cnt){

	if (N > 0) {
		if (N % 5 == 0) {
			N -= 5;
			cnt++;
		}
		else {
			if (N > 5) {
				if (N % 3 == 0) {
					N -= 3;
					cnt++;
				}
				else {
					N -= 5;
					cnt++;
				}
			}
			else {
				N -= 3;
				cnt++;
			}
		}

		sugar(N, cnt);
	}
	else if(N<0){
		return -1;
	}
	else {
		return cnt;
	}
	
}