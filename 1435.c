#include <stdio.h>
#define MAX 105

int main(){
	int n, i, j, m[MAX][MAX], aux, k;
	int parada = 1, c, l, condicao;

	while(1){
		scanf("%d", &n);	
		c = n, l = 0, condicao = (n/2)+n%2;

		if(n == 0) break;

		// parada = ponto de parada do elemento central
		// pensando no 5, seria o 3.
		// pensando no 7, seria 4.
		// 5 / 2 = 2 + 5%2 = 1 ~> 3
		// 7 / 2 = 3 + 7%2 = 1 ~> 4
		// Para ter o elemento central é necessário a condição de parada ser + n%2.
		for(parada= 1; parada <= condicao; parada++){
			for(i = l; i < c; i++){
				for(j = l; j < c; j++){
					m[i][j] = parada;
				}
			}
			// Incrementa para modificar linhas internas
			l++;
			// Decrementa para modificar colunas internas.
			c--;
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
