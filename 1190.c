#include <stdio.h>
#define MAX 12

int main(){
	int i, j, k;
	double m[MAX][MAX], soma = 0, media = 0, cont = 0;
	char t;

	scanf("%c", &t);

	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			scanf("%lf", &m[i][j]);
		}
	}
	
	for(i = 0; i < MAX / 2; i++){
		for(j = MAX - 1; j > MAX / 2; j--){
			if(i+j == MAX - 1){
				for(k = i; k < MAX / 2; k++){
					if(k+j == MAX - 1) continue;
					soma += m[k][j];
					cont++;
				}
			}
		}
	}

	for(i = MAX / 2; i < MAX; i++){
		for(j = MAX / 2; j < MAX; j++){
			if(i == j){
				for(k = j; k < MAX; k++){
					if(k == i) continue;
					soma += m[i][k];
					cont++;
				}
			}
		}
	}

	if(t == 'S') printf("%.1lf\n", soma);
	if(t == 'M') printf("%.1lf\n", soma / cont);

	return 0;
}
