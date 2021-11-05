#include <stdio.h>

double average(int n[][5], int index);

int main(){
	int n[3][5];
	
	scanf("%d %d %d %d %d", &n[0][0], &n[0][1], &n[0][2], &n[0][3], &n[0][4]);   
	scanf("%d %d %d %d %d", &n[1][0], &n[1][1], &n[1][2], &n[1][3], &n[1][4]);   
	scanf("%d %d %d %d %d", &n[2][0], &n[2][1], &n[2][2], &n[2][3], &n[2][4]);   

	double res[3];

	for (int i = 0; i < 3; i++)
		res[i] = average(n, i);

	printf("result : %f %f %f\n", res[0], res[1], res[2]);

}

double average(int n[][5], int index){
	double sum = 0; double avg;
	for (int i = 0; i < 5; i++)
		sum += n[index][i];
	avg = sum / 5;
	return avg;
}
