#include <stdio.h>

int check(int *octArray);

int sum(int *oct1, int *oct2, int *result);

int expo10(int a);

int main(){
	int oct[2]; int result;

	scanf("%d", &oct[0]);
	scanf("%d", &oct[1]);

	if (!octArray(oct)) printf("Not Octadecimal");
	else {
		if (int sum(&oct[0], &oct[1], &result)) printf("Overflow");
		else printf("%d", result);
	}
}

int check(int *octArray){
	int i; int a1 = octArray[0]; int a2 = octArray[1]; int chk = 0; int tmp;
	for(i = 4; i >= 0; i--){	
		tmp = (a1 - (a1 % expo10(i))) / expo10(i);
		if (tmp > 7) {
			chk = 1;
			break;
		a1 -= tmp * expo10(i);
		}
	}
	for(i = 4; i >= 0; i--){	
		tmp = (a2 - (a2 % expo10(i))) / expo10(i);
		if (tmp > 7) {
			chk = 1;
			break;
		a2 -= tmp * expo10(i);
		}
	}
	return chk;
}	

int expo10(int a){
	int res;
	for (int i = 0; i < a; i++){
		res *= 10;
	}
	return res;
}
