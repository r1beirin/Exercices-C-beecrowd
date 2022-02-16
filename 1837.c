#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	/*
	Refazer sem usar a comparação de cocientes e comparação de razao
	Tentar usar comparação de A e de B
	*/

	scanf("%d%d", &a, &b);
	int q = a/b, r = a % b;
	
	if(a < 0 && b < 0){
		q++;
		if(r == 0) q--;
	}
	if(a < 0 && b > 0){
		q--;
		if(r == 0) q++;
	}

	r = a - (b*q);
	printf("%d %d\n", q, r);
	
	return 0;
}
