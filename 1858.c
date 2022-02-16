#include <stdio.h>
#define MAX 110

/*
Entrada com N indicando T inteiros a serem colocados no vetor.
Procurar o menor e imprimir a posição do menor número no vetor.
*/

int main(){
	int n, t[MAX], i, menor = 0, aux = 0;

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%d", &t[i]);
	}

	
	for(i = 0; i < n; i++){
		if(i == 0){
			menor = t[i];
			aux = i + 1;
		}
		if(menor > t[i]){
			menor = t[i];
			aux = i + 1;
		}
	}

	printf("%d\n", aux);
	
	return 0;
}
