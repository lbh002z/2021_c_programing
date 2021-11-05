#include <stdio.h>

int main(){
	
	printf("input a: ");
	int a;
	scanf("%d",&a);

	printf("a = %d\n",a);

	a++;
	printf("a = a + 1; a = %d\n",a);
	
	a++;
	printf("a = a + 1; a = %d\n",a);
	
	a--;
	printf("a = a - 1; a = %d\n",a);
	
	return 0;
	
	
}
