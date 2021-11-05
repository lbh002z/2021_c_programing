#include <stdio.h>

int main(){
	int a1[3], a2[3];

	printf("input 3 integers\n");
	scanf("%d", a1);
	scanf("%d", a1+1);
	scanf("%d", a1+2);
	printf("input 3 integers\n");
	scanf("%d", a2);
	scanf("%d", a2+1);
	scanf("%d", a2+2);
	printf("output :\n");
	printf("%d %d %d\n", *a1 * *a2, *(a1+1) * *(a2+1), *(a1+2) * *(a2+2));
	return 0;
}
