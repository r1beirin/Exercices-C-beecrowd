#include <stdio.h>

int main(){
	int n, i, j;
	
	//https://www.tutorialspoint.com/explain-the-end-of-file-eof-with-a-c-program ler
	while(scanf("%d", &n) != EOF){
		int m[n][n];

		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				//diag. principal
				if(i == j) m[i][j] = 1;
				//diag. secundaria
				if(i + j == n - 1) m[i][j] = 2;
				//se for diferente da principal e secundaria
				if(i != j && i + j != n - 1) m[i][j] = 3;
			}
		}

		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				printf("%d", m[i][j]);
			}	
			printf("\n");
		}
	}
	

	return 0;
}
