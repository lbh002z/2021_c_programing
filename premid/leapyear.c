#include <stdio.h>

void LYcheck(int a);

int main(){
	int a;
	printf("Type year : ");
	scanf("%d",&a);

	LYcheck(a);
	return 0;
}

void LYcheck(int a){
	if (a % 400 == 0)
		printf("This is leap year!\n");
	else if (a % 100 == 0)
		printf("This is not leap year!\n");
	else if (a % 4 == 0)
		printf("This is leap year!\n");
	else
		printf("This is not leap year!\n");	
}
