#include <stdio.h>

void is(int list[], int n);

int main(){
	
	FILE *ifp; FILE *ofp;
	int i; int a[10];

	ifp = fopen("input3.txt", "r");
	ofp = fopen("output3.txt", "w");

	for (i = 0; i < 10; i++){
		fscanf(ifp, "%d", &a[i]);
	}
	
	is(a, 10);

	for (i = 0; i < 10; i++){
		fprintf(ofp, "%d\n", a[i]);
	}

	fclose(ifp);
	fclose(ofp);

	return 0;
}

void is(int list[], int n){
	int i, j, key;

	for(i = 1; i < n; i++){
		key = list[i];
		for(j = i - 1; j >= 0 && list[j] > key; j--){
			list[j + 1] = list[j];
		}
		list[j+1] = key;
	}
}
