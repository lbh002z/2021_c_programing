#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("How many numeric data? (n) : ");
	int a;
	scanf("%d", &a);

	int *p = malloc(sizeof(a) * a);
	
	int i;
	
	for(i = 0; i < a; i++){
		scanf("%d", &p[i]);
	}	
	printf("Input data : ");
	for(i = 0; i < a; i++){
		printf("%d ", p[i]);
	}

	printf("\n");
	
	printf("How many additional numeric data? (m) : ");
	int b;
	scanf("%d", &b);

	p = realloc(p, sizeof(a) * (a + b));	

	for(i = a; i < a + b; i++){
		scanf("%d", &p[i]);
	}

	printf("Added Input data : ");
	for(i = 0; i < a + b; i++){
		printf("%d ", p[i]);
	}
	printf("\n");

	free(p);
}
