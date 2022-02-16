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
	
	for(i = 0; i < MAX; i++){
		for(j = MAX - 1; j >= 0; j--){
			if(j + i == MAX - 1){
				for(k = j; k >= 0; k--){
					soma += m[i][k];
					cont++;
				}
				soma -= m[i][j];
				cont--;
			}
		}
	}

	if(t == 'S') printf("%.1lf\n", soma);
	if(t == 'M') printf("%.1lf\n", soma / cont);

	return 0;
}
