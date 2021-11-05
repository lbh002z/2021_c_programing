#include <stdio.h>

int main(){
	int a[5]; int b[5]; int i;
	printf("first array\n");
	for (i = 0; i < 5; i++){
		scanf("%d", &a[i]);
	}
	printf("second array\n");
	for (i = 0; i < 5; i++){
		scanf("%d", &b[i]);
	}
	
	int chk = 0;

	for (i = 0; i < 5; i++){
		if (a[i] != b[i])
			break;
		chk++;		
	}

	if (chk == 5)
		printf("true\n");
	else
		printf("false\n");
}
