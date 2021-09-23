#include <stdio.h>

int result(int a, int b);
void printResult(int a);

int main(){
	int a; int b;
	printf("a : ");
	scanf("%d", &a);
	printf("b : ");
	scanf("%d", &b);;
	result(a, b);
	return 0;
}

int result(int a, int b){
	int sum = 3000 * a + 4000 * b;
	printResult(sum);
	return 0;
}

void printResult(int a){
	printf("Total cost : %d\n", a);
}






