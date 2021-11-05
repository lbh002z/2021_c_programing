#include <stdio.h>

void print_a(int* a);

int main(){
	int a[10];
	scanf("%d", a);
	scanf("%d", a+1);
	scanf("%d", a+2);
	scanf("%d", a+3);
	scanf("%d", a+4);
	scanf("%d", a+5);
	scanf("%d", a+6);
	scanf("%d", a+7);
	scanf("%d", a+8);
	scanf("%d", a+9);
	print_a(a);
	return 0;
}

void print_a(int* a){
	int key, i, j;
	for (i = 1; i < 10; i++){
		key = *(a+i);
		j = i - 1;
		while ( j >= 0 && *(a+j) < key){
			*(a+j+1) = *(a+j);
			j--;
		}
		*(a+j+1) = key;
	}
	printf("print array : ");
	printf("%d ",*a);
	printf("%d ",*(a+1));
	printf("%d ",*(a+2));
	printf("%d ",*(a+3));
	printf("%d ",*(a+4));
	printf("%d ",*(a+5));
	printf("%d ",*(a+6));
	printf("%d ",*(a+7));
	printf("%d ",*(a+8));
	printf("%d \n",*(a+9));
}
