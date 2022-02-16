#include <stdio.h>

int main() {
	double i, soma = 0;

	for(i = 1; i <= 100; i++){
		soma += (1/i);
	}

	printf("%.2lf\n", soma);

	return 0;	
}		
