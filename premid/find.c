#include <stdio.h>

int main(){
	int arr1[3][3];
	scanf("%d %d %d", &arr1[0][0], &arr1[0][1], &arr1[0][2]);       
	scanf("%d %d %d", &arr1[1][0], &arr1[1][1], &arr1[1][2]);   
	scanf("%d %d %d", &arr1[2][0], &arr1[2][1], &arr1[2][2]);  

	int max = arr1[0][0]; int i; int j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if (max < arr1[i][j])
				max = arr1[i][j];

	printf("max number : %d\n", max);



}
