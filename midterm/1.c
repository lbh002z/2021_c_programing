#include <stdio.h>

void comchk(int *a, int *count);

int main(){
	int a[10]; int b[10]; int count[10] = {1,1,1,1,1,1,1,1,1,1};
	int com; int min; int i; int cntmax;
	for (i = 0; i < 10; i++){
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	
	min = a[0];	

	for (i = 0; i < 10; i++){
		if (min > a[i]) min = a[i];
	}	

	comchk(b, count);

	cntmax = count[0];

	for (i = 0; i < 10; i++){
		 if (cntmax < count[i]) cntmax = count[i];
	}

	com = min;
	
	for (i = 0; i < 10; i++){
		if (cntmax == count[i]){
			if(a[i] > com){
				com = a[i];
			}
		}
	}
	printf("%d\n", min * com);
}

void comchk(int *a, int *count){	
	int i; int j;
	for (i = 0; i < 10; i++){
		for (j = i + 1; j < 10; j++){
			if (a[i] = a[j]){
				count[i]++;
				a[j] = a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]+i;		
			}	
		}
	}
}
