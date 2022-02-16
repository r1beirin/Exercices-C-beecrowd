#include <stdio.h>

int main() {
	int x, z, soma = 0, contador = 0, i;

	scanf("%d", &x);

	while(1){
		scanf("%d", &z);
		if(z > x) break;
	}

	for(i = x; i <= z; i++){
		soma += i;
		contador++;
		if(soma > z) break;
	}
	printf("%d\n", contador);

	return 0;	
}		
