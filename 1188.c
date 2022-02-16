#include <stdio.h>
#define MAX 12

int main(){
	int i, j, k, l;
	double m[MAX][MAX], soma = 0, somaUm = 0, somaDois = 0, media = 0, cont = 0;
	char t;

	scanf("%c", &t);

	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			scanf("%lf", &m[i][j]);
		}
	}
	
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			if(i == j){
				// Calculo sentido diagonal principal baixo sempre da direita pra esquerda
				for(k = j; k > (MAX / 2) - 1; k--){ 
					if(k == j) continue;
					soma += m[i][k];
					cont++;
				}
			}
		}
	}

	somaUm = soma;
	soma = 0;

	for(i = MAX - 1; i > 6; i--){
		for(j = 0; j <= 5; j++){
			if(i + j == MAX - 1){
				// Calculo sentido diagonal secundária baixo sempre da esquerda pra direita
				for(k = j; k <= 5; k++){
					if(k + i == MAX - 1) continue;
					soma += m[i][k];
					cont++;
				}
			}
		}
	}

	somaDois = soma;
	
	if(t == 'S') printf("%.1lf\n", somaUm + somaDois);
	if(t == 'M') printf("%.1lf\n", (somaUm + somaDois) / cont);
	
	return 0;
}
