#include <stdio.h>

int CBV(int a1, int a2);

void CBR(int* a1, int* a2);

int main(){
	int a1, a2, b1, b2;

	printf("call-by-value\n");
	printf("input value 1: ");
	scanf("%d", &a1);
	printf("input value 2: ");
	scanf("%d", &a2);
	printf("\n");
	printf("call-by-reference\n");
	printf("input value 1: ");
	scanf("%d", &b1);
	printf("input value 2: ");
	scanf("%d", &b2);

	CBR(&b1, &b2);
	
	printf("\n");
	printf("result\n");
	printf("call-by-value: %d\n", CBV(a1, a2));
	printf("call-by-reference: %d\n", b1);
	
}

int CBV(int a1, int a2){
	int a = a1 + a2;
	return a;
}

void CBR(int *a1, int *a2){
	*a1 = *a1 + *a2;
}
