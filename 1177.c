#include <stdio.h>
#define MAX 1000

int main(){
	int t, n[MAX], i = 0, aux = 0;

	scanf("%d", &t);

	while (i < MAX){
		if(t > aux){
			n[i] = aux;
			aux++;
		}
		else{
			aux = 0;
			n[i] = aux;
			aux++;
		}
		printf("N[%d] = %d\n", i, n[i]);
		i++;
	}
	return 0;
}
