#include <stdio.h>
#define MAX 12

int main(){
	int i, j, c;
	double m[MAX][MAX], soma = 0, media = 0;
	char t;

	scanf("%d %c", &c, &t);

	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			scanf("%lf", &m[i][j]);
		}
	}

	for(i = 0; i < MAX; i++){
		soma += m[i][c];
	}

	if(t == 'S') printf("%.1lf\n", soma);
	if(t == 'M') printf("%.1lf\n", soma / MAX);

	return 0;
}
