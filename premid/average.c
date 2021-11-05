#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){

	FILE *ifp; FILE *ofp;
	char name[10]; int score1; int score2; float av;

	ifp = fopen("input2.txt", "r");
	ofp = fopen("output2.txt", "w");

	for(int i = 0; i < 4; i++){
		fscanf(ifp, "%s %d %d", name, &score1, &score2);
		av = (score1 + score2) / 2;
		fprintf(ofp, "%s %f\n", name, av);
	}

	fclose(ifp);
	fclose(ofp);
	return 0;
}
