#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
	int arr[2][3] = {{1,2,3},{4,5,6}};
	int *a;
	a = &arr[0][0];
	printf("%d %d %d\n", *a, *(a+1), *(a+2));
	printf("%d %d %d\n", *a+3, *(a+4), *(a+5));
	return 0;
}
