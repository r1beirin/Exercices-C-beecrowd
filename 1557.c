#include <stdio.h>
#include <math.h>
#define MAX 17

int main(){
	int n, i = 0, j = 0, m[MAX][MAX];

	while(1){
		int maior = 0, ultimo = 0, cont, dig = 0;
		scanf("%d", &n);
		if (n == 0) break;

		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				m[i][j] = pow(2, i+j);
			}
		}

		ultimo = m[n-1][n-1];
		while(ultimo != 0){
			ultimo /= 10;
			dig++;
		}
		
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				if(j == 0) printf("%*d", dig, m[i][j]);
				else printf(" %*d", dig, m[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
