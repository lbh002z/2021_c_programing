#include <stdio.h>

void swap(int* a, int* b); 

int main(){
	
	int a = 2, b = 3;
	swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}

void swap(int* a, int* b){

	int tmp;
	tmp = *a; *a = *b; *b = tmp;

}

