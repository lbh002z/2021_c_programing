#include <stdio.h>

void pyramid(int n);

int main(){
	int a;
	printf("number : ");
	scanf("%d",&a);	
	pyramid(a);

	return 0;
}

void pyramid(int n){
	int i; int j;
	for(i = 1; i < n + 1; i++){
		for(j = 1; j < i + 1; j++){
			printf("*");
		}
		printf("\n");
	}
}
