#include <stdio.h>

int main(){
	int a;
	printf("input value:");
	scanf("%d", &a);

	int *p, *i;
	p = &a; i = &a;

	int **q ,**j, **l;
	q = &p; j = &i; l = &i;

	int ***r, ***k, ***m, ***n;
	r = &q; k = &j; m = &l; n = &l;

	printf("value of a : %d\n", *p);
	printf("value of a : %d\n", *i);
	printf("value of a : %d\n", **q);
	printf("value of a : %d\n", **j);
	printf("value of a : %d\n", **l);
	printf("value of a : %d\n", ***r);
	printf("value of a : %d\n", ***k);
	printf("value of a : %d\n", ***m);
	printf("value of a : %d\n", ***n);

	return 0;
}
