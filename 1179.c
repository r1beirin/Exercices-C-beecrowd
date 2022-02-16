#include <stdio.h>
#define MAX 5

int main(){
	int i, k, par[MAX], impar[MAX], vet[15], auxP = 0, auxI = 0;
	
	/*
	Preciso ler os 15 valores e armazenar em um vetor.
	Verificar se o num é par. Se for, então adiciono ele no vetor par[variavel auxiliar].
	Se for impar, adiciono no vetor impar[variavel auxiliar].
	*/
	for(i = 0; i < 15; i++){
		scanf("%d", &vet[i]);
		if(vet[i] % 2 == 0){
			par[auxP] = vet[i];
			auxP++;
		}
		else{
			impar[auxI] = vet[i];
			auxI++;
		}
		/* Se contador auxP = MAX. Então leio 5 numeros, rodo um for de 0-5 para printar e preciso definir a auxiliar para 0 novamente.
		Se contador auxI = MAX. Então leio 5 numeros, rodo um for de 0-5 para printar e preciso definir a auxiliar para 0 novamente.*/
		if(auxP == MAX){
			for(k = 0; k < MAX; k++){
				printf("par[%d] = %d\n", k, par[k]);
			}
			auxP = 0;
		}
		if(auxI == MAX){
			for(k = 0; k < MAX; k++){
				printf("impar[%d] = %d\n", k, impar[k]);
			}
			auxI = 0;
		}
	}
	// printar impar primeiro e depois par
	// Com k < MAX está bugando. Ele le de 0 a 5: le os 2 restantes e depois le os 3 do anterior.
	for (k = 0; k < auxI; k++){
		printf("impar[%d] = %d\n", k, impar[k]);
	}
	for (k = 0; k < auxP; k++){
		printf("par[%d] = %d\n", k, par[k]);
	}

	return 0;
}
