#include <stdio.h>

int main(){
	int *a, *b, c, d;
	printf("c : ");
	scanf("%d", &c);
	printf("d : ");
	scanf("%d", &d);
	a = &c; b = &d;
	printf("a : %d\n", *a);
	printf("b : %d\n", *b);
	return 0;
}
