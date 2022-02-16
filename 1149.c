#include <stdio.h>

int main() {
	int a, n, i = 0, soma = 0;

	scanf("%d", &a);

	while(1){
		scanf("%d", &n);
		if(n > 0) break;
	}

	for(i; i <= n - 1; i++){
		soma += a + i;
	}

	printf("%d\n", soma);

	return 0;	
}		
