#include <stdio.h>

void CBR(int* a);

int CBV(int a);

int main(){

	int a;
	printf("input value: ");
	scanf("%d", &a);
	printf("after\n");
	printf("call-by-value: %d\n", CBV(a));
	int b = a;
	CBR(&b);
	printf("call-by-reference: %d\n", b);
	return 0;
}

void CBR(int* a){
	*a = *a * *a;
}

int CBV(int a){
	a = a * a;
	return a;
}

