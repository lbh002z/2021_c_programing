#include <stdio.h>

int snchk(int a);

int divsum(int a);

int expo10(int a);


int main(){
	int a;
	scanf("%d", &a);
	if (snchk(a))
		printf("true\n");
	else
		printf("false\n");	
}

int snchk(int a){
	int i; int chk = 1;
	if (a > 9){
		for (i = a; i > 9; i--){
			if (a == divsum(i)) chk = 0;
		}
	}
	else chk = 1;
	return chk;
}

int divsum(int a){
	int sum = a; int i; int cnt; int tmp;
	float al = a;
	for (i = 10; i > 0; i--){
		if (al / expo10(i) > 1){
			cnt = i;
			break;
		}
	}
	for (i = cnt; i >= 0; i--){
		tmp = (a - (a % expo10(i))) / expo10(i);
		sum += tmp;
		a -= tmp * expo10(i);
	}
	return sum;
}

int expo10(int a){
	int res = 1;
	for (int i = 0; i < a; i++){
		res *= 10;
	}
	return res;
}
