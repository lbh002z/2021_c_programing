#include <stdio.h>

int main(){
	int score[5]; int i;
	printf("input score\n");
	for (i = 0; i < 5; i++){
		scanf("%d", &score[i]);
	}

	int max = score[0];

	for (i = 0; i < 5; i++){
		if (max < score[i])
			max = score[i];
	}
	printf("max score : %d\n", max);
}
