#include <stdio.h>

int main() {
    int i;
	double soma = 1, mult = 2.0;

	for(i = 3; i <= 39; i+=2){
		soma += i / mult;
		mult *= 2;
	}
	printf("%.2lf\n", soma);
	
	return 0;	
}
