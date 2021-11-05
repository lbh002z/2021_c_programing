#include <stdio.h>

void fibonacci(int *n){
	int i, tmp, an = 1, an1 = 1;
	for(i = 0; i < *n-2; i++){
		tmp = an;
		an = an + an1;
		an1 = tmp;
	}
	*n = an;
}

int main(){
	int a;
	scanf("%d", &a);
	fibonacci(&a);
	printf("%d\n", a);
}
