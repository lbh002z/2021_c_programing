#include <stdio.h>

void sum(int a);

int main(){
	int a;
	printf("number : ");
	scanf("%d", &a);
	sum(a);
	return 0;
}

void sum(int a){
	int i; int sum;
	for(i = 1; i < a + 1; i++){
		sum += i;
	}
	printf("%d\n", sum);
}
