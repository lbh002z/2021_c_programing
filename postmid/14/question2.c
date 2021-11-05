#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("input number of subject num\n");
	int a; int i; float sum = 0;
	scanf("%d", &a);
	int *p = malloc(sizeof(a) * a);
	for (i = 0; i < a; i++){
		printf("input subject number [%d/%d]\n", i+1, a);
		scanf("%d", &p[i]);
		sum += p[i];
	}
	printf("average : %.2f\n", sum / a);

	free(p);
}
