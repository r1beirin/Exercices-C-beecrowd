#include <stdio.h>
#define MAX 105

int main(){
	int n, i, j, m[MAX][MAX], k;

	while(1){
		scanf("%d", &n);
		if (n == 0) break;

		/*
		Aumentando de cima pra baixo quando i > j
		Aumentando da esquerda pra direita quando j > i
		*/
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				if(i == j){
					for(k = i; k < n; k++){
						m[k][j] = k - j + 1;
					}	
					for(k = j; k < n; k++){
						m[i][k] = k - i + 1;
					}	
					m[i][j] = 1;
				}
			}
		}

		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				if(j == 0) printf("%3d", m[i][j]);
				else printf(" %3d", m[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
