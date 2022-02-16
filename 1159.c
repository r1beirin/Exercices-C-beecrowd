#include <stdio.h>

int main() {
    int n, i, soma = 0;

	while (1){
		scanf("%d", &n);
		if(n == 0) break;

		if(n % 2 != 0){
			for(i = n; i <= n + 10; i++){
				if(i % 2 == 0) soma += i;
			}
		}

		if(n % 2 == 0){
			for(i = n; i <= n + 8; i++){
				if(i % 2 == 0) soma += i;
			}
		}

		printf("%d\n", soma);
		soma = 0;
	}
	
	return 0;	
}
