#include <stdio.h>
#define MAX 106

int main(){
	int n, i, j, m[MAX][MAX];

	while(scanf("%d", &n) != EOF){
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				m[i][j] = 0;
				if(i == j) m[i][j] = 2;
				if(j + i == n - 1) m[i][j] = 3;
				if(i >= n / 3 && j >= n / 3 && i < n - (n/3) && j < n - (n/3)) m[i][j] = 1;
				if(i == n/2 && j == n/2) m[i][j] = 4;
			}
		}

		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				printf("%d", m[i][j]);
			}
			printf("\n");
		}
		printf("\n");

	}

	return 0;
}
