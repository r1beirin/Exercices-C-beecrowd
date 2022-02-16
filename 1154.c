#include <stdio.h>
#define MAX 100

int main() {
	int n, idade[MAX], soma = 0;
	double media, contador = 0;

	while (1){
		scanf("%d", &n);
		if(n < 0) break;

		idade[0] = n;
		soma += idade[0];
		contador++;
	}

	media = soma / contador;
	printf("%.2lf\n", media);

	return 0;	
}		
