#include <stdio.h>

int sum(int arr[3][3], int a, int b, int c, int d);

int main(){
	int arr1[3][3];			
	int a; int b; int c; int d;
	scanf("%d %d %d", &arr1[0][0], &arr1[0][1], &arr1[0][2]);       
	scanf("%d %d %d", &arr1[1][0], &arr1[1][1], &arr1[1][2]);       
	scanf("%d %d %d", &arr1[2][0], &arr1[2][1], &arr1[2][2]);

	printf("input a b c d : ");
	scanf("%d %d %d %d", &a, &b, &c, &d);       

	int res = sum(arr1, a, b, c, d);
	printf("sum : %d\n", res);
}

int sum(int arr[3][3], int a, int b, int c, int d){
	int sum = arr[a - 1][b - 1] + arr[c - 1][d - 1];
	return sum;
	
}
