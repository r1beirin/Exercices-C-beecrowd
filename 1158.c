#include <stdio.h>

int main() {
    int i, j, n, x , y, soma = 0;

	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d%d", &x, &y);

		for(j = x; j <= (x - 1) + (y * 2); j++){
			if(j % 2 != 0) soma += j;
		}

		printf("%d\n", soma);
		soma = 0;
	}
	
	return 0;	
}
